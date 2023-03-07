#pragma once
#include"Avl_Header.h"
#include"borrowbookform.h"
#include"Makeadminform.h"
#include <msclr\marshal_cppstd.h>
namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for adminform
	/// </summary>
	public ref class adminform : public System::Windows::Forms::Form
	{
	public:
		BookAvl* book1 = new BookAvl();
		variables* data = new variables();
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	public:
		adminform(void)
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
		~adminform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ isbntextbox;
	private: System::Windows::Forms::TextBox^ titletextBox;
	private: System::Windows::Forms::TextBox^ authortextBox;
	private: System::Windows::Forms::TextBox^ editiontextBox;
	private: System::Windows::Forms::TextBox^ pricetextBox;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ totalnumberofbooktextBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataadmingrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ISBN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TITLE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AUTHOR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EDITION;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRICE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TOTALNO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ STOCK;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ admindelete;

	private: System::Windows::Forms::Button^ adminsearch;
	private: System::Windows::Forms::TextBox^ adminsearchtextbox;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label7;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminform::typeid));
			this->isbntextbox = (gcnew System::Windows::Forms::TextBox());
			this->titletextBox = (gcnew System::Windows::Forms::TextBox());
			this->authortextBox = (gcnew System::Windows::Forms::TextBox());
			this->editiontextBox = (gcnew System::Windows::Forms::TextBox());
			this->pricetextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->totalnumberofbooktextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataadmingrid = (gcnew System::Windows::Forms::DataGridView());
			this->ISBN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TITLE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AUTHOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EDITION = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRICE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TOTALNO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->STOCK = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->admindelete = (gcnew System::Windows::Forms::Button());
			this->adminsearch = (gcnew System::Windows::Forms::Button());
			this->adminsearchtextbox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataadmingrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// isbntextbox
			// 
			this->isbntextbox->Location = System::Drawing::Point(29, 345);
			this->isbntextbox->Multiline = true;
			this->isbntextbox->Name = L"isbntextbox";
			this->isbntextbox->Size = System::Drawing::Size(467, 51);
			this->isbntextbox->TabIndex = 0;
			// 
			// titletextBox
			// 
			this->titletextBox->Location = System::Drawing::Point(29, 473);
			this->titletextBox->Multiline = true;
			this->titletextBox->Name = L"titletextBox";
			this->titletextBox->Size = System::Drawing::Size(467, 54);
			this->titletextBox->TabIndex = 1;
			// 
			// authortextBox
			// 
			this->authortextBox->Location = System::Drawing::Point(29, 593);
			this->authortextBox->Multiline = true;
			this->authortextBox->Name = L"authortextBox";
			this->authortextBox->Size = System::Drawing::Size(467, 53);
			this->authortextBox->TabIndex = 2;
			// 
			// editiontextBox
			// 
			this->editiontextBox->Location = System::Drawing::Point(29, 723);
			this->editiontextBox->Multiline = true;
			this->editiontextBox->Name = L"editiontextBox";
			this->editiontextBox->Size = System::Drawing::Size(467, 48);
			this->editiontextBox->TabIndex = 3;
			// 
			// pricetextBox
			// 
			this->pricetextBox->Location = System::Drawing::Point(29, 825);
			this->pricetextBox->Multiline = true;
			this->pricetextBox->Name = L"pricetextBox";
			this->pricetextBox->Size = System::Drawing::Size(467, 53);
			this->pricetextBox->TabIndex = 4;
			this->pricetextBox->TextChanged += gcnew System::EventHandler(this, &adminform::textBox5_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(24, 293);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ISBN:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(24, 422);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Title:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(24, 543);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Author:";
			this->label3->Click += gcnew System::EventHandler(this, &adminform::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(24, 671);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 37);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Edition:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(22, 785);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 37);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Price:";
			// 
			// totalnumberofbooktextBox
			// 
			this->totalnumberofbooktextBox->Location = System::Drawing::Point(31, 954);
			this->totalnumberofbooktextBox->Multiline = true;
			this->totalnumberofbooktextBox->Name = L"totalnumberofbooktextBox";
			this->totalnumberofbooktextBox->Size = System::Drawing::Size(465, 51);
			this->totalnumberofbooktextBox->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(22, 903);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 37);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Total_Copies:";
			this->label6->Click += gcnew System::EventHandler(this, &adminform::label6_Click);
			// 
			// dataadmingrid
			// 
			this->dataadmingrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataadmingrid->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataadmingrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataadmingrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataadmingrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ISBN, this->TITLE,
					this->AUTHOR, this->EDITION, this->PRICE, this->TOTALNO, this->STOCK
			});
			this->dataadmingrid->Location = System::Drawing::Point(730, 391);
			this->dataadmingrid->Name = L"dataadmingrid";
			this->dataadmingrid->RowHeadersWidth = 82;
			this->dataadmingrid->RowTemplate->Height = 33;
			this->dataadmingrid->Size = System::Drawing::Size(974, 506);
			this->dataadmingrid->TabIndex = 12;
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
			// EDITION
			// 
			this->EDITION->HeaderText = L"EDITION";
			this->EDITION->MinimumWidth = 10;
			this->EDITION->Name = L"EDITION";
			// 
			// PRICE
			// 
			this->PRICE->HeaderText = L"PRICE";
			this->PRICE->MinimumWidth = 10;
			this->PRICE->Name = L"PRICE";
			// 
			// TOTALNO
			// 
			this->TOTALNO->HeaderText = L"TOTALNO";
			this->TOTALNO->MinimumWidth = 10;
			this->TOTALNO->Name = L"TOTALNO";
			// 
			// STOCK
			// 
			this->STOCK->HeaderText = L"STOCK";
			this->STOCK->MinimumWidth = 10;
			this->STOCK->Name = L"STOCK";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(730, 954);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 51);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminform::button1_Click);
			// 
			// admindelete
			// 
			this->admindelete->BackColor = System::Drawing::Color::NavajoWhite;
			this->admindelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"admindelete.BackgroundImage")));
			this->admindelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admindelete->Location = System::Drawing::Point(896, 954);
			this->admindelete->Name = L"admindelete";
			this->admindelete->Size = System::Drawing::Size(129, 51);
			this->admindelete->TabIndex = 14;
			this->admindelete->Text = L"Delete";
			this->admindelete->UseVisualStyleBackColor = false;
			this->admindelete->Click += gcnew System::EventHandler(this, &adminform::admindelete_Click);
			// 
			// adminsearch
			// 
			this->adminsearch->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminsearch.BackgroundImage")));
			this->adminsearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminsearch->Location = System::Drawing::Point(1439, 228);
			this->adminsearch->Name = L"adminsearch";
			this->adminsearch->Size = System::Drawing::Size(143, 49);
			this->adminsearch->TabIndex = 15;
			this->adminsearch->Text = L"Search";
			this->adminsearch->UseVisualStyleBackColor = true;
			this->adminsearch->Click += gcnew System::EventHandler(this, &adminform::adminsearch_Click);
			// 
			// adminsearchtextbox
			// 
			this->adminsearchtextbox->Location = System::Drawing::Point(994, 228);
			this->adminsearchtextbox->Multiline = true;
			this->adminsearchtextbox->Name = L"adminsearchtextbox";
			this->adminsearchtextbox->Size = System::Drawing::Size(429, 49);
			this->adminsearchtextbox->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1727, 129);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, -2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(317, 129);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(1344, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(349, 63);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Admin Portal";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(1503, 952);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 53);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminform::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(1177, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 79);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Manage customers";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &adminform::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(1286, 954);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 71);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Make Admin";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &adminform::button4_Click);
			// 
			// adminform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1725, 1102);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->adminsearchtextbox);
			this->Controls->Add(this->adminsearch);
			this->Controls->Add(this->admindelete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataadmingrid);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->totalnumberofbooktextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pricetextBox);
			this->Controls->Add(this->editiontextBox);
			this->Controls->Add(this->authortextBox);
			this->Controls->Add(this->titletextBox);
			this->Controls->Add(this->isbntextbox);
			this->Name = L"adminform";
			this->Text = L"Adminform";
			this->Load += gcnew System::EventHandler(this, &adminform::adminform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataadmingrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void adminform_Load(System::Object^ sender, System::EventArgs^ e) {

		book1->loadbookfile();
		ifstream read;
		int isbn{ 0 }, totalbooks{ 0 }, price{ 0 };
		string edition{ "\0" }, author{ "\0" }, title{ "\0" };
		string stock,totalbookss;
		book1->InOrder(isbn, title, author, edition, price, stock);

		char comma = '\0';
		string cpp = "cpp";
		String^ wedition;
		String^ wauthor;
		String^ wtitle;
		String^ wStock = "Available";
		String^ wisbn;
		String^ wprice;
		string cprice = "\0";
		read.open("BooksFile1.csv");
		while (!read.eof())
		{
			getline(read, author, ',');
			getline(read, title, ',');
			getline(read, edition, ',');
			read >> isbn;
			read >> comma;
			read >> totalbooks;
			read >> comma;
			read >> price;
			read >> comma;
			read >> stock;
			cpp = to_string(isbn);
			cprice = to_string(price);
			totalbookss = to_string(totalbooks);
			String^ wisbn = gcnew String(cpp.c_str());	//isbn
			String^ wprice = gcnew String(cprice.c_str());	//price
			String^ wtitle = gcnew String(title.c_str());	//title
			String^ wauthor = gcnew String(author.c_str());		//author
			String^ wedition = gcnew String(edition.c_str());	//edition
			String^ totalbook=gcnew String(totalbookss.c_str());
			/*if (read.eof())
			{
				break;
			}*/

			dataadmingrid->Rows->Add(wisbn, wtitle, wauthor, wedition, wprice,totalbook ,wStock);
		}
		read.close();
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	fstream write;
	//insertion admin
	string isbn= marshal_as<std::string>(isbntextbox->Text);
	string title= marshal_as<std::string>(titletextBox->Text);
	string author= marshal_as<std::string>(authortextBox->Text);
	string edition= marshal_as<std::string>(editiontextBox->Text);
	string price= marshal_as<std::string>(pricetextBox->Text);
	string totalbooks= marshal_as<std::string>(totalnumberofbooktextBox->Text);
	
	book1->insert(stoi(isbn), stoi(totalbooks), stoi(price), edition, author, title, 1);
	write.open("BooksFile1.csv",ios::app);
	write << author << "," << title << "," << edition << "," << isbn << "," << totalbooks << "," << price << "," << 1;
	write << "\n";
	write.close();
	
	//update datagrid
	String^ disbn = gcnew String(isbn.c_str());
	String^ dtitle = gcnew String(title.c_str());
	String^ dauthor = gcnew String(author.c_str());
	String^ dedition = gcnew String(edition.c_str());
	String^ dprice = gcnew String(price.c_str());
	String^ dtotalnumberofb = gcnew String(totalbooks.c_str());
	String^ dstock = "Available";
	dataadmingrid->Rows->Add(disbn, dtitle, dauthor, dedition, dprice, dtotalnumberofb, dstock);

}
private: System::Void adminsearch_Click(System::Object^ sender, System::EventArgs^ e) 
{
	dataadmingrid->Rows->Clear();
	std::string search = marshal_as<std::string>(adminsearchtextbox->Text);
	system("cls");
	ifstream read;
	int isbn{ 0 }, totalbooks{ 0 }, price{ 0 };
	string edition{ "\0" }, author{ "\0" }, title{ "\0" };
	string stock = "";
	book1->PreOrder(isbn, search, author, edition, price,totalbooks, stock);
	string total = to_string(totalbooks);
	String^ totalbook = gcnew String(total.c_str());
	string isb = to_string(isbn);
	string pricee = to_string(price);
	String^ wedition;
	String^ wauthor;
	String^ wtitle;
	String^ wStock = "Available";
	String^ wisbn;
	String^ wprice;
	wisbn = gcnew String(isb.c_str());	//isbn
	wprice = gcnew String(pricee.c_str());	//price
	wtitle = gcnew String(search.c_str());	//title
	wauthor = gcnew String(author.c_str());		//author
	wedition = gcnew String(edition.c_str());	//edition
	if (stock == "Available")
	{
		dataadmingrid->Rows->Add(wisbn, wtitle, wauthor, wedition, wprice,totalbook, wStock);
	}
	if (search == "")
	{
		adminsearchtextbox->Focus();
		adminform::adminform_Load(sender, e);
	}
	else if (stock == "")
	{
		(MessageBox::Show("Book Does not Found\a", "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
		adminsearchtextbox->Clear();
		adminsearchtextbox->Focus();
		adminform::adminform_Load(sender, e);
	}
	stock = "";
}

	private: System::Void admindelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int index;
		index = dataadmingrid->CurrentCell->RowIndex;
		DataGridViewRow^ minus = dataadmingrid->Rows[index];
		string totalprice = marshal_as<string>(minus->Cells[4]->Value->ToString());
		data->ISBN = marshal_as<string>(minus->Cells[0]->Value->ToString());
		dataadmingrid->Rows->RemoveAt(index);
		book1->DeleleNode(stoi(data->ISBN));
		int check = stoi(data->ISBN);
		ifstream read;
		ofstream write;
		char comma = ',';
		int stock;
		int isbn{ 0 }, totalbooks{ 0 }, price{ 0 };
		string edition{ "\0" }, author{ "\0" }, title{ "\0" };
	
		write.open("newBookFile1.csv",ios::app);
		read.open("BooksFile1.csv");
		while (!read.eof())
		{
			getline(read, author, ',');
			getline(read, title, ',');
			getline(read, edition, ',');
			read >> isbn;
			read >> comma;
			read >> totalbooks;
			read >> comma;
			read >> price;
			read >> comma;
			read >> stock;
			if (isbn!=check)
			{
				write << author << "," << title << "," << edition << "," << isbn << "," << totalbooks << "," << price << "," << 1;
				//write << "\n";
			}
			/*if (read.eof())
			{
				break;
			}*/
		}
		read.close();
	write.close();

	remove("BooksFile1.csv");
	write.open("BooksFile1.csv");
	read.open("newBookFile1.csv");
	while (!read.eof())
	{
		getline(read, author, ',');
		getline(read, title, ',');
		getline(read, edition, ',');
		read >> isbn;
		read >> comma;
		read >> totalbooks;
		read >> comma;
		read >> price;
		read >> comma;
		read >> stock;
		if (isbn != check)
		{
			write << author << "," << title << "," << edition << "," << isbn << "," << totalbooks << "," << price << "," << 1;
			//write << "\n";
		}
		/*if (read.eof())
		{
			break;
		}*/
	}
	read.close();
	write.close();
	remove("newBookFile1.csv");



}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	adminform::Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//manage customers
	adminform::Hide();
	borrowbookform borrow;
	borrow.ShowDialog();
	this->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
		//make admin button
	adminform::Hide();
	Makeadminform make;
	make.ShowDialog();
	this->Show();
}
};
}
