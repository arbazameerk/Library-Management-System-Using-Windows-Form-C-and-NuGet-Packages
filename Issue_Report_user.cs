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
    public partial class Issue_Report_user : Form
    {
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        string a;
        public Issue_Report_user()
        {
            InitializeComponent();
        }
        public void email(string m)
        {
            string email = m;
            a = email; 
        }

        private void Issue_Report_user_Load(object sender, EventArgs e)
        {
            try
            {
                OracleConnection con = new OracleConnection(constring);
                con.Open();
                OracleDataAdapter adapt;

                string q = "select subscription.SUBID,subscription.BOOKNAME,books.bookno,subscription.DO_SUB,subscription.DO_RETURN,subscription.FINEAMOUNT,subscription.STATUS  from subscription INNER JOIN books on books.subscribed_email = '" + a + "'";
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

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
