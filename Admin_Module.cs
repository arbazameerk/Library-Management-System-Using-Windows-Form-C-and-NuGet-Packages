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
    public partial class Admin_Module : Form
    {
        //instance for the active form
        private Form activeForm;
        public Admin_Module()
        {
            InitializeComponent();
            this.NAME_AT_ADMIN.Text = "@admin";
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

        private void CLOSE_BUTTONFORM2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void MIN_BUTTONFORM2_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            /*___ NOTHING :( ___*/
        }

        private void add_book_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Add_Book_Admin(), sender);
        }

        private void update_book_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Update_book_admin(), sender);
        }

        private void linkLabel1_LinkClicked_1(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Login obj2 = new Login();
            this.Hide();
            obj2.Show();
        }

        private void Delete_Book_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Delete_book_admin(), sender);
        }

        private void issue_report_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Issue_report_admin(), sender);
        }

        private void update_user_admin_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Update_user_admin(), sender);
        }

        private void delete_user_admin_Click(object sender, EventArgs e)
        {
            OpenChildForm(new delete_User_admin(), sender);
        }

        private void contact_user_Click(object sender, EventArgs e)
        {
            OpenChildForm(new contact_user(), sender);
        }

        private void settings_admin_Click(object sender, EventArgs e)
        {
            OpenChildForm(new Settings_admin(), sender);
        }
    }
}
