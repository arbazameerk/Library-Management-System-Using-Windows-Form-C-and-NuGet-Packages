#pragma once
#include"LoginPage.h"
#include"Signinpage.h"
#include <msclr\marshal_cppstd.h>



namespace LibraryProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for welcomeform
	/// </summary>

	public ref class welcomeform : public System::Windows::Forms::Form
	{
	
	public:
		welcomeform(void)
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
		~welcomeform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Shop_Now;
	private: System::Windows::Forms::Button^ Sign_In;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(welcomeform::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Shop_Now = (gcnew System::Windows::Forms::Button());
			this->Sign_In = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 110);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1404, 987);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1404, 112);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(25, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(493, 59);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome To Book Store";
			// 
			// Shop_Now
			// 
			this->Shop_Now->BackColor = System::Drawing::SystemColors::Info;
			this->Shop_Now->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Shop_Now->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Shop_Now->Location = System::Drawing::Point(1197, 27);
			this->Shop_Now->Name = L"Shop_Now";
			this->Shop_Now->Size = System::Drawing::Size(170, 62);
			this->Shop_Now->TabIndex = 3;
			this->Shop_Now->Text = L"Shop Now!";
			this->Shop_Now->UseVisualStyleBackColor = false;
			this->Shop_Now->Click += gcnew System::EventHandler(this, &welcomeform::Shop_Now_Click);
			// 
			// Sign_In
			// 
			this->Sign_In->BackColor = System::Drawing::SystemColors::Info;
			this->Sign_In->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sign_In->Location = System::Drawing::Point(963, 27);
			this->Sign_In->Name = L"Sign_In";
			this->Sign_In->Size = System::Drawing::Size(165, 60);
			this->Sign_In->TabIndex = 4;
			this->Sign_In->Text = L"Sign In";
			this->Sign_In->UseVisualStyleBackColor = false;
			this->Sign_In->Click += gcnew System::EventHandler(this, &welcomeform::Sign_In_Click);
			// 
			// welcomeform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1401, 1092);
			this->Controls->Add(this->Sign_In);
			this->Controls->Add(this->Shop_Now);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"welcomeform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"welcomeform";
			this->Load += gcnew System::EventHandler(this, &welcomeform::welcomeform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Shop_Now_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		welcomeform::Hide();
		LoginPage login;
		login.ShowDialog();

		this->Show();
		
	}
private: System::Void Sign_In_Click(System::Object^ sender, System::EventArgs^ e)
{
	welcomeform::Hide();
	Signinpage obj1;
	obj1.ShowDialog();

	this->Show();
}
private: System::Void welcomeform_Load(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
