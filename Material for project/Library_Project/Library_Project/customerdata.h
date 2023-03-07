#pragma once
#include<fstream>
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
	/// Summary for customerdata
	/// </summary>
	public ref class customerdata : public System::Windows::Forms::Form
	{
	public:
		variables* data = new variables();
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	public:
		CustomerAvl* customer = new CustomerAvl();
		customerdata(void)
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
		~customerdata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ datadisplaygrid;
	protected:




	private: System::Windows::Forms::Button^ place_order_button;
	private: System::Windows::Forms::Label^ customername;
	private: System::Windows::Forms::Label^ customermobile;
	private: System::Windows::Forms::Label^ customercity;
	private: System::Windows::Forms::Label^ customeremail;
	private: System::Windows::Forms::TextBox^ nametext;
	private: System::Windows::Forms::TextBox^ mobiletext;
	private: System::Windows::Forms::TextBox^ citytext;
	private: System::Windows::Forms::TextBox^ emailtext;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ customerbill;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ISBN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TITLE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AUTHOR;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(customerdata::typeid));
			this->datadisplaygrid = (gcnew System::Windows::Forms::DataGridView());
			this->ISBN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TITLE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AUTHOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->place_order_button = (gcnew System::Windows::Forms::Button());
			this->customername = (gcnew System::Windows::Forms::Label());
			this->customermobile = (gcnew System::Windows::Forms::Label());
			this->customercity = (gcnew System::Windows::Forms::Label());
			this->customeremail = (gcnew System::Windows::Forms::Label());
			this->nametext = (gcnew System::Windows::Forms::TextBox());
			this->mobiletext = (gcnew System::Windows::Forms::TextBox());
			this->citytext = (gcnew System::Windows::Forms::TextBox());
			this->emailtext = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->customerbill = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datadisplaygrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// datadisplaygrid
			// 
			this->datadisplaygrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datadisplaygrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datadisplaygrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ISBN,
					this->TITLE, this->AUTHOR
			});
			this->datadisplaygrid->Location = System::Drawing::Point(687, 245);
			this->datadisplaygrid->Name = L"datadisplaygrid";
			this->datadisplaygrid->RowHeadersWidth = 82;
			this->datadisplaygrid->RowTemplate->Height = 33;
			this->datadisplaygrid->Size = System::Drawing::Size(775, 315);
			this->datadisplaygrid->TabIndex = 0;
			// 
			// ISBN
			// 
			this->ISBN->HeaderText = L"ISBN";
			this->ISBN->MinimumWidth = 10;
			this->ISBN->Name = L"ISBN";
			// 
			// TITLE
			// 
			this->TITLE->HeaderText = L"TITLE";
			this->TITLE->MinimumWidth = 10;
			this->TITLE->Name = L"TITLE";
			// 
			// AUTHOR
			// 
			this->AUTHOR->HeaderText = L"AUTHOR";
			this->AUTHOR->MinimumWidth = 10;
			this->AUTHOR->Name = L"AUTHOR";
			// 
			// place_order_button
			// 
			this->place_order_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"place_order_button.Image")));
			this->place_order_button->Location = System::Drawing::Point(408, 624);
			this->place_order_button->Name = L"place_order_button";
			this->place_order_button->Size = System::Drawing::Size(163, 57);
			this->place_order_button->TabIndex = 1;
			this->place_order_button->Text = L"Place Order";
			this->place_order_button->UseVisualStyleBackColor = true;
			this->place_order_button->Click += gcnew System::EventHandler(this, &customerdata::place_order_button_Click);
			// 
			// customername
			// 
			this->customername->AutoSize = true;
			this->customername->Location = System::Drawing::Point(84, 165);
			this->customername->Name = L"customername";
			this->customername->Size = System::Drawing::Size(74, 25);
			this->customername->TabIndex = 2;
			this->customername->Text = L"Name:";
			// 
			// customermobile
			// 
			this->customermobile->AutoSize = true;
			this->customermobile->Location = System::Drawing::Point(76, 245);
			this->customermobile->Name = L"customermobile";
			this->customermobile->Size = System::Drawing::Size(121, 25);
			this->customermobile->TabIndex = 3;
			this->customermobile->Text = L"Mobile_No:";
			// 
			// customercity
			// 
			this->customercity->AutoSize = true;
			this->customercity->Location = System::Drawing::Point(84, 350);
			this->customercity->Name = L"customercity";
			this->customercity->Size = System::Drawing::Size(55, 25);
			this->customercity->TabIndex = 4;
			this->customercity->Text = L"City:";
			// 
			// customeremail
			// 
			this->customeremail->AutoSize = true;
			this->customeremail->Location = System::Drawing::Point(100, 476);
			this->customeremail->Name = L"customeremail";
			this->customeremail->Size = System::Drawing::Size(71, 25);
			this->customeremail->TabIndex = 5;
			this->customeremail->Text = L"Email:";
			// 
			// nametext
			// 
			this->nametext->Location = System::Drawing::Point(145, 201);
			this->nametext->Multiline = true;
			this->nametext->Name = L"nametext";
			this->nametext->Size = System::Drawing::Size(426, 41);
			this->nametext->TabIndex = 6;
			// 
			// mobiletext
			// 
			this->mobiletext->Location = System::Drawing::Point(145, 294);
			this->mobiletext->Multiline = true;
			this->mobiletext->Name = L"mobiletext";
			this->mobiletext->Size = System::Drawing::Size(426, 50);
			this->mobiletext->TabIndex = 7;
			// 
			// citytext
			// 
			this->citytext->Location = System::Drawing::Point(145, 408);
			this->citytext->Multiline = true;
			this->citytext->Name = L"citytext";
			this->citytext->Size = System::Drawing::Size(426, 48);
			this->citytext->TabIndex = 8;
			// 
			// emailtext
			// 
			this->emailtext->Location = System::Drawing::Point(145, 518);
			this->emailtext->Multiline = true;
			this->emailtext->Name = L"emailtext";
			this->emailtext->Size = System::Drawing::Size(426, 42);
			this->emailtext->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(680, 624);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Total_Bill: ";
			// 
			// customerbill
			// 
			this->customerbill->AutoSize = true;
			this->customerbill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerbill->Location = System::Drawing::Point(865, 624);
			this->customerbill->Name = L"customerbill";
			this->customerbill->Size = System::Drawing::Size(91, 37);
			this->customerbill->TabIndex = 11;
			this->customerbill->Text = L"price";
			this->customerbill->Click += gcnew System::EventHandler(this, &customerdata::customerbill_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(679, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 48);
			this->label2->TabIndex = 12;
			this->label2->Text = L"YOUR CART:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-51, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1590, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, -4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(223, 107);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(230, 624);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 57);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Borrow";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &customerdata::button1_Click);
			// 
			// customerdata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1469, 894);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->customerbill);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emailtext);
			this->Controls->Add(this->citytext);
			this->Controls->Add(this->mobiletext);
			this->Controls->Add(this->nametext);
			this->Controls->Add(this->customeremail);
			this->Controls->Add(this->customercity);
			this->Controls->Add(this->customermobile);
			this->Controls->Add(this->customername);
			this->Controls->Add(this->place_order_button);
			this->Controls->Add(this->datadisplaygrid);
			this->Name = L"customerdata";
			this->Text = L"customerdata";
			this->Load += gcnew System::EventHandler(this, &customerdata::customerdata_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datadisplaygrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void customerdata_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		ifstream read;
		String^ wprice;
		char comma='\0';
		read.open("cartdata.txt");
		while (!read.eof())
		{
			read >> data->ISBN;
			getline(read, data->Book_title, ',');
			getline(read, data->Author, ',');
			getline(read, data->Edition);
			String^ wisbn = gcnew String(data->ISBN.c_str());	//isbn
			String^ wtitle = gcnew String(data->Book_title.c_str());	//title
			String^ wauthor = gcnew String(data->Author.c_str());		//author
			String^ wedition = gcnew String(data->Edition.c_str());	//edition
			if (read.eof())
			{
				break;
			}
			datadisplaygrid->Rows->Add(wisbn,wtitle,wauthor,wedition);
		}
		read.close();
		read.open("cartprice.txt");
		while (!read.eof())
		{
			read >> data->TotalPrice;
			wprice = gcnew String(data->TotalPrice.c_str());	//price
		}
		read.close();
		customerbill->Text = wprice+" $";
		remove("cartdata.txt");
	}
