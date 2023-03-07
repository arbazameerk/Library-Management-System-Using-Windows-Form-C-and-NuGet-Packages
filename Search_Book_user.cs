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
    public partial class Search_Book_user : Form
    {
        public Search_Book_user()
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
                string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
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

        private void guna2Button1_Click(object sender, EventArgs e)
        {
            if (guna2TextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else
            {
                bool check = false;
                try
                {
                    string q = "select * from lib WHERE BOOKNAME LIKE '%" + guna2TextBox1.Text + "%'";

                    LOAD2(q);
                    check = true;
                }
                catch (Exception ex)
                {
                    check = false;
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
            }
        }

        private void guna2TextBox1_TextChanged(object sender, EventArgs e)
        {
            string q = "select * from lib WHERE BOOKNAME LIKE '%" + guna2TextBox1.Text + "%'";

            LOAD2(q);
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                guna2TextBox1.Text = row.Cells[0].Value.ToString();
            }
        }
    }
}
