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
    public partial class Add_Book_Admin : Form
    {
        string constring = "USER ID=LMS; PASSWORD=pass123; DATA SOURCE=localhost:1521/xe;PERSIST SECURITY INFO=True";
        public Add_Book_Admin()
        {
            InitializeComponent();
        }

        private void guna2Button1_Click(object sender, EventArgs e)
        {
            //1)BookName
            //2)AutorName
            //3)PublicationName
            //4)NumberOfCopies
            if (guna2TextBox1.Text == "" || guna2TextBox2.Text == "" || guna2TextBox3.Text == "" || guna2TextBox4.Text == "")
            {
                MessageBox.Show("Empty entry can not be processed, please check and retry");
            }
            else if (guna2TextBox1.Text == "" && guna2TextBox2.Text == "" && guna2TextBox3.Text == "" && guna2TextBox4.Text == "")
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

                    string q = "insert into lib (BOOKNAME,AUTHOR,PUBLICATION,NOOFCOPIES)" +
                               "values('" + guna2TextBox1.Text.Trim() + "','" + guna2TextBox2.Text.Trim() + "','" + guna2TextBox3.Text.Trim() + "'," + guna2TextBox4.Text.Trim() + ")";
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
                    guna2TextBox2.Text = " ";
                    guna2TextBox3.Text = " ";
                    try
                    {
                        int count = Convert.ToInt32(guna2TextBox4.Text.Trim());
                        for (int i = 1; i <= count; i++)
                        {
                            OracleConnection con = new OracleConnection(constring);
                            con.Open();
                            OracleCommand cmd = new OracleCommand();

                            string q = "insert into books (BOOKNO,BOOKNAME,AVAILABLE,SUBSCRIBED_EMAIL)" +
                                       "values( seq_person.nextval ,'" + guna2TextBox1.Text.Trim() + "','YES',0)";
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
                    guna2TextBox1.Text = " ";
                    guna2TextBox4.Text = " ";
                    string message = "Successfully Inserted";
                    string title = "Successfull Insertion!";
                    MessageBoxButtons buttons = MessageBoxButtons.OK;
                    DialogResult result = MessageBox.Show(message, title, buttons);
                }
            }
        }
    }
}