private: System::Void customerbill_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void place_order_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	data->Name = marshal_as<string>(nametext->Text);
	data->Mobileno = marshal_as<string>(mobiletext->Text);
	data->Address = marshal_as<string>(citytext->Text);
	data->Email = marshal_as<string>(emailtext->Text);
	customer->insert(1, data->Name, data->Mobileno, data->Address, data->Email);
	String^ Emaill = gcnew String(data->Email.c_str());
	string body = "Hey  " +data->Name +"!\nYour Order Has been placed.\nYou will get your order within 2-working days :)\n";
	String^ Body = gcnew String(body.c_str());
	try {
		MailMessage^ Mail = gcnew MailMessage("mashoodali123456789@gmail.com", Emaill, "Your Books Order!", Body);
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->Port = 587;
		client->Credentials = gcnew NetworkCredential("mashoodali123456789@gmail.com", "kingofironfeast123");
		client->EnableSsl = true;
		client->Send(Mail);
		(MessageBox::Show("Your Order has been replaced!\a", "Order Replaced", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
	}
	catch (Exception^ ex)
	{
		(MessageBox::Show("Error: "+ex->Message, "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// borrow book button
	data->Name = marshal_as<string>(nametext->Text);
	data->Mobileno = marshal_as<string>(mobiletext->Text);
	data->Address = marshal_as<string>(citytext->Text);
	data->Email = marshal_as<string>(emailtext->Text);
	customer->insert(1, data->Name, data->Mobileno, data->Address, data->Email);
	String^ Emaill = gcnew String(data->Email.c_str());
	string body = "Hey  " + data->Name + "!\nYou have borrowed books from the library .\nYou are requested to return the books within the due\ndate  :)\n\n\t\tBookShop";
	String^ Body = gcnew String(body.c_str());
	try {
		MailMessage^ Mail = gcnew MailMessage("mashoodali123456789@gmail.com", Emaill, "Borrowed Books!", Body);
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->Port = 587;
		client->Credentials = gcnew NetworkCredential("mashoodali123456789@gmail.com", "kingofironfeast123");
		client->EnableSsl = true;
		client->Send(Mail);
		(MessageBox::Show("You have successfully borrowed books!\a", "Borrow Books", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
	}
	catch (Exception^ ex)
	{
		(MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
	}


	//------------------
	ofstream write;
	write.open("borrowbooks.txt",ios::app);
	write << data->Name << "," << data->Mobileno << "," << data->Address << "," << data->Email << "\n";
	write.close();
}

};
}
