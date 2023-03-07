#pragma once
#include"Avl_Header.h"
#include"customerdata.h"

#include <msclr\marshal_cppstd.h>

namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for availablebook
	/// </summary>
	public ref class availablebook : public System::Windows::Forms::Form
	{
	public:
		int index=0;
		
	private: System::Windows::Forms::Label^ pricelabell;
	public:
		
		
		variables* data = new variables();
		static int cartprice = 0;
		BookAvl* book = new BookAvl();
		CustomerAvl* customer = new CustomerAvl();
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;

	public:

		   LinkedList* list = new LinkedList();
		availablebook(void)
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
		~availablebook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ pricelabel;


	private: System::Windows::Forms::Label^ titlelabel;
	private: System::Windows::Forms::Label^ authorlabel;
	private: System::Windows::Forms::Label^ editionlabel;
	private: System::Windows::Forms::Label^ stocklabel;




	private: System::Windows::Forms::DataGridView^ dataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ISBN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edition;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::Button^ cart_button;
	private: System::Windows::Forms::Button^ search_button;

	private: System::Windows::Forms::Button^ Buy_button;

	private: System::Windows::Forms::DataGridView^ dataGridcart;
	private: System::Windows::Forms::TextBox^ searchtextbox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title_Book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Author_Book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edition_Book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price_Book;
	private: System::Windows::Forms::Button^ Remove_cart_button;







	protected:
		
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(availablebook::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pricelabel = (gcnew System::Windows::Forms::Label());
			this->titlelabel = (gcnew System::Windows::Forms::Label());
			this->authorlabel = (gcnew System::Windows::Forms::Label());
			this->editionlabel = (gcnew System::Windows::Forms::Label());
			this->stocklabel = (gcnew System::Windows::Forms::Label());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->ISBN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cart_button = (gcnew System::Windows::Forms::Button());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->Buy_button = (gcnew System::Windows::Forms::Button());
			this->dataGridcart = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Title_Book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author_Book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edition_Book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price_Book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchtextbox = (gcnew System::Windows::Forms::TextBox());
			this->Remove_cart_button = (gcnew System::Windows::Forms::Button());
			this->pricelabell = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridcart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 311);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(292, 380);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pricelabel
			// 
			this->pricelabel->AutoSize = true;
			this->pricelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricelabel->Location = System::Drawing::Point(408, 573);
			this->pricelabel->Name = L"pricelabel";
			this->pricelabel->Size = System::Drawing::Size(112, 46);
			this->pricelabel->TabIndex = 2;
			this->pricelabel->Text = L"Price";
			// 
			// titlelabel
			// 
			this->titlelabel->AutoSize = true;
			this->titlelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titlelabel->Location = System::Drawing::Point(408, 311);
			this->titlelabel->Name = L"titlelabel";
			this->titlelabel->Size = System::Drawing::Size(95, 46);
			this->titlelabel->TabIndex = 2;
			this->titlelabel->Text = L"Title";
			// 
			// authorlabel
			// 
			this->authorlabel->AutoSize = true;
			this->authorlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->authorlabel->Location = System::Drawing::Point(408, 399);
			this->authorlabel->Name = L"authorlabel";
			this->authorlabel->Size = System::Drawing::Size(138, 46);
			this->authorlabel->TabIndex = 2;
			this->authorlabel->Text = L"Author";
			// 
			// editionlabel
			// 
			this->editionlabel->AutoSize = true;
			this->editionlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editionlabel->Location = System::Drawing::Point(408, 473);
			this->editionlabel->Name = L"editionlabel";
			this->editionlabel->Size = System::Drawing::Size(143, 46);
			this->editionlabel->TabIndex = 2;
			this->editionlabel->Text = L"Edition";
			// 
			// stocklabel
			// 
			this->stocklabel->AutoSize = true;
			this->stocklabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stocklabel->Location = System::Drawing::Point(408, 645);
			this->stocklabel->Name = L"stocklabel";
			this->stocklabel->Size = System::Drawing::Size(122, 46);
			this->stocklabel->TabIndex = 2;
			this->stocklabel->Text = L"Stock";
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToOrderColumns = true;
			this->dataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ISBN, this->Title,
					this->Author, this->Edition, this->Price, this->Stock
			});
			this->dataGrid->Location = System::Drawing::Point(3, 870);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->RowHeadersWidth = 82;
			this->dataGrid->RowTemplate->Height = 33;
			this->dataGrid->Size = System::Drawing::Size(1199, 407);
			this->dataGrid->TabIndex = 3;
			this->dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &availablebook::dataGrid_CellContentClick);
			// 
			// ISBN
			// 
			this->ISBN->HeaderText = L"ISBN";
			this->ISBN->MinimumWidth = 10;
			this->ISBN->Name = L"ISBN";
			// 
			// Title
			// 
			this->Title->HeaderText = L"Title";
			this->Title->MinimumWidth = 10;
			this->Title->Name = L"Title";
			// 
			// Author
			// 
			this->Author->HeaderText = L"Author";
			this->Author->MinimumWidth = 10;
			this->Author->Name = L"Author";
			// 
			// Edition
			// 
			this->Edition->HeaderText = L"Edition";
			this->Edition->MinimumWidth = 10;
			this->Edition->Name = L"Edition";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->MinimumWidth = 10;
			this->Price->Name = L"Price";
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 10;
			this->Stock->Name = L"Stock";
			// 
			// cart_button
			// 
			this->cart_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cart_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cart_button.Image")));
			this->cart_button->Location = System::Drawing::Point(1526, 12);
			this->cart_button->Name = L"cart_button";
			this->cart_button->Size = System::Drawing::Size(256, 97);
			this->cart_button->TabIndex = 4;
			this->cart_button->Text = L"Cart";
			this->cart_button->UseVisualStyleBackColor = true;
			this->cart_button->Click += gcnew System::EventHandler(this, &availablebook::cart_button_Click);
			// 
			// search_button
			// 
			this->search_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_button.Image")));
			this->search_button->Location = System::Drawing::Point(2382, 149);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(101, 47);
			this->search_button->TabIndex = 5;
			this->search_button->Text = L"Search";
			this->search_button->UseVisualStyleBackColor = true;
			this->search_button->Click += gcnew System::EventHandler(this, &availablebook::search_button_Click);
			// 
			// Buy_button
			// 
			this->Buy_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Buy_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Buy_button.Image")));
			this->Buy_button->Location = System::Drawing::Point(1788, 12);
			this->Buy_button->Name = L"Buy_button";
			this->Buy_button->Size = System::Drawing::Size(290, 97);
			this->Buy_button->TabIndex = 6;
			this->Buy_button->Text = L"Buy Book";
			this->Buy_button->UseVisualStyleBackColor = true;
			this->Buy_button->Click += gcnew System::EventHandler(this, &availablebook::Buy_button_Click);
			// 
			// dataGridcart
			// 
			this->dataGridcart->AllowUserToOrderColumns = true;
			this->dataGridcart->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridcart->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridcart->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Title_Book,
					this->Author_Book, this->Edition_Book, this->Price_Book
			});
			this->dataGridcart->Location = System::Drawing::Point(1246, 870);
			this->dataGridcart->Name = L"dataGridcart";
			this->dataGridcart->RowHeadersWidth = 82;
			this->dataGridcart->RowTemplate->Height = 33;
			this->dataGridcart->Size = System::Drawing::Size(1130, 407);
			this->dataGridcart->TabIndex = 8;
			this->dataGridcart->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &availablebook::dataGridcart_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 10;
			this->ID->Name = L"ID";
			// 
			// Title_Book
			// 
			this->Title_Book->HeaderText = L"Title_Book";
			this->Title_Book->MinimumWidth = 10;
			this->Title_Book->Name = L"Title_Book";
			// 
			// Author_Book
			// 
			this->Author_Book->HeaderText = L"Author_Book";
			this->Author_Book->MinimumWidth = 10;
			this->Author_Book->Name = L"Author_Book";
			// 
			// Edition_Book
			// 
			this->Edition_Book->HeaderText = L"Edition_Book";
			this->Edition_Book->MinimumWidth = 10;
			this->Edition_Book->Name = L"Edition_Book";
			// 
			// Price_Book
			// 
			this->Price_Book->HeaderText = L"Price_Book";
			this->Price_Book->MinimumWidth = 10;
			this->Price_Book->Name = L"Price_Book";
			// 
			// searchtextbox
			// 
			this->searchtextbox->Location = System::Drawing::Point(1937, 149);
			this->searchtextbox->Multiline = true;
			this->searchtextbox->Name = L"searchtextbox";
			this->searchtextbox->Size = System::Drawing::Size(439, 47);
			this->searchtextbox->TabIndex = 9;
			this->searchtextbox->TextChanged += gcnew System::EventHandler(this, &availablebook::searchtextbox_TextChanged);
			// 
			// Remove_cart_button
			// 
			this->Remove_cart_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Remove_cart_button.Image")));
			this->Remove_cart_button->Location = System::Drawing::Point(2230, 782);
			this->Remove_cart_button->Name = L"Remove_cart_button";
			this->Remove_cart_button->Size = System::Drawing::Size(136, 51);
			this->Remove_cart_button->TabIndex = 10;
			this->Remove_cart_button->Text = L"Remove";
			this->Remove_cart_button->UseVisualStyleBackColor = true;
			this->Remove_cart_button->Click += gcnew System::EventHandler(this, &availablebook::Remove_cart_button_Click);
			// 
			// pricelabell
			// 
			this->pricelabell->AutoSize = true;
			this->pricelabell->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricelabell->Location = System::Drawing::Point(1319, 808);
			this->pricelabell->Name = L"pricelabell";
			this->pricelabell->Size = System::Drawing::Size(25, 25);
			this->pricelabell->TabIndex = 11;
			this->pricelabell->Text = L"0";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-12, -5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(2556, 124);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, -5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(292, 124);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1304, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 97);
			this->button1->TabIndex = 14;
			this->button1->Text = L"HomePage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &availablebook::button1_Click);
			// 
			// availablebook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(2528, 1302);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cart_button);
			this->Controls->Add(this->Buy_button);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pricelabell);
			this->Controls->Add(this->Remove_cart_button);
			this->Controls->Add(this->searchtextbox);
			this->Controls->Add(this->dataGridcart);
			this->Controls->Add(this->search_button);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->stocklabel);
			this->Controls->Add(this->editionlabel);
			this->Controls->Add(this->authorlabel);
			this->Controls->Add(this->titlelabel);
			this->Controls->Add(this->pricelabel);
			this->Controls->Add(this->pictureBox1);
			this->MinimizeBox = false;
			this->Name = L"availablebook";
			this->Text = L"availablebook";
			this->Load += gcnew System::EventHandler(this, &availablebook::availablebook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridcart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void dataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	index = e->RowIndex;
	//index = 1;
	DataGridViewRow^ row = dataGrid->Rows[e->RowIndex];
	titlelabel->Text = row->Cells[1]->Value->ToString();
	authorlabel->Text =row->Cells[2]->Value->ToString();
	editionlabel->Text= row->Cells[3]->Value->ToString();
	pricelabel->Text = row->Cells[4]->Value->ToString();
	stocklabel->Text = row->Cells[5]->Value->ToString();
}
private: System::Void availablebook_Load(System::Object^ sender, System::EventArgs^ e)
{
	book->loadbookfile();
	ifstream read;
	int isbn{ 0 }, totalbooks{ 0 }, price{ 0 };
	string edition{ "\0" }, author{ "\0" }, title{ "\0" };
	string stock;
	book->PreOrder(isbn, title, author, edition, price,totalbooks ,stock);
	book->InOrder(isbn, title, author, edition, price, stock);
	
	char comma = '\0';
	read.open("BooksFile1.csv");
	string cpp = "cpp";
	String^ wedition;
	String^ wauthor;
	String^ wtitle;
	String^ wStock = "Available";
	String^ wisbn;
	String^ wprice;
	string cprice = "\0";

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
		String^ wisbn = gcnew String(cpp.c_str());	//isbn
		String^ wprice = gcnew String(cprice.c_str());	//price
		String^ wtitle = gcnew String(title.c_str());	//title
		String^ wauthor = gcnew String(author.c_str());		//author
		String^ wedition = gcnew String(edition.c_str());	//edition
		/*if (read.eof())
		{
			break;
		}*/

		dataGrid->Rows->Add(wisbn, wtitle, wauthor, wedition, wprice, wStock);
	}
	read.close();
}
private: System::Void search_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	dataGrid->Rows->Clear();
	
	std::string search = marshal_as<std::string>(searchtextbox->Text);
	system("cls");
	ifstream read;
	int isbn{ 0 }, totalbooks{ 0 }, price{ 0 };
	string edition{ "\0" }, author{ "\0" }, title{ "\0" };
	string stock="";
	book->PreOrder(isbn,search,author,edition,price,totalbooks,stock);
	
	string isb = to_string(isbn);
	string pricee=to_string(price);
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
	dataGrid->Rows->Add(wisbn, wtitle, wauthor, wedition, wprice, wStock);
	}
	if (search == "")
	{
		searchtextbox->Focus();
		availablebook::availablebook_Load(sender, e);
	}
	else if (stock == "")
	{
		(MessageBox::Show("Book Does not Found\a", "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
		searchtextbox->Clear();
		searchtextbox->Focus();
		availablebook::availablebook_Load(sender, e);
	}
	stock = "";
}
private: System::Void searchtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void cart_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	string cartdis;
	index = dataGrid->CurrentCell->RowIndex;
	DataGridViewRow^ newdata = dataGrid->Rows[index];
	std::string totalprice = marshal_as<std::string>(pricelabell->Text);
	totalprice = marshal_as<string>(newdata->Cells[4]->Value->ToString());
	cartprice += stoi(totalprice);
	// this data will addtocart()
	data->ISBN= marshal_as<string>(newdata->Cells[0]->Value->ToString());
	data->Book_title= marshal_as<string>(newdata->Cells[1]->Value->ToString());
	data->Author= marshal_as<string>(newdata->Cells[2]->Value->ToString());
	data->Edition= marshal_as<string>(newdata->Cells[3]->Value->ToString());
	data->Price= marshal_as<string>(newdata->Cells[4]->Value->ToString());

	list->addtocart(stoi(data->ISBN),data->Book_title,data->Author,data->Edition,stoi(data->Price));
	dataGridcart->Rows->Add(newdata->Cells[0]->Value, newdata->Cells[1]->Value, newdata->Cells[2]->Value, newdata->Cells[3]->Value,
		newdata->Cells[4]->Value);

	cartdis = to_string(cartprice);
	String^ obj=gcnew String(cartdis.c_str());
	obj = obj + " $";
	pricelabell->Text = obj;
	system("cls");
	list->display();
}
private: System::Void dataGridcart_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{

}
private: System::Void Remove_cart_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	index = dataGridcart->CurrentCell->RowIndex;
	DataGridViewRow^ minus = dataGridcart->Rows[index];
	data->Edition = "false";
	list->iscartempty(data->Edition);
	if (data->Edition == "true")
	{
		(MessageBox::Show("Select any book\nCart is empty!\a", "Buy Book", MessageBoxButtons::OK,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK);
	}
	else
	{
	string totalprice= marshal_as<string>(minus->Cells[4]->Value->ToString());
	data->Price = marshal_as<string>(minus->Cells[4]->Value->ToString());
	data->ISBN = marshal_as<string>(minus->Cells[0]->Value->ToString());
	//delete for cart()
	list->deletee(stoi(data->ISBN), stoi(data->Price));
	cartprice -= stoi(totalprice);
	string cartdis;
	cartdis = to_string(cartprice);
	String^ obj=gcnew String(cartdis.c_str());
	obj = obj + " $";
	pricelabell->Text = obj;
	dataGridcart->Rows->RemoveAt(index);
	system("cls");
	list->display();
	}
}
private: System::Void Buy_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	data->Edition = "false";
	list->iscartempty(data->Edition);
	if (data->Edition=="true")
	{
		(MessageBox::Show("Select any book\nCart is empty!\a", "Buy Book", MessageBoxButtons::OK,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK);
	}
	else
	{
		list->storecartinfile();
		availablebook::Hide();
		customerdata custom;
		custom.ShowDialog();
		this->Show();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	availablebook::Hide();

}
};
}
