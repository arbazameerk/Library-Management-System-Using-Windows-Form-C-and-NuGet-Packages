using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Oracle.ManagedDataAccess.Client;
using Oracle.ManagedDataAccess.Types;

namespace Library_Management_System
{
    public partial class Return_Book_user : Form
    {
        string today = DateTime.Now.ToString("yyyy-MM-dd");
        string a;
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        double fineamount;
        string date_sub;
        public Return_Book_user()
        {
            InitializeComponent();
        }
        public void email_pass(string ab)
        {
            a = ab;
        }

        public void load()
        {
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleDataAdapter adapt;

                string q = "select subscription.BOOKNAME,books.bookno,subscription.DO_SUB,subscription.DO_RETURN,subscription.FINEAMOUNT,subscription.STATUS  from subscription INNER JOIN books on books.subscribed_email = '" + a + "' AND subscription.STATUS = 'NOT RETURNED'";
                DataTable dt = new DataTable();
                adapt = new OracleDataAdapter(q, con);
                adapt.Fill(dt);
                dataGridView1.DataSource = dt;
               
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        public void fineUP()
        {
            DataTable dtb = new DataTable();
            try
            {
                //sql query to login -----> using the students table 
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleCommand cmd = new OracleCommand();
                cmd = new OracleCommand("select FINEAMOUNT,DO_SUB from subscription WHERE email = '" + a + "'", con);
                OracleDataAdapter adapt = new OracleDataAdapter(cmd);
                adapt.Fill(dtb);
                OracleDataReader da = cmd.ExecuteReader();
                while (da.Read())
                {
                    fineamount = Convert.ToInt32(da.GetValue(0).ToString());
                    date_sub = da.GetValue(1).ToString();
                }
                cmd.Connection = con;
                cmd.CommandType = CommandType.Text;
                con.Close();
            }
            catch
            {
                MessageBox.Show("Problem in the connection string, while connecting to oracle database");
            }
            DateTime date1 = DateTime.Parse(date_sub);
            DateTime date2 = DateTime.Parse(today);
            long val1 = date2.Ticks - date1.Ticks;
            double val = Convert.ToDouble(val1);
            if (val > 7 || val < 0)
            {
                fineamount = 100 * val;
                string q = "UPDATE subscription set DO_SUB = TO_DATE('" + today + "','yyyy/MM/dd'), FINEAMOUNT = " + fineamount + ", STATUS = 'RETURNED' WHERE email = '" + a + "'";
                try
                {
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();
                    cmd = new OracleCommand(q, con);
                    cmd.Connection = con;
                    cmd.CommandType = CommandType.Text;
                    cmd.ExecuteNonQuery();
                    con.Clone();
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }
            else
            {
                string qs = "UPDATE subscription set DO_SUB = TO_DATE('" + today + "','yyyy/MM/dd'), FINEAMOUNT = 0, STATUS = 'RETURNED' WHERE email = '" + a + "'";

                try
                {
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();
                    cmd = new OracleCommand(qs, con);
                    cmd.Connection = con;
                    cmd.CommandType = CommandType.Text;
                    cmd.ExecuteNonQuery();
                    con.Clone();
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }
        }

        public void up1(string q1)
        {
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleCommand cmd = new OracleCommand();
                cmd = new OracleCommand(q1, con);
                cmd.Connection = con;
                cmd.CommandType = CommandType.Text;
                cmd.ExecuteNonQuery();
                con.Clone();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void guna2Button1_Click(object sender, EventArgs e)
        {
            if (guna2TextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else
            {
                string q1 = "update books set AVAILABLE = 'YES', SUBSCRIBED_EMAIL = 0 WHERE BOOKNAME = '" + guna2TextBox1.Text.Trim() + "' AND ROWNUM = 1";
                string q2 = "update lib " +
                            "SET NOOFCOPIES = NOOFCOPIES + 1 " +
                            "WHERE BOOKNAME = '" + guna2TextBox1.Text.Trim() + "'";
                up1(q1);
                up1(q2);
                fineUP();
                load();
            }
        }

        private void Return_Book_user_Load(object sender, EventArgs e)
        {
            load();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                guna2TextBox1.Text = row.Cells[0].Value.ToString();
            }
        }
        //add the click to return book thing using data grid
    }
}
