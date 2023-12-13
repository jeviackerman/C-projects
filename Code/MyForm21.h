#pragma once
#include"MyForm3.h"

namespace loginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	class dong{};
	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(String^data)
		{
			InitializeComponent();
			
			
			label1->Text = data;
			label3->Text = data;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(170, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 45);
			this->label1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Fuchsia;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox1->Location = System::Drawing::Point(34, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(666, 13);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Violet;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(302, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(472, 109);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Modules";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrchid;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(302, 321);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(472, 108);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Calender";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Indigo;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(34, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(740, 13);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Crimson;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(34, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(821, 13);
			this->textBox3->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label2->Location = System::Drawing::Point(26, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 45);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Welcome";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label4->Location = System::Drawing::Point(388, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 30);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Student ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label3->Location = System::Drawing::Point(495, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 30);
			this->label3->TabIndex = 13;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1138, 628);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
    MyForm3^ obj1 = gcnew MyForm3(label3->Text);
	obj1->ShowDialog();

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	

}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=justin22";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlDataReader^ myReader;
		int id = Int32::Parse(label1->Text);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from timetable.signup WHERE student_id = " + id + "", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {
			label1->Text = myReader->GetString(2);

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
