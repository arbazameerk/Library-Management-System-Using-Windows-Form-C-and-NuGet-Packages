using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace Library_Management_System
{
    public partial class LoadingScreen : Form
    {
        public LoadingScreen()
        {
            InitializeComponent();
        }

        private void guna2ProgressBar1_ValueChanged(object sender, EventArgs e)
        {
            //this.guna2ProgressBar1.Increment(2);
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (this.guna2ProgressBar1.Value >= 115)
            {
                timer1.Enabled = false;
            }
            else
            {
                this.guna2ProgressBar1.Increment(2);
            }
            if (timer1.Enabled == false )
            {
                Login obj = new Login();
                this.Hide();
                obj.Show();
            }
        }

        private void LoadingScreen_Load(object sender, EventArgs e)
        {
            this.timer1.Start();
            this.guna2ProgressBar1.Maximum = 115;
        }
    }
}
