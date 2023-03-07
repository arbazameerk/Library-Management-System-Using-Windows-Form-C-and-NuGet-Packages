using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//for sending the feedback
using System.IO;
using System.Net;
using System.Web;
using System.Net.Mail;



namespace Library_Management_System
{

    public partial class Feedback_user : Form
    {
        private const string UserName = "xyz@gmail.com";
        private const string Password = "pass";

        public Feedback_user()
        {
            InitializeComponent();
        }

        private void guna2Button1_Click(object sender, EventArgs e)
        {
            if (this.richTextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please write something in the message box");
            }
            else
            { 
                try
                {
                    //wvbdtodigrxbjckx
                    SmtpClient clientDetails = new SmtpClient();
                    clientDetails.Port = 587;
                    clientDetails.Host = "smtp.gmail.com";
                    clientDetails.Timeout = 100000;
                    clientDetails.EnableSsl = true;
                    clientDetails.DeliveryMethod = SmtpDeliveryMethod.Network;
                    clientDetails.UseDefaultCredentials = false;
                    clientDetails.Credentials = new NetworkCredential(UserName, Password);

                    MailMessage mailDetails = new MailMessage();
                    mailDetails.Priority = MailPriority.High;
                    mailDetails.From = new MailAddress("xyz@gmail.com");
                    mailDetails.To.Add("xyz@gmail.com");
                    mailDetails.Subject = "FEEDBACK";
                    mailDetails.Body = this.richTextBox1.Text;

                    clientDetails.Send(mailDetails);
                    //clientDetails.    <----- Check it's functions
                    MessageBox.Show("Feedback Sent!");
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.ToString());
                }
            }
            this.richTextBox1.Text = "";
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
            //NA
        }
    }
}
