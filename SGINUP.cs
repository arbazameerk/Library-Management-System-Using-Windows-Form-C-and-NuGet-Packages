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
    public partial class SIGNUP : Form
    {
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        public SIGNUP()
        {
            InitializeComponent();
            label6.Text = "";
        }

        private void textBox3_KeyPress(object sender, KeyPressEventArgs e)
        {
          //NONE
        }
        private void SGINUP_Load(object sender, EventArgs e)
        {
            //none
        }

        private void textBox4_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.Handled = !char.IsDigit(e.KeyChar))
            {
                errorProvider1.SetError(label6, "AGE ONLY IN NUMBERS!");
                label6.Text = "AGE ONLY IN NUMBERS!";
            }
            else
            {
                errorProvider1.SetError(label6, "");
                label6.Text = "";
            }
        }

        /*
          
         */

        private void guna2Button1_Click_1(object sender, EventArgs e)
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            bool check = false;
            
            if (textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" || textBox4.Text == "")
            {
                MessageBox.Show("Empty Feilds, Please retry");
            }
            else if (Convert.ToInt32(textBox4.Text.Trim()) < 18)
            {
                MessageBox.Show("AGE SHOULD BE GREATER THAN 18, retry");
                textBox4.Text = "";
            }
            else
            {
                int age = Convert.ToInt32(textBox4.Text.Trim());
                try
                {
                    OracleConnection con = new OracleConnection(constring);
                    con.Open();
                    OracleCommand cmd = new OracleCommand();

                    string q = "insert into students (EMAIL,PASSWORD,NAME,AGE)" +
                               "values('" + textBox1.Text + "@cfd.nu.edu.pk','" + textBox2.Text + "','" + textBox3.Text + "'," + textBox4.Text + ")";
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
                    string message = "Successfully Inserted, press yes to go back to login page or no to exit the application";
                    string title = "Successfull Insertion!";
                    MessageBoxButtons buttons = MessageBoxButtons.YesNo;
                    DialogResult result = MessageBox.Show(message, title, buttons);
                    if (result == DialogResult.Yes)
                    {
                        Login obj = new Login();
                        this.Hide();
                        obj.Show();
                    }
                    else
                    {
                        Application.Exit();
                    }
                }
            }
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Login obj2 = new Login();
            this.Close();
            obj2.Show();
        }
    }
}
