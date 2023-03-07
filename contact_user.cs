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
    public partial class contact_user : Form
    {
        public contact_user()
        {
            InitializeComponent();
        }

        private void guna2Button1_Click(object sender, EventArgs e)
        {
            if (guna2TextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please write something in the message box");

            }
            else if (richTextBox1.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please write something in the message box");

            }
            else if (richTextBox1.Text == "" && guna2TextBox1.Text == "")
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
                    //clientDetails.Timeout = 10000;
                    clientDetails.EnableSsl = true;
                    clientDetails.DeliveryMethod = SmtpDeliveryMethod.Network;
                    clientDetails.UseDefaultCredentials = false;
                    clientDetails.Credentials = new NetworkCredential("xyz@gmail.com", "pass");

                    MailMessage mailDetails = new MailMessage();
                    mailDetails.Priority = MailPriority.High;
                    mailDetails.From = new MailAddress("xyz@gmail.com");
                    mailDetails.To.Add(guna2TextBox1.Text);
                    mailDetails.Subject = "Library Management System @admin";
                    mailDetails.Body = this.richTextBox1.Text;

                    clientDetails.Send(mailDetails);

                    MessageBox.Show("Feedback Sent!");
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.ToString() + "\n\nOR THERE CAN BE A PROBLEM IN THE EMAIL YOU HAVE ENTERED");
                }
                richTextBox1.Text = "";
                guna2TextBox1.Text = "";
            }
        }
    }
}
