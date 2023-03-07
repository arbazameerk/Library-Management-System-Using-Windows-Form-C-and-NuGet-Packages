#pragma once
#include"availablebook.h"
#include"adminform.h"
#include <msclr\marshal_cppstd.h>


namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Emailtextboxlogin;
	private: System::Windows::Forms::TextBox^ passwordtextboxlogin;



	private: System::Windows::Forms::Button^ Log_in_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginPage::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Emailtextboxlogin = (gcnew System::Windows::Forms::TextBox());
			this->passwordtextboxlogin = (gcnew System::Windows::Forms::TextBox());
			this->Log_in_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(884, 73);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(256, 496);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(256, 607);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			// 
			// Emailtextboxlogin
			// 
			this->Emailtextboxlogin->Location = System::Drawing::Point(261, 545);
			this->Emailtextboxlogin->Multiline = true;
			this->Emailtextboxlogin->Name = L"Emailtextboxlogin";
			this->Emailtextboxlogin->Size = System::Drawing::Size(456, 50);
			this->Emailtextboxlogin->TabIndex = 5;
			// 
			// passwordtextboxlogin
			// 
			this->passwordtextboxlogin->Location = System::Drawing::Point(261, 650);
			this->passwordtextboxlogin->Multiline = true;
			this->passwordtextboxlogin->Name = L"passwordtextboxlogin";
			this->passwordtextboxlogin->Size = System::Drawing::Size(456, 50);
			this->passwordtextboxlogin->TabIndex = 6;
			// 
			// Log_in_button
			// 
			this->Log_in_button->BackColor = System::Drawing::SystemColors::Info;
			this->Log_in_button->Location = System::Drawing::Point(383, 747);
			this->Log_in_button->Name = L"Log_in_button";
			this->Log_in_button->Size = System::Drawing::Size(135, 68);
			this->Log_in_button->TabIndex = 9;
			this->Log_in_button->Text = L"Log In";
			this->Log_in_button->UseVisualStyleBackColor = false;
			this->Log_in_button->Click += gcnew System::EventHandler(this, &LoginPage::Log_in_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(271, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 91);
			this->label3->TabIndex = 12;
			this->label3->Text = L"LOGIN";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(514, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 31);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Home Page";
			this->label4->Click += gcnew System::EventHandler(this, &LoginPage::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(698, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 31);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Log in later";
			this->label5->Click += gcnew System::EventHandler(this, &LoginPage::label5_Click);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(879, 1031);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Log_in_button);
			this->Controls->Add(this->Emailtextboxlogin);
			this->Controls->Add(this->passwordtextboxlogin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->MaximizeBox = false;
			this->Name = L"LoginPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginPage";
			this->Load += gcnew System::EventHandler(this, &LoginPage::LoginPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
/// <summary>
/// this fuction is for sign in page user make his/her account
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
private: System::Void Log_in_button_Click(System::Object^ sender, System::EventArgs^ e)
{

	//check for  login or not
	int check = 0;
	string username = marshal_as<std::string>(Emailtextboxlogin->Text);
	string password = marshal_as<std::string>(passwordtextboxlogin->Text);

	if (username == "" && password == "")
	{
		Emailtextboxlogin->Focus();
		(MessageBox::Show("Log In Failed\nUsername and password are missing!\a", "Log In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else if (username == "")
	{
		Emailtextboxlogin->Focus();
		(MessageBox::Show("Log In Failed\nUsername is missing!\a", "Log In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else if (password == "")
	{
		passwordtextboxlogin->Focus();
		(MessageBox::Show("Log In Failed\nPassword is missing!\a", "Log In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else
	{
		ifstream read;
		string user,pass;
		bool islogin = false;
		read.open("adminlogin.txt");
		while (!read.eof())
		{
			getline(read, user, ',');
			getline(read, pass, ',');

			if (user==username||pass==password)
			{
				islogin = true;

				(MessageBox::Show("Log In Successfully!\a", "Log In", MessageBoxButtons::OK,
					MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
				LoginPage::Hide();
				adminform admin;
				admin.ShowDialog();
				break;
			}
		}
		read.close();
		
		read.open("signinfile.txt");
		while (!read.eof())
		{
			getline(read, user, ',');
			getline(read, pass, ',');
			cout << username <<"\t" <<password<< "\n";
			cout << user << "\t" << pass << "\n";
			if (user==username||pass==password)
			{
				
				islogin = true;
				(MessageBox::Show("Log In Successfully!\a", "Log In", MessageBoxButtons::OK,
					MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
				break;
			}
		}
		read.close();
		cout << "file close\n";
		if (islogin==true)
		{
			check = 1;
				LoginPage::Hide();
				availablebook avail;
				avail.ShowDialog();
		}
		else
		{
			check = 0;
			(MessageBox::Show("Log In failed!\nUsername and password are incorrect\a", "Log In", MessageBoxButtons::OK,
				MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
			Emailtextboxlogin->Text = "";
			passwordtextboxlogin->Text = "";
			Emailtextboxlogin->Focus();

		}
	}
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	LoginPage::Hide();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
{
	LoginPage::Hide();
	availablebook avail;
	avail.ShowDialog();
}
};
}
