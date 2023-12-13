#pragma once
#include"MyForm4.h"
#include<string.h>
#include <string>
namespace loginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MyForm3(String^ data)
		{
			InitializeComponent();


			
			label11->Text = data;

			//
			//TODO: Add the constructor code here
			//
		}
		
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ Monday7;



	private: System::Windows::Forms::TextBox^ Monday6;

	private: System::Windows::Forms::TextBox^ Monday5;

	private: System::Windows::Forms::TextBox^ Monday4;

	private: System::Windows::Forms::TextBox^ Monday3;

	private: System::Windows::Forms::TextBox^ Monday2;

	private: System::Windows::Forms::TextBox^ Monday1;

	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ Tuesday7;



	private: System::Windows::Forms::TextBox^ Tuesday6;

	private: System::Windows::Forms::TextBox^ Tuesday5;

	private: System::Windows::Forms::TextBox^ Tuesday4;

	private: System::Windows::Forms::TextBox^ Tuesday3;

	private: System::Windows::Forms::TextBox^ Tuesday2;

	private: System::Windows::Forms::TextBox^ Tuesday1;

	private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ Wednesday7;



private: System::Windows::Forms::TextBox^ Wednesday6;

private: System::Windows::Forms::TextBox^ Wednesday5;

private: System::Windows::Forms::TextBox^ Wednesday4;

private: System::Windows::Forms::TextBox^ Wednesday3;

private: System::Windows::Forms::TextBox^ Wednesday2;

private: System::Windows::Forms::TextBox^ Wednesday1;

	private: System::Windows::Forms::TextBox^ textBox48;
private: System::Windows::Forms::TextBox^ Thursday7;



private: System::Windows::Forms::TextBox^ Thursday6;

private: System::Windows::Forms::TextBox^ Thursday5;

private: System::Windows::Forms::TextBox^ Thursday4;

private: System::Windows::Forms::TextBox^ Thursday3;

private: System::Windows::Forms::TextBox^ Thursday2;

private: System::Windows::Forms::TextBox^ Thursday1;

	private: System::Windows::Forms::TextBox^ textBox58;
private: System::Windows::Forms::TextBox^ Friday7;



private: System::Windows::Forms::TextBox^ Friday6;

private: System::Windows::Forms::TextBox^ Friday5;

private: System::Windows::Forms::TextBox^ Friday4;

private: System::Windows::Forms::TextBox^ Friday3;

private: System::Windows::Forms::TextBox^ Friday2;

private: System::Windows::Forms::TextBox^ Friday1;

	private: System::Windows::Forms::TextBox^ textBox68;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ Monday8;
