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
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Makeadminform
	/// </summary>
	public ref class Makeadminform : public System::Windows::Forms::Form
	{
	public:
		Makeadminform(void)
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
		~Makeadminform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ Back1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ usertextbox;
	private: System::Windows::Forms::TextBox^ passtextbox;


	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Makeadminform::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Back1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->usertextbox = (gcnew System::Windows::Forms::TextBox());
			this->passtextbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-35, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(784, 72);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-3, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(152, 72);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// Back1
			// 
			this->Back1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back1.Image")));
			this->Back1->Location = System::Drawing::Point(511, 12);
			this->Back1->Name = L"Back1";
			this->Back1->Size = System::Drawing::Size(100, 45);
			this->Back1->TabIndex = 2;
			this->Back1->Text = L"Back";
			this->Back1->UseVisualStyleBackColor = true;
			this->Back1->Click += gcnew System::EventHandler(this, &Makeadminform::Back1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(45, 249);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(48, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			// 
			// usertextbox
			// 
			this->usertextbox->Location = System::Drawing::Point(56, 311);
			this->usertextbox->Multiline = true;
			this->usertextbox->Name = L"usertextbox";
			this->usertextbox->Size = System::Drawing::Size(543, 52);
			this->usertextbox->TabIndex = 5;
			// 
			// passtextbox
			// 
			this->passtextbox->Location = System::Drawing::Point(56, 487);
			this->passtextbox->Multiline = true;
			this->passtextbox->Name = L"passtextbox";
			this->passtextbox->Size = System::Drawing::Size(543, 53);
			this->passtextbox->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(237, 635);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 52);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Make Admin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Makeadminform::button1_Click);
			// 
			// Makeadminform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(695, 890);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->passtextbox);
			this->Controls->Add(this->usertextbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Back1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Makeadminform";
			this->Text = L"Makeadminform";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Makeadminform::Hide();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	string username = marshal_as<std::string>(usertextbox->Text);
	string password = marshal_as<std::string>(passtextbox->Text);
	if (username == "" && password == "")
	{
		usertextbox->Focus();
		(MessageBox::Show("Sign In Failed\nUsername and password are missing!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else if (username == "")
	{
		usertextbox->Text = "";
		usertextbox->Focus();
		(MessageBox::Show("Sign In Failed\nUsername is missing!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else if (password == "")
	{
		passtextbox->Text = "";
		passtextbox->Focus();
		(MessageBox::Show("Sign In Failed\nPassword is missing!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::OK);
	}
	else
	{
	
		ofstream write;
		write.open("adminlogin.txt",ios::app);
		write << username << "," << password << "\n";
		write.close();
		(MessageBox::Show("Sign In Successfully!\a", "Sign In", MessageBoxButtons::OK,
			MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK);
		Makeadminform::Hide();
	}

}
};
}
