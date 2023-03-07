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
    public partial class Login : Form
    {
        //this string will be used in the user panel
        string name_for_user_panel;
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        string email_for_user_panel;
        //bool check = false;
        public Login()
        {
            InitializeComponent();
            //OracleConnection con = new OracleConnection(constring);
        }

        private void CLOSE_BUTTON_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void MINIMIZE_BUTTON_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }

        private void USERNAME_TEXTBOX_TextChanged(object sender, EventArgs e)
        {
            if (USERNAME_TEXTBOX.Text == "username")
            {
                USERNAME_TEXTBOX.Text = "";
            }
        }

        private void PASSWORD_TEXTBOX_TextChanged(object sender, EventArgs e)
        {
            if (PASSWORD_TEXTBOX.Text == "password")
            {
                PASSWORD_TEXTBOX.Text = "";
            }
        }

        private void LOGIN_BUTTON_Click(object sender, EventArgs e)
        {
            DataTable dtb = new DataTable();
            try
            {
                //sql query to login -----> using the students table 
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleCommand cmd = new OracleCommand();
                cmd = new OracleCommand("select name,EMAIL from students WHERE email = '" + USERNAME_TEXTBOX.Text.Trim() + "' AND password = '" + PASSWORD_TEXTBOX.Text.Trim() + "'", con);
                OracleDataAdapter adapt = new OracleDataAdapter(cmd);
                adapt.Fill(dtb);
                OracleDataReader da = cmd.ExecuteReader();
                while (da.Read())
                {
                    name_for_user_panel = da.GetValue(0).ToString();
                    email_for_user_panel = da.GetValue(1).ToString();
                }
                cmd.Connection = con;
                cmd.CommandType = CommandType.Text;
                con.Close();
            }
            catch 
            {
                MessageBox.Show("Problem in the connection string, while connecting to oracle database");
            }

            if (USERNAME_TEXTBOX.Text == "admin" && PASSWORD_TEXTBOX.Text == "admin")
            {
                //creating a new form that will be accessed after the button is clicked
                Admin_Module obj = new Admin_Module();
                this.Hide();
                obj.Show();
            }
            //ADDING THE ORACLE TABLE OF USER'S PASSWORDS
            else if (dtb.Rows.Count == 1)
            {
                //creating a new form that will be accessed after the button is clicked
                User_Module obj2 = new User_Module();
                
                obj2.NAME_CHANGE(name_for_user_panel.ToString());//passing the name for user panel!
                
                //passing the email
                obj2.email(USERNAME_TEXTBOX.Text.Trim());
                Return_Book_user temp2 = new Return_Book_user();
                temp2.email_pass(email_for_user_panel);

                this.Hide();
                obj2.Show();
            }
            else
            {
                string message = "YOU'VE ENTERED THE WRONG PASSWORD, DO YOU WANT TO RETRY? IF YES, THEN PRESS 'Yes' IF NO PRESS 'No' THIS WILL RESULT IN APPLICATION CLOSURE";
                string title = "WRONG PASSWORD!";
                MessageBoxButtons buttons = MessageBoxButtons.YesNo;
                DialogResult result = MessageBox.Show(message, title, buttons);
                if (result == DialogResult.Yes)
                {
                    this.Refresh();
                }
                else
                {
                    Application.Exit();
                }
            }
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            SIGNUP obj3 = new SIGNUP();
            this.Hide();
            obj3.Show();
        }
    }
}
