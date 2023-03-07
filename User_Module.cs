using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Library_Management_System
{
    public partial class User_Module : Form
    {
        string b;
        string a;
        //instance for the active form
        private Form activeForm;
        public User_Module()
        {
            InitializeComponent();
        }

        public void NAME_CHANGE(string ab)
        {
            b = ab.ToString();
            NAME_AT_USER.Text = b;
        }

        public void email(string f)
        {
            a = f;
        }


        //function to open a form in the panel 5
        private void OpenChildForm(Form childForm, object btnSender)
        {
            if (activeForm != null)
            {
                activeForm.Close();
            }
            activeForm = childForm;
            childForm.TopLevel = false;
            childForm.FormBorderStyle = FormBorderStyle.None;
            childForm.Dock = DockStyle.Fill;
            this.panel5.Controls.Add(childForm);
            this.panel5.Tag = childForm;
            childForm.BringToFront();
            childForm.Show();
            label1.Text = childForm.Text;
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Login obj2 = new Login();
            this.Hide();
            obj2.Show();
        }

        private void MIN_BUTTONFORM2_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }

        private void CLOSE_BUTTONFORM2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void linkLabel1_LinkClicked_1(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Login obj2 = new Login();
            this.Hide();
            obj2.Show();
        }

        private void search_book_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Search_Book_user(), sender);
        }

        private void issue_book_Click(object sender, EventArgs e)
        {
            Issue_Book_user obj = new Issue_Book_user();
            obj.email_pass(a);
            OpenChildForm(obj, sender);
        }

        private void return_book_Click(object sender, EventArgs e)
        {
            Return_Book_user obj3 = new Return_Book_user();
            obj3.email_pass(a);
            OpenChildForm(obj3, sender);
        }

        private void issue_report_Click(object sender, EventArgs e)
        {
            Issue_Report_user obj2 = new Issue_Report_user();
            obj2.email(a);
            OpenChildForm(obj2, sender);
        }

        private void Feedback_user_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Feedback_user(), sender);
        }

        private void NAME_AT_USER_Click(object sender, EventArgs e)
        {
            /**/
        }
    }
}
