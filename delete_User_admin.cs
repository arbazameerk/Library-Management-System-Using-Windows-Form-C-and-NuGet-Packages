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
    public partial class delete_User_admin : Form
    {
        public delete_User_admin()
        {
            InitializeComponent();
            LOAD();
        }

        public void LOAD()
        {
            try
            {
                string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleDataAdapter adapt;

                string q = "select EMAIL,NAME,AGE from students";
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
        private void guna2Button1_Click(object sender, EventArgs e)
        {
            if (btn1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else
            {
                bool check = false;
                try
                {
                    string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();


                    string q = "delete from students WHERE EMAIL = '" + btn1.Text + "'";

                    cmd = new OracleCommand(q, con);
                    cmd.Connection = con;
                    cmd.CommandType = CommandType.Text;
                    cmd.ExecuteNonQuery();
                    con.Close();
                    LOAD();
                    check = true;
                }
                catch (Exception ex)
                {
                    check = false;
                    MessageBox.Show(ex.Message);
                }
                if (check == true)
                {
                    btn1.Text = " ";

                    string message = "Deleted Successfully";
                    string title = "Deleted Successfully!";
                    MessageBoxButtons buttons = MessageBoxButtons.OK;
                    DialogResult result = MessageBox.Show(message, title, buttons);
                }
            }
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                btn1.Text = row.Cells[0].Value.ToString();
            }
        }
    }
}
