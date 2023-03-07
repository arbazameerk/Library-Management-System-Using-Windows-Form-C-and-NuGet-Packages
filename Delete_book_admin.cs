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
    public partial class Delete_book_admin : Form
    {
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";

        public Delete_book_admin()
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
        public void ex_q(string q)
        {
            OracleConnection con = new OracleConnection(constring);
            con.Open();
            OracleCommand cmd = new OracleCommand();
            cmd = new OracleCommand(q, con);
            cmd.Connection = con;
            cmd.CommandType = CommandType.Text;
            cmd.ExecuteNonQuery();
            con.Close();

        }
        private void guna2Button1_Click(object sender, EventArgs e)
        {
            //ADD A DATA GRID OF ALL THE BOOKS SHOWING IN IT TOO
            bool check = false;
            
            if (guna2TextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            //check if the name writen of the previous book matches the database
            else
            {
                string q = "delete from lib WHERE BOOKNAME LIKE '" + guna2TextBox1.Text.Trim() + "%'";
                string q1 = "delete from books WHERE BOOKNAME LIKE '" + guna2TextBox1.Text.Trim() + "%'";
                string q3 = "delete from subscription WHERE BOOKNAME LIKE '" + guna2TextBox1.Text.Trim() + "%' AND STATUS = 'RETURNED'";
                ex_q(q3);
                try
                {
                    OracleConnection con1 = new OracleConnection(constring);
                    con1.Open();
                    OracleCommand cmd1 = new OracleCommand();
                    cmd1 = new OracleCommand(q, con1);
                    cmd1.Connection = con1;
                    cmd1.CommandType = CommandType.Text;
                    cmd1.ExecuteNonQuery();
                    con1.Close();
                    LOAD();
                    check = true;
                }
                catch (Exception ex)
                {
                    check = false;
                    MessageBox.Show("Sorry, You can not delete this book as it might still be subscribed to some of the members\n You will be able to delete this book ---> "+guna2TextBox1.Text+" is returned");
                }
                if (check == true)
                {
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();
                    cmd = new OracleCommand(q1, con);
                    cmd.Connection = con;
                    cmd.CommandType = CommandType.Text;
                    cmd.ExecuteNonQuery();
                    con.Close();

                    guna2TextBox1.Text = " ";
                    string message = "Deleted Successfully";
                    string title = "Deleted Successfully!";
                    MessageBoxButtons buttons = MessageBoxButtons.OK;
                    DialogResult result = MessageBox.Show(message, title, buttons);
                }
            }

        }
        
    
        private void Guna2DataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            /**/
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