private: System::Windows::Forms::TextBox^ Tuesday8;
private: System::Windows::Forms::TextBox^ Wednesday8;
private: System::Windows::Forms::TextBox^ Thursday8;
private: System::Windows::Forms::TextBox^ Friday8;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ mod1;
private: System::Windows::Forms::TextBox^ mod2;
private: System::Windows::Forms::TextBox^ mod3;
private: System::Windows::Forms::TextBox^ mod4;
private: System::Windows::Forms::TextBox^ mod5;
private: System::Windows::Forms::TextBox^ mod6;
private: System::Windows::Forms::TextBox^ mod7;
private: System::Windows::Forms::TextBox^ mod8;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ update;





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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->Monday7 = (gcnew System::Windows::Forms::TextBox());
			this->Monday6 = (gcnew System::Windows::Forms::TextBox());
			this->Monday5 = (gcnew System::Windows::Forms::TextBox());
			this->Monday4 = (gcnew System::Windows::Forms::TextBox());
			this->Monday3 = (gcnew System::Windows::Forms::TextBox());
			this->Monday2 = (gcnew System::Windows::Forms::TextBox());
			this->Monday1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday7 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday6 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday5 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday4 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday3 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday2 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday7 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday6 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday5 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday4 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday3 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday2 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday7 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday6 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday5 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday4 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday3 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday2 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->Friday7 = (gcnew System::Windows::Forms::TextBox());
			this->Friday6 = (gcnew System::Windows::Forms::TextBox());
			this->Friday5 = (gcnew System::Windows::Forms::TextBox());
			this->Friday4 = (gcnew System::Windows::Forms::TextBox());
			this->Friday3 = (gcnew System::Windows::Forms::TextBox());
			this->Friday2 = (gcnew System::Windows::Forms::TextBox());
			this->Friday1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->Monday8 = (gcnew System::Windows::Forms::TextBox());
			this->Tuesday8 = (gcnew System::Windows::Forms::TextBox());
			this->Wednesday8 = (gcnew System::Windows::Forms::TextBox());
			this->Thursday8 = (gcnew System::Windows::Forms::TextBox());
			this->Friday8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->mod1 = (gcnew System::Windows::Forms::TextBox());
			this->mod2 = (gcnew System::Windows::Forms::TextBox());
			this->mod3 = (gcnew System::Windows::Forms::TextBox());
			this->mod4 = (gcnew System::Windows::Forms::TextBox());
			this->mod5 = (gcnew System::Windows::Forms::TextBox());
			this->mod6 = (gcnew System::Windows::Forms::TextBox());
			this->mod7 = (gcnew System::Windows::Forms::TextBox());
			this->mod8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrchid;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(984, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Calendar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(22, 170);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 22);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(22, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 22);
			this->textBox1->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(18, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 21);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Module 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(18, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 21);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Module 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(15, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 40);
			this->label1->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(22, 225);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(189, 22);
			this->textBox3->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(22, 276);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(189, 22);
			this->textBox4->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(18, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 21);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Module 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(18, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 21);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Module 4";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(272, 119);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(189, 22);
			this->textBox5->TabIndex = 28;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(272, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(189, 22);
			this->textBox6->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(268, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 21);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Module 5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(268, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 21);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Module 6";
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(272, 225);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(189, 22);
			this->textBox7->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(272, 276);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(189, 22);
			this->textBox8->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(268, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 21);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Module 7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(268, 252);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 21);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Module 8";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrchid;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(22, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 38);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(97, 51);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label11->Location = System::Drawing::Point(132, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 30);
			this->label11->TabIndex = 31;
			this->label11->Text = L"label11";
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(569, 271);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(90, 27);
			this->textBox15->TabIndex = 59;
			this->textBox15->Text = L"13:15";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(569, 245);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(90, 27);
			this->textBox16->TabIndex = 58;
			this->textBox16->Text = L"12:20";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(569, 219);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(90, 27);
			this->textBox13->TabIndex = 57;
			this->textBox13->Text = L"11:25";
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(569, 193);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(90, 27);
			this->textBox14->TabIndex = 56;
			this->textBox14->Text = L"10:30";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(569, 167);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(90, 27);
			this->textBox11->TabIndex = 55;
			this->textBox11->Text = L"9:35";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(569, 141);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(90, 27);
			this->textBox12->TabIndex = 54;
			this->textBox12->Text = L"8:40";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(569, 115);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(90, 27);
			this->textBox10->TabIndex = 53;
			this->textBox10->Text = L"7:45";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(569, 89);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(90, 27);
			this->textBox9->TabIndex = 52;
			this->textBox9->Text = L"Time";
			// 
			// Monday7
			// 
			this->Monday7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday7->Location = System::Drawing::Point(655, 271);
			this->Monday7->Name = L"Monday7";
			this->Monday7->Size = System::Drawing::Size(90, 27);
			this->Monday7->TabIndex = 69;
			// 
			// Monday6
			// 
			this->Monday6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday6->Location = System::Drawing::Point(655, 245);
			this->Monday6->Name = L"Monday6";
			this->Monday6->Size = System::Drawing::Size(90, 27);
			this->Monday6->TabIndex = 68;
			// 
			// Monday5
			// 
			this->Monday5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday5->Location = System::Drawing::Point(655, 219);
			this->Monday5->Name = L"Monday5";
			this->Monday5->Size = System::Drawing::Size(90, 27);
			this->Monday5->TabIndex = 67;
			// 
			// Monday4
			// 
			this->Monday4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday4->Location = System::Drawing::Point(655, 193);
			this->Monday4->Name = L"Monday4";
			this->Monday4->Size = System::Drawing::Size(90, 27);
			this->Monday4->TabIndex = 66;
			// 
			// Monday3
			// 
			this->Monday3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday3->Location = System::Drawing::Point(655, 167);
			this->Monday3->Name = L"Monday3";
			this->Monday3->Size = System::Drawing::Size(90, 27);
			this->Monday3->TabIndex = 65;
			// 
			// Monday2
			// 
			this->Monday2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday2->Location = System::Drawing::Point(655, 141);
			this->Monday2->Name = L"Monday2";
			this->Monday2->Size = System::Drawing::Size(90, 27);
			this->Monday2->TabIndex = 64;
			// 
			// Monday1
			// 
			this->Monday1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday1->Location = System::Drawing::Point(655, 115);
			this->Monday1->Name = L"Monday1";
			this->Monday1->Size = System::Drawing::Size(90, 27);
			this->Monday1->TabIndex = 63;
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->Location = System::Drawing::Point(655, 89);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(90, 27);
			this->textBox28->TabIndex = 62;
			this->textBox28->Text = L"Monday";
			// 
			// Tuesday7
			// 
			this->Tuesday7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday7->Location = System::Drawing::Point(745, 271);
			this->Tuesday7->Name = L"Tuesday7";
			this->Tuesday7->Size = System::Drawing::Size(90, 27);
			this->Tuesday7->TabIndex = 79;
			// 
			// Tuesday6
			// 
			this->Tuesday6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday6->Location = System::Drawing::Point(745, 245);
			this->Tuesday6->Name = L"Tuesday6";
			this->Tuesday6->Size = System::Drawing::Size(90, 27);
			this->Tuesday6->TabIndex = 78;
			// 
			// Tuesday5
			// 
			this->Tuesday5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday5->Location = System::Drawing::Point(745, 219);
			this->Tuesday5->Name = L"Tuesday5";
			this->Tuesday5->Size = System::Drawing::Size(90, 27);
			this->Tuesday5->TabIndex = 77;
			// 
			// Tuesday4
			// 
			this->Tuesday4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday4->Location = System::Drawing::Point(745, 193);
			this->Tuesday4->Name = L"Tuesday4";
			this->Tuesday4->Size = System::Drawing::Size(90, 27);
			this->Tuesday4->TabIndex = 76;
			// 
			// Tuesday3
			// 
			this->Tuesday3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday3->Location = System::Drawing::Point(745, 167);
			this->Tuesday3->Name = L"Tuesday3";
			this->Tuesday3->Size = System::Drawing::Size(90, 27);
			this->Tuesday3->TabIndex = 75;
			// 
			// Tuesday2
			// 
			this->Tuesday2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday2->Location = System::Drawing::Point(745, 141);
			this->Tuesday2->Name = L"Tuesday2";
			this->Tuesday2->Size = System::Drawing::Size(90, 27);
			this->Tuesday2->TabIndex = 74;
			// 
			// Tuesday1
			// 
			this->Tuesday1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday1->Location = System::Drawing::Point(745, 115);
			this->Tuesday1->Name = L"Tuesday1";
			this->Tuesday1->Size = System::Drawing::Size(90, 27);
			this->Tuesday1->TabIndex = 73;
			// 
			// textBox38
			// 
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox38->Location = System::Drawing::Point(745, 89);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(90, 27);
			this->textBox38->TabIndex = 72;
			this->textBox38->Text = L"Tuesday";
			// 
			// Wednesday7
			// 
			this->Wednesday7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday7->Location = System::Drawing::Point(835, 271);
			this->Wednesday7->Name = L"Wednesday7";
			this->Wednesday7->Size = System::Drawing::Size(90, 27);
			this->Wednesday7->TabIndex = 89;
			// 
			// Wednesday6
			// 
			this->Wednesday6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday6->Location = System::Drawing::Point(835, 245);
			this->Wednesday6->Name = L"Wednesday6";
			this->Wednesday6->Size = System::Drawing::Size(90, 27);
			this->Wednesday6->TabIndex = 88;
			// 
			// Wednesday5
			// 
			this->Wednesday5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday5->Location = System::Drawing::Point(835, 219);
			this->Wednesday5->Name = L"Wednesday5";
			this->Wednesday5->Size = System::Drawing::Size(90, 27);
			this->Wednesday5->TabIndex = 87;
			// 
			// Wednesday4
			// 
			this->Wednesday4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday4->Location = System::Drawing::Point(835, 193);
			this->Wednesday4->Name = L"Wednesday4";
			this->Wednesday4->Size = System::Drawing::Size(90, 27);
			this->Wednesday4->TabIndex = 86;
			// 
			// Wednesday3
			// 
			this->Wednesday3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday3->Location = System::Drawing::Point(835, 167);
			this->Wednesday3->Name = L"Wednesday3";
			this->Wednesday3->Size = System::Drawing::Size(90, 27);
			this->Wednesday3->TabIndex = 85;
			// 
			// Wednesday2
			// 
			this->Wednesday2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday2->Location = System::Drawing::Point(835, 141);
			this->Wednesday2->Name = L"Wednesday2";
			this->Wednesday2->Size = System::Drawing::Size(90, 27);
			this->Wednesday2->TabIndex = 84;
			// 
			// Wednesday1
			// 
			this->Wednesday1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday1->Location = System::Drawing::Point(835, 115);
			this->Wednesday1->Name = L"Wednesday1";
			this->Wednesday1->Size = System::Drawing::Size(90, 27);
			this->Wednesday1->TabIndex = 83;
			// 
			// textBox48
			// 
			this->textBox48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox48->Location = System::Drawing::Point(835, 89);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(90, 27);
			this->textBox48->TabIndex = 82;
			this->textBox48->Text = L"Wednesday";
			// 
			// Thursday7
			// 
			this->Thursday7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday7->Location = System::Drawing::Point(925, 271);
			this->Thursday7->Name = L"Thursday7";
			this->Thursday7->Size = System::Drawing::Size(90, 27);
			this->Thursday7->TabIndex = 99;
			// 
			// Thursday6
			// 
			this->Thursday6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday6->Location = System::Drawing::Point(925, 245);
			this->Thursday6->Name = L"Thursday6";
			this->Thursday6->Size = System::Drawing::Size(90, 27);
			this->Thursday6->TabIndex = 98;
			// 
			// Thursday5
			// 
			this->Thursday5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday5->Location = System::Drawing::Point(925, 219);
			this->Thursday5->Name = L"Thursday5";
			this->Thursday5->Size = System::Drawing::Size(90, 27);
			this->Thursday5->TabIndex = 97;
			// 
			// Thursday4
			// 
			this->Thursday4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday4->Location = System::Drawing::Point(925, 193);
			this->Thursday4->Name = L"Thursday4";
			this->Thursday4->Size = System::Drawing::Size(90, 27);
			this->Thursday4->TabIndex = 96;
			// 
			// Thursday3
			// 
			this->Thursday3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday3->Location = System::Drawing::Point(925, 167);
			this->Thursday3->Name = L"Thursday3";
			this->Thursday3->Size = System::Drawing::Size(90, 27);
			this->Thursday3->TabIndex = 95;
			// 
			// Thursday2
			// 
			this->Thursday2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday2->Location = System::Drawing::Point(925, 141);
			this->Thursday2->Name = L"Thursday2";
			this->Thursday2->Size = System::Drawing::Size(90, 27);
			this->Thursday2->TabIndex = 94;
			// 
			// Thursday1
			// 
			this->Thursday1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday1->Location = System::Drawing::Point(925, 115);
			this->Thursday1->Name = L"Thursday1";
			this->Thursday1->Size = System::Drawing::Size(90, 27);
			this->Thursday1->TabIndex = 93;
			// 
			// textBox58
			// 
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox58->Location = System::Drawing::Point(925, 89);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(90, 27);
			this->textBox58->TabIndex = 92;
			this->textBox58->Text = L"Thursday";
			// 
			// Friday7
			// 
			this->Friday7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday7->Location = System::Drawing::Point(1015, 271);
			this->Friday7->Name = L"Friday7";
			this->Friday7->Size = System::Drawing::Size(90, 27);
			this->Friday7->TabIndex = 109;
			// 
			// Friday6
			// 
			this->Friday6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday6->Location = System::Drawing::Point(1015, 245);
			this->Friday6->Name = L"Friday6";
			this->Friday6->Size = System::Drawing::Size(90, 27);
			this->Friday6->TabIndex = 108;
			// 
			// Friday5
			// 
			this->Friday5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday5->Location = System::Drawing::Point(1015, 219);
			this->Friday5->Name = L"Friday5";
			this->Friday5->Size = System::Drawing::Size(90, 27);
			this->Friday5->TabIndex = 107;
			// 
			// Friday4
			// 
			this->Friday4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday4->Location = System::Drawing::Point(1015, 193);
			this->Friday4->Name = L"Friday4";
			this->Friday4->Size = System::Drawing::Size(90, 27);
			this->Friday4->TabIndex = 106;
			// 
			// Friday3
			// 
			this->Friday3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday3->Location = System::Drawing::Point(1015, 167);
			this->Friday3->Name = L"Friday3";
			this->Friday3->Size = System::Drawing::Size(90, 27);
			this->Friday3->TabIndex = 105;
			// 
			// Friday2
			// 
			this->Friday2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday2->Location = System::Drawing::Point(1015, 141);
			this->Friday2->Name = L"Friday2";
			this->Friday2->Size = System::Drawing::Size(90, 27);
			this->Friday2->TabIndex = 104;
			// 
			// Friday1
			// 
			this->Friday1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday1->Location = System::Drawing::Point(1015, 115);
			this->Friday1->Name = L"Friday1";
			this->Friday1->Size = System::Drawing::Size(90, 27);
			this->Friday1->TabIndex = 103;
			// 
			// textBox68
			// 
			this->textBox68->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox68->Location = System::Drawing::Point(1015, 89);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(90, 27);
			this->textBox68->TabIndex = 102;
			this->textBox68->Text = L"Friday";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrchid;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(569, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(536, 38);
			this->button3->TabIndex = 112;
			this->button3->Text = L"Timetable";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(569, 297);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(90, 27);
			this->textBox18->TabIndex = 60;
			this->textBox18->Text = L"14:10";
			// 
			// Monday8
			// 
			this->Monday8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monday8->Location = System::Drawing::Point(655, 297);
			this->Monday8->Name = L"Monday8";
			this->Monday8->Size = System::Drawing::Size(90, 27);
			this->Monday8->TabIndex = 70;
			// 
			// Tuesday8
			// 
			this->Tuesday8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tuesday8->Location = System::Drawing::Point(745, 297);
			this->Tuesday8->Name = L"Tuesday8";
			this->Tuesday8->Size = System::Drawing::Size(90, 27);
			this->Tuesday8->TabIndex = 80;
			// 
			// Wednesday8
			// 
			this->Wednesday8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wednesday8->Location = System::Drawing::Point(835, 297);
			this->Wednesday8->Name = L"Wednesday8";
			this->Wednesday8->Size = System::Drawing::Size(90, 27);
			this->Wednesday8->TabIndex = 90;
			// 
			// Thursday8
			// 
			this->Thursday8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thursday8->Location = System::Drawing::Point(925, 297);
			this->Thursday8->Name = L"Thursday8";
			this->Thursday8->Size = System::Drawing::Size(90, 27);
			this->Thursday8->TabIndex = 100;
			// 
			// Friday8
			// 
			this->Friday8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Friday8->Location = System::Drawing::Point(1015, 297);
			this->Friday8->Name = L"Friday8";
			this->Friday8->Size = System::Drawing::Size(90, 27);
			this->Friday8->TabIndex = 110;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label12->Location = System::Drawing::Point(21, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(116, 30);
			this->label12->TabIndex = 113;
			this->label12->Text = L"Student ID:";
			// 
			// mod1
			// 
			this->mod1->BackColor = System::Drawing::Color::DarkOrchid;
			this->mod1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->mod1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod1->Location = System::Drawing::Point(17, 440);
			this->mod1->Name = L"mod1";
			this->mod1->Size = System::Drawing::Size(72, 25);
			this->mod1->TabIndex = 114;
			// 
			// mod2
			// 
			this->mod2->BackColor = System::Drawing::Color::Yellow;
			this->mod2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod2->Location = System::Drawing::Point(86, 440);
			this->mod2->Name = L"mod2";
			this->mod2->Size = System::Drawing::Size(72, 25);
			this->mod2->TabIndex = 115;
			// 
			// mod3
			// 
			this->mod3->BackColor = System::Drawing::Color::DodgerBlue;
			this->mod3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod3->Location = System::Drawing::Point(154, 440);
			this->mod3->Name = L"mod3";
			this->mod3->Size = System::Drawing::Size(72, 25);
			this->mod3->TabIndex = 116;
			// 
			// mod4
			// 
			this->mod4->BackColor = System::Drawing::Color::LimeGreen;
			this->mod4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod4->Location = System::Drawing::Point(222, 440);
			this->mod4->Name = L"mod4";
			this->mod4->Size = System::Drawing::Size(72, 25);
			this->mod4->TabIndex = 117;
			// 
			// mod5
			// 
			this->mod5->BackColor = System::Drawing::Color::Orange;
			this->mod5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod5->Location = System::Drawing::Point(290, 440);
			this->mod5->Name = L"mod5";
			this->mod5->Size = System::Drawing::Size(72, 25);
			this->mod5->TabIndex = 118;
			// 
			// mod6
			// 
			this->mod6->BackColor = System::Drawing::Color::Red;
			this->mod6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod6->Location = System::Drawing::Point(358, 440);
			this->mod6->Name = L"mod6";
			this->mod6->Size = System::Drawing::Size(72, 25);
			this->mod6->TabIndex = 119;
			// 
			// mod7
			// 
			this->mod7->BackColor = System::Drawing::Color::LightSlateGray;
			this->mod7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod7->Location = System::Drawing::Point(426, 440);
			this->mod7->Name = L"mod7";
			this->mod7->Size = System::Drawing::Size(72, 25);
			this->mod7->TabIndex = 120;
			// 
			// mod8
			// 
			this->mod8->BackColor = System::Drawing::Color::DeepPink;
			this->mod8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod8->Location = System::Drawing::Point(494, 440);
			this->mod8->Name = L"mod8";
			this->mod8->Size = System::Drawing::Size(72, 25);
			this->mod8->TabIndex = 121;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label13->Location = System::Drawing::Point(17, 397);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(201, 30);
			this->label13->TabIndex = 122;
			this->label13->Text = L"Registered Modules:";
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::DarkOrchid;
			this->update->FlatAppearance->BorderSize = 0;
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->update->Location = System::Drawing::Point(164, 326);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(97, 38);
			this->update->TabIndex = 123;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &MyForm3::update_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1138, 628);
			this->Controls->Add(this->update);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->mod8);
			this->Controls->Add(this->mod7);
			this->Controls->Add(this->mod6);
			this->Controls->Add(this->mod5);
			this->Controls->Add(this->mod4);
			this->Controls->Add(this->mod3);
			this->Controls->Add(this->mod2);
			this->Controls->Add(this->mod1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Friday8);
			this->Controls->Add(this->Friday7);
			this->Controls->Add(this->Friday6);
			this->Controls->Add(this->Friday5);
			this->Controls->Add(this->Friday4);
			this->Controls->Add(this->Friday3);
			this->Controls->Add(this->Friday2);
			this->Controls->Add(this->Friday1);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->Thursday8);
			this->Controls->Add(this->Thursday7);
			this->Controls->Add(this->Thursday6);
			this->Controls->Add(this->Thursday5);
			this->Controls->Add(this->Thursday4);
			this->Controls->Add(this->Thursday3);
			this->Controls->Add(this->Thursday2);
			this->Controls->Add(this->Thursday1);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->Wednesday8);
			this->Controls->Add(this->Wednesday7);
			this->Controls->Add(this->Wednesday6);
			this->Controls->Add(this->Wednesday5);
			this->Controls->Add(this->Wednesday4);
			this->Controls->Add(this->Wednesday3);
			this->Controls->Add(this->Wednesday2);
			this->Controls->Add(this->Wednesday1);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->Tuesday8);
			this->Controls->Add(this->Tuesday7);
			this->Controls->Add(this->Tuesday6);
			this->Controls->Add(this->Tuesday5);
			this->Controls->Add(this->Tuesday4);
			this->Controls->Add(this->Tuesday3);
			this->Controls->Add(this->Tuesday2);
			this->Controls->Add(this->Tuesday1);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->Monday8);
			this->Controls->Add(this->Monday7);
			this->Controls->Add(this->Monday6);
			this->Controls->Add(this->Monday5);
			this->Controls->Add(this->Monday4);
			this->Controls->Add(this->Monday3);
			this->Controls->Add(this->Monday2);
			this->Controls->Add(this->Monday1);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm4^ obj1 = gcnew MyForm4();
		obj1->ShowDialog();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	 
		try
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=justin22";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

			MySqlDataReader^ myReader;

			int id = Int32::Parse(label11->Text);
			String^ module1 = textBox1->Text;
			String^ module2 = textBox2->Text;
			String^ module3 = textBox3->Text;
			String^ module4 = textBox4->Text;
			String^ module5 = textBox5->Text;
			String^ module6 = textBox6->Text;
			String^ module7 = textBox7->Text;
			String^ module8 = textBox8->Text;
		

			
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into timetable.Modules values(" + id + ",'" + module1 + "','" + module2 + "','" + module3 + "','" + module4 + "','" + module5 + "','" + module6 + "','" + module7 + "','" + module8 + "')", conDataBase);
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("USER INFO SAVED " + label11->Text);
			mod1->Text = module1;
			mod2->Text = module2;
			mod3->Text = module3;
			mod4->Text = module4;
			mod5->Text = module5;
			mod6->Text = module6;
			mod7->Text = module7;
			mod8->Text = module8;
			
		
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}











	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ module1;
		String^ module2;
		String^ module3;
		String^ module4;
		String^ module5;
		String^ module6;
		String^ module7;
		String^ module8;
		String^ Day1;
		String^ PeriodNo1;
		String^ Day2;
		String^ PeriodNo2;
		String^ Day3;
		String^ PeriodNo3;
		String^ Day4;
		String^ PeriodNo4;
		String^ Day5;
		String^ PeriodNo5;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=justin22";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlDataReader^ myReader;
		int id = Int32::Parse(label11->Text);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from timetable.Modules WHERE student_id = " + id + "", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {
			module1 = myReader->GetString(1);
			module2 = myReader->GetString(2);
			module3 = myReader->GetString(3);
			module4 = myReader->GetString(4);
			module5 = myReader->GetString(5);
			module6 = myReader->GetString(6);
			module7 = myReader->GetString(7);
			module8 = myReader->GetString(8);

		}


		conDataBase->Close();
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module1 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase2->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		if (module1->Length != 0) {


			//MONDAY Tim3table
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module1;
				Monday1->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module1;
				Monday2->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module1;
				Monday3->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module1;
				Monday4->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module1;
				Monday5->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module1;
				Monday6->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module1;
				Monday7->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module1;
				Monday8->BackColor = System::Drawing::Color::DarkOrchid;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module1;
				Tuesday1->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module1;
				Tuesday2->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module1;
				Tuesday3->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module1;
				Tuesday4->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module1;
				Tuesday5->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module1;
				Tuesday6->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module1;
				Tuesday7->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module1;
				Tuesday8->BackColor = System::Drawing::Color::DarkOrchid;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module1;
				Wednesday1->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module1;
				Wednesday2->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module1;
				Wednesday3->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module1;
				Wednesday4->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module1;
				Wednesday5->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module1;
				Wednesday6->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module1;
				Wednesday7->BackColor = System::Drawing::Color::DarkOrchid;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module1;
				Wednesday8->BackColor = System::Drawing::Color::DarkOrchid;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module1;
				Thursday1->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module1;
				Thursday2->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module1;
				Thursday3->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module1;
				Thursday4->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module1;
				Thursday5->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module1;
				Thursday6->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module1;
				Thursday7->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module1;
				Thursday8->BackColor = System::Drawing::Color::DarkOrchid;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module1;
				Friday1->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module1;
				Friday2->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module1;
				Friday3->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module1;
				Friday4->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module1;
				Friday5->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module1;
				Friday6->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module1;
				Friday7->BackColor = System::Drawing::Color::DarkOrchid;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module1;
				Friday8->BackColor = System::Drawing::Color::DarkOrchid;
			}
		}

		conDataBase->Close();
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module2 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase3->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module2->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module2;
				Monday1->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module2;
				Monday2->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module2;
				Monday3->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module2;
				Monday4->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module2;
				Monday5->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module2;
				Monday6->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module2;
				Monday7->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module2;
				Monday8->BackColor = System::Drawing::Color::Yellow;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module2;
				Tuesday1->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module2;
				Tuesday2->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module2;
				Tuesday3->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module2;
				Tuesday4->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module2;
				Tuesday5->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module2;
				Tuesday6->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module2;
				Tuesday7->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module2;
				Tuesday8->BackColor = System::Drawing::Color::Yellow;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module2;
				Wednesday1->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module2;
				Wednesday2->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module2;
				Wednesday3->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module2;
				Wednesday4->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module2;
				Wednesday5->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module2;
				Wednesday6->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module2;
				Wednesday7->BackColor = System::Drawing::Color::Yellow;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module2;
				Wednesday8->BackColor = System::Drawing::Color::Yellow;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module2;
				Thursday1->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module2;
				Thursday2->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module2;
				Thursday3->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module2;
				Thursday4->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module2;
				Thursday5->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module2;
				Thursday6->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module2;
				Thursday7->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module2;
				Thursday8->BackColor = System::Drawing::Color::Yellow;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module2;
				Friday1->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module2;
				Friday2->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module2;
				Friday3->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module2;
				Friday4->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module2;
				Friday5->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module2;
				Friday6->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module2;
				Friday7->BackColor = System::Drawing::Color::Yellow;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module2;
				Friday8->BackColor = System::Drawing::Color::Yellow;
			}
		}



		conDataBase->Close();
		MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module3 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase4->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module3->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module3;
				Monday1->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module3;
				Monday2->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module3;
				Monday3->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module3;
				Monday4->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module3;
				Monday5->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module3;
				Monday6->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module3;
				Monday7->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module3;
				Monday8->BackColor = System::Drawing::Color::DodgerBlue;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module3;
				Tuesday1->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module3;
				Tuesday2->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module3;
				Tuesday3->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module3;
				Tuesday4->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module3;
				Tuesday5->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module3;
				Tuesday6->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module3;
				Tuesday7->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module3;
				Tuesday8->BackColor = System::Drawing::Color::DodgerBlue;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module3;
				Wednesday1->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module3;
				Wednesday2->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module3;
				Wednesday3->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module3;
				Wednesday4->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module3;
				Wednesday5->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module3;
				Wednesday6->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module3;
				Wednesday7->BackColor = System::Drawing::Color::DodgerBlue;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module3;
				Wednesday8->BackColor = System::Drawing::Color::DodgerBlue;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module3;
				Thursday1->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module3;
				Thursday2->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module3;
				Thursday3->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module3;
				Thursday4->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module3;
				Thursday5->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module3;
				Thursday6->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module3;
				Thursday7->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module3;
				Thursday8->BackColor = System::Drawing::Color::DodgerBlue;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module3;
				Friday1->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module3;
				Friday2->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module3;
				Friday3->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module3;
				Friday4->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module3;
				Friday5->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module3;
				Friday6->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module3;
				Friday7->BackColor = System::Drawing::Color::DodgerBlue;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module3;
				Friday8->BackColor = System::Drawing::Color::DodgerBlue;
			}
		}


		conDataBase->Close();
		MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module4 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase5->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module4->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module4;
				Monday1->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module4;
				Monday2->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module4;
				Monday3->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module4;
				Monday4->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module4;
				Monday5->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module4;
				Monday6->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module4;
				Monday7->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module4;
				Monday8->BackColor = System::Drawing::Color::LimeGreen;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module4;
				Tuesday1->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module4;
				Tuesday2->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module4;
				Tuesday3->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module4;
				Tuesday4->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module4;
				Tuesday5->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module4;
				Tuesday6->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module4;
				Tuesday7->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module4;
				Tuesday8->BackColor = System::Drawing::Color::LimeGreen;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module4;
				Wednesday1->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module4;
				Wednesday2->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module4;
				Wednesday3->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module4;
				Wednesday4->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module4;
				Wednesday5->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module4;
				Wednesday6->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module4;
				Wednesday7->BackColor = System::Drawing::Color::LimeGreen;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module4;
				Wednesday8->BackColor = System::Drawing::Color::LimeGreen;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module4;
				Thursday1->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module4;
				Thursday2->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module4;
				Thursday3->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module4;
				Thursday4->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module4;
				Thursday5->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module4;
				Thursday6->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module4;
				Thursday7->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module4;
				Thursday8->BackColor = System::Drawing::Color::LimeGreen;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module4;
				Friday1->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module4;
				Friday2->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module4;
				Friday3->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module4;
				Friday4->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module4;
				Friday5->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module4;
				Friday6->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module4;
				Friday7->BackColor = System::Drawing::Color::LimeGreen;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module4;
				Friday8->BackColor = System::Drawing::Color::LimeGreen;
			}
		}

		conDataBase->Close();
		MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module5 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase6->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module5->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module5;
				Monday1->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module5;
				Monday2->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module5;
				Monday3->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module5;
				Monday4->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module5;
				Monday5->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module5;
				Monday6->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module5;
				Monday7->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module5;
				Monday8->BackColor = System::Drawing::Color::Orange;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module5;
				Tuesday1->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module5;
				Tuesday2->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module5;
				Tuesday3->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module5;
				Tuesday4->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module5;
				Tuesday5->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module5;
				Tuesday6->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module5;
				Tuesday7->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module5;
				Tuesday8->BackColor = System::Drawing::Color::Orange;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module5;
				Wednesday1->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module5;
				Wednesday2->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module5;
				Wednesday3->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module5;
				Wednesday4->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module5;
				Wednesday5->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module5;
				Wednesday6->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module5;
				Wednesday7->BackColor = System::Drawing::Color::Orange;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module5;
				Wednesday8->BackColor = System::Drawing::Color::Orange;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module5;
				Thursday1->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module5;
				Thursday2->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module5;
				Thursday3->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module5;
				Thursday4->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module5;
				Thursday5->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module5;
				Thursday6->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module5;
				Thursday7->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module5;
				Thursday8->BackColor = System::Drawing::Color::Orange;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module5;
				Friday1->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module5;
				Friday2->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module5;
				Friday3->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module5;
				Friday4->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module5;
				Friday5->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module5;
				Friday6->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module5;
				Friday7->BackColor = System::Drawing::Color::Orange;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module5;
				Friday8->BackColor = System::Drawing::Color::Orange;
			}
		}

		conDataBase->Close();
		MySqlCommand^ cmdDataBase10 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module6 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase10->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module6->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module6;
				Monday1->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module6;
				Monday2->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module6;
				Monday3->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module6;
				Monday4->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module6;
				Monday5->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module6;
				Monday6->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module6;
				Monday7->BackColor = System::Drawing::Color::Red;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module6;
				Monday8->BackColor = System::Drawing::Color::Red;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module6;
				Tuesday1->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module6;
				Tuesday2->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module6;
				Tuesday3->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module6;
				Tuesday4->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module6;
				Tuesday5->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module6;
				Tuesday6->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module6;
				Tuesday7->BackColor = System::Drawing::Color::Red;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module6;
				Tuesday8->BackColor = System::Drawing::Color::Red;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module6;
				Wednesday1->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module6;
				Wednesday2->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module6;
				Wednesday3->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module6;
				Wednesday4->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module6;
				Wednesday5->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module6;
				Wednesday6->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module6;
				Wednesday7->BackColor = System::Drawing::Color::Red;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module6;
				Wednesday8->BackColor = System::Drawing::Color::Red;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module6;
				Thursday1->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module6;
				Thursday2->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module6;
				Thursday3->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module6;
				Thursday4->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module6;
				Thursday5->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module6;
				Thursday6->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module6;
				Thursday7->BackColor = System::Drawing::Color::Red;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module6;
				Thursday8->BackColor = System::Drawing::Color::Red;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module6;
				Friday1->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module6;
				Friday2->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module6;
				Friday3->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module6;
				Friday4->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module6;
				Friday5->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module6;
				Friday6->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module6;
				Friday7->BackColor = System::Drawing::Color::Red;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module6;
				Friday8->BackColor = System::Drawing::Color::Red;
			}
		}

		conDataBase->Close();
		MySqlCommand^ cmdDataBase11 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module7 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase11->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module7->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module7;
				Monday1->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module7;
				Monday2->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module7;
				Monday3->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module7;
				Monday4->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module7;
				Monday5->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module7;
				Monday6->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module7;
				Monday7->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module7;
				Monday8->BackColor = System::Drawing::Color::LightSlateGray;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module7;
				Tuesday1->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module7;
				Tuesday2->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module7;
				Tuesday3->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module7;
				Tuesday4->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module7;
				Tuesday5->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module7;
				Tuesday6->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module7;
				Tuesday7->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module7;
				Tuesday8->BackColor = System::Drawing::Color::LightSlateGray;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module7;
				Wednesday1->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module7;
				Wednesday2->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module7;
				Wednesday3->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module7;
				Wednesday4->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module7;
				Wednesday5->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module7;
				Wednesday6->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module7;
				Wednesday7->BackColor = System::Drawing::Color::LightSlateGray;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module7;
				Wednesday8->BackColor = System::Drawing::Color::LightSlateGray;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module7;
				Thursday1->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module7;
				Thursday2->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module7;
				Thursday3->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module7;
				Thursday4->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module7;
				Thursday5->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module7;
				Thursday6->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module7;
				Thursday7->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module7;
				Thursday8->BackColor = System::Drawing::Color::LightSlateGray;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module7;
				Friday1->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module7;
				Friday2->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module7;
				Friday3->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module7;
				Friday4->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module7;
				Friday5->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module7;
				Friday6->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module7;
				Friday7->BackColor = System::Drawing::Color::LightSlateGray;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module7;
				Friday8->BackColor = System::Drawing::Color::LightSlateGray;
			}
		}
		conDataBase->Close();
		MySqlCommand^ cmdDataBase12 = gcnew MySqlCommand("select * from timetable.Times WHERE ModuleID ='" + module8 + "'", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase12->ExecuteReader();
		while (myReader->Read()) {
			Day1 = myReader->GetString(1);
			PeriodNo1 = myReader->GetString(2);
			Day2 = myReader->GetString(3);
			PeriodNo2 = myReader->GetString(4);
			Day3 = myReader->GetString(5);
			PeriodNo3 = myReader->GetString(6);
			Day4 = myReader->GetString(7);
			PeriodNo4 = myReader->GetString(8);
			Day5 = myReader->GetString(9);
			PeriodNo5 = myReader->GetString(10);

		}
		//MONDAY Tim3table
		if (module8->Length != 0) {
			if ((("Monday" == Day1) && (PeriodNo1 == "1")) || (("Monday" == Day2) && (PeriodNo2 == "1")) || (("Monday" == Day3) && (PeriodNo3 == "1")) || (("Monday" == Day4) && (PeriodNo4 == "1")) || (("Monday" == Day5) && (PeriodNo5 == "1"))) {
				Monday1->Text = module8;
				Monday1->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "2")) || (("Monday" == Day2) && (PeriodNo2 == "2")) || (("Monday" == Day3) && (PeriodNo3 == "2")) || (("Monday" == Day4) && (PeriodNo4 == "2")) || (("Monday" == Day5) && (PeriodNo5 == "2"))) {
				Monday2->Text = module8;
				Monday2->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "3")) || (("Monday" == Day2) && (PeriodNo2 == "3")) || (("Monday" == Day3) && (PeriodNo3 == "3")) || (("Monday" == Day4) && (PeriodNo4 == "3")) || (("Monday" == Day5) && (PeriodNo5 == "3"))) {
				Monday3->Text = module8;
				Monday3->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "4")) || (("Monday" == Day2) && (PeriodNo2 == "4")) || (("Monday" == Day3) && (PeriodNo3 == "4")) || (("Monday" == Day4) && (PeriodNo4 == "4")) || (("Monday" == Day5) && (PeriodNo5 == "4"))) {
				Monday4->Text = module8;
				Monday4->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "5")) || (("Monday" == Day2) && (PeriodNo2 == "5")) || (("Monday" == Day3) && (PeriodNo3 == "5")) || (("Monday" == Day4) && (PeriodNo4 == "5")) || (("Monday" == Day5) && (PeriodNo5 == "5"))) {
				Monday5->Text = module8;
				Monday5->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "6")) || (("Monday" == Day2) && (PeriodNo2 == "6")) || (("Monday" == Day3) && (PeriodNo3 == "6")) || (("Monday" == Day4) && (PeriodNo4 == "6")) || (("Monday" == Day5) && (PeriodNo5 == "6"))) {
				Monday6->Text = module8;
				Monday6->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "7")) || (("Monday" == Day2) && (PeriodNo2 == "7")) || (("Monday" == Day3) && (PeriodNo3 == "7")) || (("Monday" == Day4) && (PeriodNo4 == "7")) || (("Monday" == Day5) && (PeriodNo5 == "7"))) {
				Monday7->Text = module8;
				Monday7->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Monday" == Day1) && (PeriodNo1 == "8")) || (("Monday" == Day2) && (PeriodNo2 == "8")) || (("Monday" == Day3) && (PeriodNo3 == "8")) || (("Monday" == Day4) && (PeriodNo4 == "8")) || (("Monday" == Day5) && (PeriodNo5 == "8"))) {
				Monday8->Text = module8;
				Monday8->BackColor = System::Drawing::Color::DeepPink;
			}
			//Tuesday Timetable
			if ((("Tuesday" == Day1) && (PeriodNo1 == "1")) || (("Tuesday" == Day2) && (PeriodNo2 == "1")) || (("Tuesday" == Day3) && (PeriodNo3 == "1")) || (("Tuesday" == Day4) && (PeriodNo4 == "1")) || (("Tuesday" == Day5) && (PeriodNo5 == "1"))) {
				Tuesday1->Text = module8;
				Tuesday1->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "2")) || (("Tuesday" == Day2) && (PeriodNo2 == "2")) || (("Tuesday" == Day3) && (PeriodNo3 == "2")) || (("Tuesday" == Day4) && (PeriodNo4 == "2")) || (("Tuesday" == Day5) && (PeriodNo5 == "2"))) {
				Tuesday2->Text = module8;
				Tuesday2->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "3")) || (("Tuesday" == Day2) && (PeriodNo2 == "3")) || (("Tuesday" == Day3) && (PeriodNo3 == "3")) || (("Tuesday" == Day4) && (PeriodNo4 == "3")) || (("Tuesday" == Day5) && (PeriodNo5 == "3"))) {
				Tuesday3->Text = module8;
				Tuesday3->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "4")) || (("Tuesday" == Day2) && (PeriodNo2 == "4")) || (("Tuesday" == Day3) && (PeriodNo3 == "4")) || (("Tuesday" == Day4) && (PeriodNo4 == "4")) || (("Tuesday" == Day5) && (PeriodNo5 == "4"))) {
				Tuesday4->Text = module8;
				Tuesday4->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "5")) || (("Tuesday" == Day2) && (PeriodNo2 == "5")) || (("Tuesday" == Day3) && (PeriodNo3 == "5")) || (("Tuesday" == Day4) && (PeriodNo4 == "5")) || (("Tuesday" == Day5) && (PeriodNo5 == "5"))) {
				Tuesday5->Text = module8;
				Tuesday5->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "6")) || (("Tuesday" == Day2) && (PeriodNo2 == "6")) || (("Tuesday" == Day3) && (PeriodNo3 == "6")) || (("Tuesday" == Day4) && (PeriodNo4 == "6")) || (("Tuesday" == Day5) && (PeriodNo5 == "6"))) {
				Tuesday6->Text = module8;
				Tuesday6->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "7")) || (("Tuesday" == Day2) && (PeriodNo2 == "7")) || (("Tuesday" == Day3) && (PeriodNo3 == "7")) || (("Tuesday" == Day4) && (PeriodNo4 == "7")) || (("Tuesday" == Day5) && (PeriodNo5 == "7"))) {
				Tuesday7->Text = module8;
				Tuesday7->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Tuesday" == Day1) && (PeriodNo1 == "8")) || (("Tuesday" == Day2) && (PeriodNo2 == "8")) || (("Tuesday" == Day3) && (PeriodNo3 == "8")) || (("Tuesday" == Day4) && (PeriodNo4 == "8")) || (("Tuesday" == Day5) && (PeriodNo5 == "8"))) {
				Tuesday8->Text = module8;
				Tuesday8->BackColor = System::Drawing::Color::DeepPink;
			}

			//Wednesday Timetable
			if ((("Wednesday" == Day1) && (PeriodNo1 == "1")) || (("Wednesday" == Day2) && (PeriodNo2 == "1")) || (("Wednesday" == Day3) && (PeriodNo3 == "1")) || (("Wednesday" == Day4) && (PeriodNo4 == "1")) || (("Wednesday" == Day5) && (PeriodNo5 == "1"))) {
				Wednesday1->Text = module8;
				Wednesday1->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "2")) || (("Wednesday" == Day2) && (PeriodNo2 == "2")) || (("Wednesday" == Day3) && (PeriodNo3 == "2")) || (("Wednesday" == Day4) && (PeriodNo4 == "2")) || (("Wednesday" == Day5) && (PeriodNo5 == "2"))) {
				Wednesday2->Text = module8;
				Wednesday2->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "3")) || (("Wednesday" == Day2) && (PeriodNo2 == "3")) || (("Wednesday" == Day3) && (PeriodNo3 == "3")) || (("Wednesday" == Day4) && (PeriodNo4 == "3")) || (("Wednesday" == Day5) && (PeriodNo5 == "3"))) {
				Wednesday3->Text = module8;
				Wednesday3->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "4")) || (("Wednesday" == Day2) && (PeriodNo2 == "4")) || (("Wednesday" == Day3) && (PeriodNo3 == "4")) || (("Wednesday" == Day4) && (PeriodNo4 == "4")) || (("Wednesday" == Day5) && (PeriodNo5 == "4"))) {
				Wednesday4->Text = module8;
				Wednesday4->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "5")) || (("Wednesday" == Day2) && (PeriodNo2 == "5")) || (("Wednesday" == Day3) && (PeriodNo3 == "5")) || (("Wednesday" == Day4) && (PeriodNo4 == "5")) || (("Wednesday" == Day5) && (PeriodNo5 == "5"))) {
				Wednesday5->Text = module8;
				Wednesday5->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "6")) || (("Wednesday" == Day2) && (PeriodNo2 == "6")) || (("Wednesday" == Day3) && (PeriodNo3 == "6")) || (("Wednesday" == Day4) && (PeriodNo4 == "6")) || (("Wednesday" == Day5) && (PeriodNo5 == "6"))) {
				Wednesday6->Text = module8;
				Wednesday6->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "7")) || (("Wednesday" == Day2) && (PeriodNo2 == "7")) || (("Wednesday" == Day3) && (PeriodNo3 == "7")) || (("Wednesday" == Day4) && (PeriodNo4 == "7")) || (("Wednesday" == Day5) && (PeriodNo5 == "7"))) {
				Wednesday7->Text = module8;
				Wednesday7->BackColor = System::Drawing::Color::DeepPink;
			}

			if ((("Wednesday" == Day1) && (PeriodNo1 == "8")) || (("Wednesday" == Day2) && (PeriodNo2 == "8")) || (("Wednesday" == Day3) && (PeriodNo3 == "8")) || (("Wednesday" == Day4) && (PeriodNo4 == "8")) || (("Wednesday" == Day5) && (PeriodNo5 == "8"))) {
				Wednesday8->Text = module8;
				Wednesday8->BackColor = System::Drawing::Color::DeepPink;
			}

			//Thursday Timetable
			if ((("Thursday" == Day1) && (PeriodNo1 == "1")) || (("Thursday" == Day2) && (PeriodNo2 == "1")) || (("Thursday" == Day3) && (PeriodNo3 == "1")) || (("Thursday" == Day4) && (PeriodNo4 == "1")) || (("Thursday" == Day5) && (PeriodNo5 == "1"))) {
				Thursday1->Text = module8;
				Thursday1->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "2")) || (("Thursday" == Day2) && (PeriodNo2 == "2")) || (("Thursday" == Day3) && (PeriodNo3 == "2")) || (("Thursday" == Day4) && (PeriodNo4 == "2")) || (("Thursday" == Day5) && (PeriodNo5 == "2"))) {
				Thursday2->Text = module8;
				Thursday2->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "3")) || (("Thursday" == Day2) && (PeriodNo2 == "3")) || (("Thursday" == Day3) && (PeriodNo3 == "3")) || (("Thursday" == Day4) && (PeriodNo4 == "3")) || (("Thursday" == Day5) && (PeriodNo5 == "3"))) {
				Thursday3->Text = module8;
				Thursday3->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "4")) || (("Thursday" == Day2) && (PeriodNo2 == "4")) || (("Thursday" == Day3) && (PeriodNo3 == "4")) || (("Thursday" == Day4) && (PeriodNo4 == "4")) || (("Thursday" == Day5) && (PeriodNo5 == "4"))) {
				Thursday4->Text = module8;
				Thursday4->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "5")) || (("Thursday" == Day2) && (PeriodNo2 == "5")) || (("Thursday" == Day3) && (PeriodNo3 == "5")) || (("Thursday" == Day4) && (PeriodNo4 == "5")) || (("Thursday" == Day5) && (PeriodNo5 == "5"))) {
				Thursday5->Text = module8;
				Thursday5->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "6")) || (("Thursday" == Day2) && (PeriodNo2 == "6")) || (("Thursday" == Day3) && (PeriodNo3 == "6")) || (("Thursday" == Day4) && (PeriodNo4 == "6")) || (("Thursday" == Day5) && (PeriodNo5 == "6"))) {
				Thursday6->Text = module8;
				Thursday6->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "7")) || (("Thursday" == Day2) && (PeriodNo2 == "7")) || (("Thursday" == Day3) && (PeriodNo3 == "7")) || (("Thursday" == Day4) && (PeriodNo4 == "7")) || (("Thursday" == Day5) && (PeriodNo5 == "7"))) {
				Thursday7->Text = module8;
				Thursday7->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Thursday" == Day1) && (PeriodNo1 == "8")) || (("Thursday" == Day2) && (PeriodNo2 == "8")) || (("Thursday" == Day3) && (PeriodNo3 == "8")) || (("Thursday" == Day4) && (PeriodNo4 == "8")) || (("Thursday" == Day5) && (PeriodNo5 == "8"))) {
				Thursday8->Text = module8;
				Thursday8->BackColor = System::Drawing::Color::DeepPink;
			}

			//Friday timetable
			if ((("Friday" == Day1) && (PeriodNo1 == "1")) || (("Friday" == Day2) && (PeriodNo2 == "1")) || (("Friday" == Day3) && (PeriodNo3 == "1")) || (("Friday" == Day4) && (PeriodNo4 == "1")) || (("Friday" == Day5) && (PeriodNo5 == "1"))) {
				Friday1->Text = module8;
				Friday1->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "2")) || (("Friday" == Day2) && (PeriodNo2 == "2")) || (("Friday" == Day3) && (PeriodNo3 == "2")) || (("Friday" == Day4) && (PeriodNo4 == "2")) || (("Friday" == Day5) && (PeriodNo5 == "2"))) {
				Friday2->Text = module8;
				Friday2->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "3")) || (("Friday" == Day2) && (PeriodNo2 == "3")) || (("Friday" == Day3) && (PeriodNo3 == "3")) || (("Friday" == Day4) && (PeriodNo4 == "3")) || (("Friday" == Day5) && (PeriodNo5 == "3"))) {
				Friday3->Text = module8;
				Friday3->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "4")) || (("Friday" == Day2) && (PeriodNo2 == "4")) || (("Friday" == Day3) && (PeriodNo3 == "4")) || (("Friday" == Day4) && (PeriodNo4 == "4")) || (("Friday" == Day5) && (PeriodNo5 == "4"))) {
				Friday4->Text = module8;
				Friday4->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "5")) || (("Friday" == Day2) && (PeriodNo2 == "5")) || (("Friday" == Day3) && (PeriodNo3 == "5")) || (("Friday" == Day4) && (PeriodNo4 == "5")) || (("Friday" == Day5) && (PeriodNo5 == "5"))) {
				Friday5->Text = module8;
				Friday5->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "6")) || (("Friday" == Day2) && (PeriodNo2 == "6")) || (("Friday" == Day3) && (PeriodNo3 == "6")) || (("Friday" == Day4) && (PeriodNo4 == "6")) || (("Friday" == Day5) && (PeriodNo5 == "6"))) {
				Friday6->Text = module8;
				Friday6->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "7")) || (("Friday" == Day2) && (PeriodNo2 == "7")) || (("Friday" == Day3) && (PeriodNo3 == "7")) || (("Friday" == Day4) && (PeriodNo4 == "7")) || (("Friday" == Day5) && (PeriodNo5 == "7"))) {
				Friday7->Text = module8;
				Friday7->BackColor = System::Drawing::Color::DeepPink;
			}
			if ((("Friday" == Day1) && (PeriodNo1 == "8")) || (("Friday" == Day2) && (PeriodNo2 == "8")) || (("Friday" == Day3) && (PeriodNo3 == "8")) || (("Friday" == Day4) && (PeriodNo4 == "8")) || (("Friday" == Day5) && (PeriodNo5 == "8"))) {
				Friday8->Text = module8;
				Friday8->BackColor = System::Drawing::Color::DeepPink;
			}
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {

	String^ module1;
	String^ module2;
	String^ module3;
	String^ module4;
	String^ module5;
	String^ module6;
	String^ module7;
	String^ module8;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=justin22";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlDataReader^ myReader;
	int id = Int32::Parse(label11->Text);
	MySqlCommand^ cmdDataBase9 = gcnew MySqlCommand("select * from timetable.Modules WHERE student_id = " + id + "", conDataBase);
	conDataBase->Open();
	myReader = cmdDataBase9->ExecuteReader();
	while (myReader->Read()) {
		module1 = myReader->GetString(1);
		module2 = myReader->GetString(2);
		module3 = myReader->GetString(3);
		module4 = myReader->GetString(4);
		module5 = myReader->GetString(5);
		module6 = myReader->GetString(6);
		module7 = myReader->GetString(7);
		module8 = myReader->GetString(8);

	}
	
	
	
	
	mod1->Text = module1;
	mod2->Text = module2;
	mod3->Text = module3;
	mod4->Text = module4;
	mod5->Text = module5;
	mod6->Text = module6;
	mod7->Text = module7;
	mod8->Text = module8;
}
private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=justin22";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

		MySqlDataReader^ myReader;

		int id = Int32::Parse(label11->Text);
		String^ module1 = textBox1->Text;
		String^ module2 = textBox2->Text;
		String^ module3 = textBox3->Text;
		String^ module4 = textBox4->Text;
		String^ module5 = textBox5->Text;
		String^ module6 = textBox6->Text;
		String^ module7 = textBox7->Text;
		String^ module8 = textBox8->Text;



		MySqlCommand^ cmdDataBase13 = gcnew MySqlCommand("update timetable.Modules set module1='" + module1 + "',module2='" + module2 + "',module3='" + module3 + "',module4='" + module4 + "',module5='" + module5 + "',module6='" + module6 + "',module7='" + module7 + "',module8='" + module8 + "'WHERE student_id="+id+"", conDataBase);
		conDataBase->Open();
		myReader = cmdDataBase13->ExecuteReader();
		MessageBox::Show("USER INFO UPDATED " + label11->Text);
		conDataBase->Close();
		mod1->Text = module1;
		mod2->Text = module2;
		mod3->Text = module3;
		mod4->Text = module4;
		mod5->Text = module5;
		mod6->Text = module6;
		mod7->Text = module7;
		mod8->Text = module8;

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}







}
};
}
