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
    public partial class Issue_Book_user : Form
    {
        string today = DateTime.Now.ToString("yyyy-MM-dd");
        string email;
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        public Issue_Book_user()
        {
            InitializeComponent();
            LOAD();
        }
        
        public void email_pass(string ab)
        {
            email = ab;
        }

        public void LOAD()
        {
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleDataAdapter adapt;

                string q = "select * from lib";
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

        public void LOAD2(string m)
        {
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleDataAdapter adapt;

                string q = m;
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

        public void query_universal(string q1)
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
            string a = email, b = today;
            if (guna2TextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else
            {
                bool check = false;
                bool check2 = false;
                string st = "";
                string q5 = "select STATUS from subscription WHERE BOOKNAME = '" + guna2TextBox1.Text.Trim() + "' AND STATUS = 'NOT RETURNED'";
                try
                {
                    DataTable dtb = new DataTable();

                    //sql query to login -----> using the students table 
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();
                    cmd = new OracleCommand(q5, con);
                    OracleDataAdapter adapt = new OracleDataAdapter(cmd);
                    adapt.Fill(dtb);
                    OracleDataReader da = cmd.ExecuteReader();
                    while (da.Read())
                    {
                        st = da.GetValue(0).ToString();
                    }
                    cmd.Connection = con;
                    cmd.CommandType = CommandType.Text;
                    con.Close();

                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
                if (st == "NOT RETURNED")
                {
                    check2 = true;
                }
                else
                {
                    check2 = false;
                }
                string q1 = "update books set AVAILABLE = 'NO', SUBSCRIBED_EMAIL = '" + a + "' WHERE BOOKNAME = '" + guna2TextBox1.Text.Trim() + "' AND ROWNUM = 1";
                string q2 = "update lib " +
                            "SET NOOFCOPIES = NOOFCOPIES - 1 " +
                            "WHERE BOOKNAME = '" + guna2TextBox1.Text.Trim() + "'";
                string q3 = "insert into subscription (SUBID,BOOKNAME,EMAIL,DO_SUB,DO_RETURN,FINEAMOUNT,STATUS)" +
                            "values(seq_subID.nextval,'" + guna2TextBox1.Text.Trim() + "','" + a + "',TO_DATE('" + b + "','yyyy/MM/dd'),TO_DATE('" + dateTimePicker1.Text.Trim() + "','yyyy/MM/dd'),0,'NOT RETURNED')";
                if (check2 == false)
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
                    try
                    {
                        OracleConnection con = new OracleConnection(constring);
                        con.Open();
                        OracleCommand cmd = new OracleCommand();
                        cmd = new OracleCommand(q2, con);
                        cmd.Connection = con;
                        cmd.CommandType = CommandType.Text;
                        cmd.ExecuteNonQuery();
                        con.Clone();

                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show(ex.Message);
                    }
                    try
                    {
                        OracleConnection con = new OracleConnection(constring);
                        con.Open();
                        OracleCommand cmd = new OracleCommand();
                        cmd = new OracleCommand(q3, con);
                        cmd.Connection = con;
                        cmd.CommandType = CommandType.Text;
                        cmd.ExecuteNonQuery();
                        con.Clone();
                        check = true;
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show(ex.Message);
                    }
                    if (check == false)
                    {
                        guna2TextBox1.Text = " ";

                        string message = "Sorry no books are like the name you have searched!";
                        string title = " ";
                        MessageBoxButtons buttons = MessageBoxButtons.OK;
                        DialogResult result = MessageBox.Show(message, title, buttons);
                    }
                    else
                    {
                        string message = "BOOK ISSUED SUCCESSFULLY!";
                        string title = " ";
                        MessageBoxButtons buttons = MessageBoxButtons.OK;
                        guna2TextBox1.Text = " ";

                        DialogResult result = MessageBox.Show(message, title, buttons);
                    }
                }
                else
                {
                    string message = "Sorry :( \n We can not issue this book to you as you have issued this specific book before too";
                    string title = "Sorry :( ";
                    MessageBoxButtons buttons = MessageBoxButtons.OK;
                    guna2TextBox1.Text = " ";

                    DialogResult result = MessageBox.Show(message, title, buttons);
                }
            }
        }

        private void guna2TextBox1_TextChanged(object sender, EventArgs e)
        {
            string q = "select * from lib WHERE BOOKNAME LIKE '%" + guna2TextBox1.Text + "%'";
            LOAD2(q);
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                guna2TextBox1.Text = row.Cells[0].Value.ToString();
            }
        }
    }
}
