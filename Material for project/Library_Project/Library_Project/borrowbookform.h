#pragma once
#include"Avl_Header.h"
#include <msclr\marshal_cppstd.h>
namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace std;
	using namespace msclr;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for borrowbookform
	/// </summary>
	public ref class borrowbookform : public System::Windows::Forms::Form
	{
	public:
		CustomerAvl* customer1 = new CustomerAvl();
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ back;
	public:
		variables* data = new variables();
		borrowbookform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~borrowbookform()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::DataGridView^ datacustomergrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(borrowbookform::typeid));
			this->datacustomergrid = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datacustomergrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// datacustomergrid
			// 
			this->datacustomergrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datacustomergrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datacustomergrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID,
					this->Name, this->phoneno, this->email
			});
			this->datacustomergrid->Location = System::Drawing::Point(445, 355);
			this->datacustomergrid->Name = L"datacustomergrid";
			this->datacustomergrid->RowHeadersWidth = 82;
			this->datacustomergrid->RowTemplate->Height = 33;
			this->datacustomergrid->Size = System::Drawing::Size(834, 410);
			this->datacustomergrid->TabIndex = 23;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 10;
			this->ID->Name = L"ID";
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->MinimumWidth = 10;
			this->Name->Name = L"Name";
			// 
			// phoneno
			// 
			this->phoneno->HeaderText = L"Phone_No#";
			this->phoneno->MinimumWidth = 10;
			this->phoneno->Name = L"phoneno";
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->MinimumWidth = 10;
			this->email->Name = L"email";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-49, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1843, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &borrowbookform::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, -3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(222, 106);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(747, 823);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 71);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Send Mail";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &borrowbookform::button1_Click);
			// 
			// back
			// 
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->Location = System::Drawing::Point(1417, 12);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(165, 64);
			this->back->TabIndex = 27;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &borrowbookform::back_Click);
			// 
			// borrowbookform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1746, 1016);
			this->Controls->Add(this->back);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->datacustomergrid);
			//this->Name = L"borrowbookform";
			this->Text = L"borrowbookform";
			this->Load += gcnew System::EventHandler(this, &borrowbookform::borrowbookform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datacustomergrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void borrowbookform_Load(System::Object^ sender, System::EventArgs^ e)
{
	ifstream read;
	read.open("borrowbooks.txt");
	int id = 1;
	while (!read.eof())
	{
		getline(read, data->Name, ',');
		getline(read, data->Mobileno, ',');
		getline(read, data->Address, ',');
		getline(read, data->Email, ',');
		customer1->insert(id, data->Name, data->Email, data->Address, data->Mobileno);
		id++;
		String^ name = gcnew String(data->Name.c_str());
		String^ mobile = gcnew String(data->Mobileno.c_str());
		String^ address = gcnew String(data->Address.c_str());
		String^ email = gcnew String(data->Email.c_str());
		datacustomergrid->Rows->Add(name, mobile, address, email);
	}
	read.close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	customer1->InOrder();
	int index;
	index = datacustomergrid->CurrentCell->RowIndex;
	DataGridViewRow^ newdata = datacustomergrid->Rows[index];
	data->Email = marshal_as<string>(newdata->Cells[3]->Value->ToString());
	cout << "email = " << data->Email << endl;
	String^ Emaill = gcnew String(data->Email.c_str());
	data->Name = marshal_as<string>(newdata->Cells[2]->Value->ToString());
	string body = "Hey  " + data->Name + "!\nYou have borrowed books from the library .\nDue date has been passed.You are requested to return the books within 1-Day!\n\n\t\tBookShop";
	String^ Body = gcnew String(body.c_str());
	try {
		MailMessage^ Mail = gcnew MailMessage("mashoodali123456789@gmail.com", Emaill, "Borrowed Books!", Body);
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->Port = 587;
		client->Credentials = gcnew NetworkCredential("mashoodali123456789@gmail.com", "kingofironfeast123");
		client->EnableSsl = true;
		client->Send(Mail);
		(MessageBox::Show("Mail Sent Successfully!\a", "Borrow Books", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
	}
	catch (Exception^ ex)
	{
		(MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
	}
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e)
{
	borrowbookform::Hide();
}
};
}
