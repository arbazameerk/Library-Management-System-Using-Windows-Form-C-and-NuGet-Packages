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
    public partial class Issue_report_admin : Form
    {
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        public Issue_report_admin()
        {
            InitializeComponent();
        }

        private void Issue_report_admin_Load(object sender, EventArgs e)
        {
            string q = "select subscription.SUBID,subscription.EMAIL,subscription.BOOKNAME,books.bookno,subscription.DO_SUB,subscription.DO_RETURN,subscription.FINEAMOUNT,subscription.STATUS from subscription INNER JOIN books on books.subscribed_email = subscription.EMAIL AND subscription.STATUS = 'NOT RETURNED'";
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleDataAdapter adapt;

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
    }
}
