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
    public partial class Update_book_admin : Form
    {
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        public Update_book_admin()
        {
            InitializeComponent();
        }

        public void ex()
        {
            string q1 = "delete from books WHERE BOOKNAME = '" + guna2TextBox1.Text.Trim() + "'";
            string q = "insert into books (BOOKNO,BOOKNAME,AVAILABLE,SUBSCRIBED_EMAIL)" +
                                       "values( seq_person.nextval ,'" + guna2TextBox2.Text.Trim() + "','YES',0)";
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleCommand cmd = new OracleCommand();
                cmd = new OracleCommand(q1, con);
                cmd.Connection = con;
                cmd.CommandType = CommandType.Text;
                cmd.ExecuteNonQuery();
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

            try
            {
                int count = Convert.ToInt32(guna2TextBox5.Text.Trim());
                for (int i = 1; i <= count; i++)
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
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void guna2Button1_Click(object sender, EventArgs e)
        {
            
            if (guna2TextBox1.Text == "" || guna2TextBox2.Text == "" || guna2TextBox3.Text == "" || guna2TextBox4.Text == "" || guna2TextBox5.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else if (guna2TextBox1.Text == "" && guna2TextBox2.Text == "" && guna2TextBox3.Text == "" && guna2TextBox4.Text == "" && guna2TextBox5.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else
            {
                bool check = false;
                try
                {
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();
                    

                    string q = "update lib " +
                               "set BOOKNAME = '" + guna2TextBox2.Text + "', AUTHOR = '" + guna2TextBox3.Text + "',  PUBLICATION = '" + guna2TextBox4.Text + "', NOOFCOPIES = " + guna2TextBox5.Text + " WHERE BOOKNAME = '" + guna2TextBox1.Text + "' ";

                    cmd = new OracleCommand(q, con);
                    cmd.Connection = con;
                    cmd.CommandType = CommandType.Text;
                    cmd.ExecuteNonQuery();
                    con.Close();
                    check = true;
                }
                catch (Exception ex)
                {
                    check = false;
                    MessageBox.Show(ex.Message);
                }
                if (check == true)
                {
                    ex();
                    guna2TextBox1.Text = " ";
                    guna2TextBox2.Text = " ";
                    guna2TextBox3.Text = " ";
                    guna2TextBox4.Text = " ";
                    guna2TextBox5.Text = " ";
                    string message = "Successfully Updated";
                    string title = "Successfull Updation!";
                    MessageBoxButtons buttons = MessageBoxButtons.OK;
                    DialogResult result = MessageBox.Show(message, title, buttons);
                }
                else
                {
                    guna2TextBox1.Text = " ";
                    guna2TextBox2.Text = " ";
                    guna2TextBox3.Text = " ";
                    guna2TextBox4.Text = " ";
                    guna2TextBox5.Text = " ";
                    string message = "Failed to Update, previous book not found!";
                    string title = "Failed to Update!";
                    MessageBoxButtons buttons = MessageBoxButtons.OK;
                    DialogResult result = MessageBox.Show(message, title, buttons);
                }
            }
        }
    }
}
