#pragma once
#include<fstream>
#include <msclr\marshal_cppstd.h>
namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	using namespace msclr;
	/// <summary>
	/// Summary for Signinpage
	/// </summary>
	public ref class Signinpage : public System::Windows::Forms::Form
	{
	public:
		Signinpage(void)
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
		~Signinpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Signinusertextbox;
	private: System::Windows::Forms::TextBox^ signinpasswordtextbox;


	private: System::Windows::Forms::Button^ Sign_in_Button;
	private: System::Windows::Forms::Label^ label4;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Signinpage::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Signinusertextbox = (gcnew System::Windows::Forms::TextBox());
			this->signinpasswordtextbox = (gcnew System::Windows::Forms::TextBox());
			this->Sign_in_Button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(884, 73);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(238, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 91);
			this->label1->TabIndex = 11;
			this->label1->Text = L"SIGN IN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(186, 517);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 31);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(191, 662);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 31);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Password:";
			// 
			// Signinusertextbox
			// 
			this->Signinusertextbox->Location = System::Drawing::Point(197, 571);
			this->Signinusertextbox->Multiline = true;
			this->Signinusertextbox->Name = L"Signinusertextbox";
			this->Signinusertextbox->Size = System::Drawing::Size(471, 49);
			this->Signinusertextbox->TabIndex = 14;
			// 
			// signinpasswordtextbox
			// 
			this->signinpasswordtextbox->Location = System::Drawing::Point(197, 726);
			this->signinpasswordtextbox->Multiline = true;
			this->signinpasswordtextbox->Name = L"signinpasswordtextbox";
			this->signinpasswordtextbox->Size = System::Drawing::Size(475, 46);
			this->signinpasswordtextbox->TabIndex = 15;
			// 
			// Sign_in_Button
			// 
			this->Sign_in_Button->BackColor = System::Drawing::SystemColors::Info;
			this->Sign_in_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sign_in_Button->Location = System::Drawing::Point(354, 848);
			this->Sign_in_Button->Name = L"Sign_in_Button";
			this->Sign_in_Button->Size = System::Drawing::Size(129, 56);
			this->Sign_in_Button->TabIndex = 16;
			this->Sign_in_Button->Text = L"Sign In";
			this->Sign_in_Button->UseVisualStyleBackColor = false;
			this->Sign_in_Button->Click += gcnew System::EventHandler(this, &Signinpage::Sign_in_Button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(644, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 31);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Home Page";
			this->label4->Click += gcnew System::EventHandler(this, &Signinpage::label4_Click);
			// 
			// Signinpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(867, 1095);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Sign_in_Button);
			this->Controls->Add(this->signinpasswordtextbox);
			this->Controls->Add(this->Signinusertextbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1404, 1166);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(893, 1166);
			this->Name = L"Signinpage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signinpage";
			this->Load += gcnew System::EventHandler(this, &Signinpage::Signinpage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Sign_in_Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	std::string username = marshal_as<std::string>(Signinusertextbox->Text);
	std::string password = marshal_as<std::string>(signinpasswordtextbox->Text);
	if (username==""&&password=="")
	{
		Signinusertextbox->Focus();
		(MessageBox::Show("Sign In Failed\nUsername and password are missing!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else if (username == "")
	{
		Signinusertextbox->Text = "";
		Signinusertextbox->Focus();
		(MessageBox::Show("Sign In Failed\nUsername is missing!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else if (password == "")
	{
		signinpasswordtextbox->Text = "";
		signinpasswordtextbox->Focus();
		(MessageBox::Show("Sign In Failed\nPassword is missing!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else 
	{
		ofstream write;
		write.open("signinfile.txt",ios::app);
		write << username << "," << password << "\n";
		write.close();
		(MessageBox::Show("Sign In Successfully!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
		Signinpage::Hide();
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Signinpage::Hide();
}
private: System::Void Signinpage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
