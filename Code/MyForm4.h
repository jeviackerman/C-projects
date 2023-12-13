#pragma once

namespace loginGUI {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			eventGroupBox->Hide();
			eventPnl1->Hide();
			eventPnl2->Hide();
			eventPnl3->Hide();
			eventPnl4->Hide();
			eventPnl5->Hide();
			eventPnl6->Hide();


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;































	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::GroupBox^ eventGroupBox;
	private: System::Windows::Forms::Button^ eventB1;
	private: System::Windows::Forms::Panel^ eventPnl1;













	private: System::Windows::Forms::Button^ deleteButton;



	private: System::Windows::Forms::Button^ saveButton;

	private: System::Windows::Forms::TextBox^ titleBox;



	private: System::Windows::Forms::Label^ label4;








	private: System::Windows::Forms::Button^ eventB6;

	private: System::Windows::Forms::Button^ eventB5;

	private: System::Windows::Forms::Button^ eventB4;

	private: System::Windows::Forms::Button^ eventB3;

	private: System::Windows::Forms::Button^ eventB2;

	private: System::Windows::Forms::ComboBox^ timeCBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ colorGroupbox;
	private: System::Windows::Forms::RadioButton^ greenRButton;


	private: System::Windows::Forms::RadioButton^ brownRButton;

	private: System::Windows::Forms::RadioButton^ lpinkRButton;

	private: System::Windows::Forms::RadioButton^ yellowRButton;

	private: System::Windows::Forms::RadioButton^ orangeRButton;

	private: System::Windows::Forms::RadioButton^ lblueRButton;

	private: System::Windows::Forms::RadioButton^ pinkRButton;

	private: System::Windows::Forms::RadioButton^ redRButton;

	private: System::Windows::Forms::RadioButton^ lgreenRButton;

	private: System::Windows::Forms::RadioButton^ dblueRButton;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ eventPnl2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
private: System::Windows::Forms::ComboBox^ timeCBox2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ titleBox2;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ eventPnl3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ eventPnl4;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton21;
	private: System::Windows::Forms::RadioButton^ radioButton22;
	private: System::Windows::Forms::RadioButton^ radioButton23;
	private: System::Windows::Forms::RadioButton^ radioButton24;
	private: System::Windows::Forms::RadioButton^ radioButton25;
	private: System::Windows::Forms::RadioButton^ radioButton26;
	private: System::Windows::Forms::RadioButton^ radioButton27;
	private: System::Windows::Forms::RadioButton^ radioButton28;
	private: System::Windows::Forms::RadioButton^ radioButton29;
	private: System::Windows::Forms::RadioButton^ radioButton30;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ eventPnl5;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton31;
	private: System::Windows::Forms::RadioButton^ radioButton32;
	private: System::Windows::Forms::RadioButton^ radioButton33;
	private: System::Windows::Forms::RadioButton^ radioButton34;
	private: System::Windows::Forms::RadioButton^ radioButton35;
	private: System::Windows::Forms::RadioButton^ radioButton36;
	private: System::Windows::Forms::RadioButton^ radioButton37;
	private: System::Windows::Forms::RadioButton^ radioButton38;
	private: System::Windows::Forms::RadioButton^ radioButton39;
	private: System::Windows::Forms::RadioButton^ radioButton40;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ eventPnl6;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ radioButton41;
	private: System::Windows::Forms::RadioButton^ radioButton42;
	private: System::Windows::Forms::RadioButton^ radioButton43;
	private: System::Windows::Forms::RadioButton^ radioButton44;
	private: System::Windows::Forms::RadioButton^ radioButton45;
	private: System::Windows::Forms::RadioButton^ radioButton46;
	private: System::Windows::Forms::RadioButton^ radioButton47;
	private: System::Windows::Forms::RadioButton^ radioButton48;
	private: System::Windows::Forms::RadioButton^ radioButton49;
	private: System::Windows::Forms::RadioButton^ radioButton50;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;










































































	public:
































	public:
	private:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->eventGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->eventB6 = (gcnew System::Windows::Forms::Button());
			this->eventB5 = (gcnew System::Windows::Forms::Button());
			this->eventB4 = (gcnew System::Windows::Forms::Button());
			this->eventB3 = (gcnew System::Windows::Forms::Button());
			this->eventB2 = (gcnew System::Windows::Forms::Button());
			this->eventB1 = (gcnew System::Windows::Forms::Button());
			this->eventPnl4 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->eventPnl1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->colorGroupbox = (gcnew System::Windows::Forms::GroupBox());
			this->greenRButton = (gcnew System::Windows::Forms::RadioButton());
			this->brownRButton = (gcnew System::Windows::Forms::RadioButton());
			this->lpinkRButton = (gcnew System::Windows::Forms::RadioButton());
			this->yellowRButton = (gcnew System::Windows::Forms::RadioButton());
			this->orangeRButton = (gcnew System::Windows::Forms::RadioButton());
			this->lblueRButton = (gcnew System::Windows::Forms::RadioButton());
			this->pinkRButton = (gcnew System::Windows::Forms::RadioButton());
			this->redRButton = (gcnew System::Windows::Forms::RadioButton());
			this->lgreenRButton = (gcnew System::Windows::Forms::RadioButton());
			this->dblueRButton = (gcnew System::Windows::Forms::RadioButton());
			this->timeCBox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->titleBox = (gcnew System::Windows::Forms::TextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->eventPnl2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->timeCBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->titleBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->eventPnl3 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->eventPnl5 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton37 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton38 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton39 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton40 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->eventPnl6 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton41 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton42 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton43 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton44 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton45 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton46 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton47 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton48 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton49 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton50 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->eventGroupBox->SuspendLayout();
			this->eventPnl4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->eventPnl1->SuspendLayout();
			this->colorGroupbox->SuspendLayout();
			this->eventPnl2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->eventPnl3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->eventPnl5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->eventPnl6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(424, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calendar";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(1, 3);
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCalendar1->Location = System::Drawing::Point(57, 99);
			this->monthCalendar1->MaxDate = System::DateTime(2110, 1, 1, 0, 0, 0, 0);
			this->monthCalendar1->MinDate = System::DateTime(2010, 1, 1, 0, 0, 0, 0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->TitleBackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm4::monthCalendar1_DateChanged);
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm4::monthCalendar1_DateSelected);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkOrchid;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::GhostWhite;
			this->button11->Location = System::Drawing::Point(928, 563);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(103, 42);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Home";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm4::button11_Click);
			// 
			// eventGroupBox
			// 
			this->eventGroupBox->Controls->Add(this->label4);
			this->eventGroupBox->Controls->Add(this->eventB6);
			this->eventGroupBox->Controls->Add(this->eventB5);
			this->eventGroupBox->Controls->Add(this->eventB4);
			this->eventGroupBox->Controls->Add(this->eventB3);
			this->eventGroupBox->Controls->Add(this->eventB2);
			this->eventGroupBox->Controls->Add(this->eventB1);
			this->eventGroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eventGroupBox->Location = System::Drawing::Point(422, 110);
			this->eventGroupBox->Name = L"eventGroupBox";
			this->eventGroupBox->Size = System::Drawing::Size(631, 329);
			this->eventGroupBox->TabIndex = 4;
			this->eventGroupBox->TabStop = false;
			this->eventGroupBox->Enter += gcnew System::EventHandler(this, &MyForm4::eventGroupBox_Enter);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(6, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(619, 43);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Events";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm4::label4_Click);
			// 
			// eventB6
			// 
			this->eventB6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventB6->Location = System::Drawing::Point(6, 258);
			this->eventB6->Name = L"eventB6";
			this->eventB6->Size = System::Drawing::Size(619, 34);
			this->eventB6->TabIndex = 13;
			this->eventB6->UseVisualStyleBackColor = true;
			this->eventB6->Click += gcnew System::EventHandler(this, &MyForm4::eventb6_Click);
			// 
			// eventB5
			// 
			this->eventB5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventB5->Location = System::Drawing::Point(6, 218);
			this->eventB5->Name = L"eventB5";
			this->eventB5->Size = System::Drawing::Size(619, 34);
			this->eventB5->TabIndex = 13;
			this->eventB5->UseVisualStyleBackColor = true;
			this->eventB5->Click += gcnew System::EventHandler(this, &MyForm4::eventb5_Click);
			// 
			// eventB4
			// 
			this->eventB4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventB4->Location = System::Drawing::Point(6, 178);
			this->eventB4->Name = L"eventB4";
			this->eventB4->Size = System::Drawing::Size(619, 34);
			this->eventB4->TabIndex = 13;
			this->eventB4->UseVisualStyleBackColor = true;
			this->eventB4->Click += gcnew System::EventHandler(this, &MyForm4::eventb4_Click);
			// 
			// eventB3
			// 
			this->eventB3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventB3->Location = System::Drawing::Point(6, 138);
			this->eventB3->Name = L"eventB3";
			this->eventB3->Size = System::Drawing::Size(619, 34);
			this->eventB3->TabIndex = 13;
			this->eventB3->UseVisualStyleBackColor = true;
			this->eventB3->Click += gcnew System::EventHandler(this, &MyForm4::eventb3_Click);
			// 
			// eventB2
			// 
			this->eventB2->BackColor = System::Drawing::Color::LightGray;
			this->eventB2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventB2->Location = System::Drawing::Point(6, 98);
			this->eventB2->Name = L"eventB2";
			this->eventB2->Size = System::Drawing::Size(619, 34);
			this->eventB2->TabIndex = 13;
			this->eventB2->UseVisualStyleBackColor = false;
			this->eventB2->Click += gcnew System::EventHandler(this, &MyForm4::eventb2_Click);
			// 
			// eventB1
			// 
			this->eventB1->BackColor = System::Drawing::Color::LightGray;
			this->eventB1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventB1->Location = System::Drawing::Point(6, 62);
			this->eventB1->Name = L"eventB1";
			this->eventB1->Size = System::Drawing::Size(619, 34);
			this->eventB1->TabIndex = 13;
			this->eventB1->UseVisualStyleBackColor = false;
			this->eventB1->Click += gcnew System::EventHandler(this, &MyForm4::eventb1_Click);
			// 
			// eventPnl4
			// 
			this->eventPnl4->Controls->Add(this->label15);
			this->eventPnl4->Controls->Add(this->groupBox3);
			this->eventPnl4->Controls->Add(this->comboBox3);
			this->eventPnl4->Controls->Add(this->label16);
			this->eventPnl4->Controls->Add(this->label17);
			this->eventPnl4->Controls->Add(this->label18);
			this->eventPnl4->Controls->Add(this->textBox3);
			this->eventPnl4->Controls->Add(this->button5);
			this->eventPnl4->Controls->Add(this->button6);
			this->eventPnl4->Location = System::Drawing::Point(250, 31);
			this->eventPnl4->Name = L"eventPnl4";
			this->eventPnl4->Size = System::Drawing::Size(99, 56);
			this->eventPnl4->TabIndex = 5;
			this->eventPnl4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel2_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(29, 29);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 8;
			this->label15->Text = L"panel 4";
			this->label15->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton21);
			this->groupBox3->Controls->Add(this->radioButton22);
			this->groupBox3->Controls->Add(this->radioButton23);
			this->groupBox3->Controls->Add(this->radioButton24);
			this->groupBox3->Controls->Add(this->radioButton25);
			this->groupBox3->Controls->Add(this->radioButton26);
			this->groupBox3->Controls->Add(this->radioButton27);
			this->groupBox3->Controls->Add(this->radioButton28);
			this->groupBox3->Controls->Add(this->radioButton29);
			this->groupBox3->Controls->Add(this->radioButton30);
			this->groupBox3->Location = System::Drawing::Point(153, 285);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(241, 194);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm4::colorGroupbox_Enter);
			// 
			// radioButton21
			// 
			this->radioButton21->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->radioButton21->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton21->Location = System::Drawing::Point(144, 133);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(88, 23);
			this->radioButton21->TabIndex = 0;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"green";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->ForeColor = System::Drawing::Color::Chocolate;
			this->radioButton22->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton22->Location = System::Drawing::Point(144, 104);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(88, 23);
			this->radioButton22->TabIndex = 0;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L"brown";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->ForeColor = System::Drawing::Color::Pink;
			this->radioButton23->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton23->Location = System::Drawing::Point(144, 75);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(88, 23);
			this->radioButton23->TabIndex = 0;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L"light pink";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton24->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton24->Location = System::Drawing::Point(144, 46);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(88, 23);
			this->radioButton24->TabIndex = 0;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L"yellow";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// radioButton25
			// 
			this->radioButton25->ForeColor = System::Drawing::Color::Orange;
			this->radioButton25->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton25->Location = System::Drawing::Point(144, 19);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(88, 23);
			this->radioButton25->TabIndex = 0;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"orange";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton26
			// 
			this->radioButton26->ForeColor = System::Drawing::Color::SkyBlue;
			this->radioButton26->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton26->Location = System::Drawing::Point(11, 133);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(88, 23);
			this->radioButton26->TabIndex = 0;
			this->radioButton26->TabStop = true;
			this->radioButton26->Text = L"light blue";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->ForeColor = System::Drawing::Color::HotPink;
			this->radioButton27->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton27->Location = System::Drawing::Point(11, 104);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(88, 23);
			this->radioButton27->TabIndex = 0;
			this->radioButton27->TabStop = true;
			this->radioButton27->Text = L"pink";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->ForeColor = System::Drawing::Color::OrangeRed;
			this->radioButton28->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton28->Location = System::Drawing::Point(11, 75);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(88, 23);
			this->radioButton28->TabIndex = 0;
			this->radioButton28->TabStop = true;
			this->radioButton28->Text = L"red";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// radioButton29
			// 
			this->radioButton29->ForeColor = System::Drawing::Color::LightGreen;
			this->radioButton29->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton29->Location = System::Drawing::Point(11, 46);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(88, 23);
			this->radioButton29->TabIndex = 0;
			this->radioButton29->TabStop = true;
			this->radioButton29->Text = L"light green";
			this->radioButton29->UseVisualStyleBackColor = true;
			// 
			// radioButton30
			// 
			this->radioButton30->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->radioButton30->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton30->Location = System::Drawing::Point(11, 19);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(88, 23);
			this->radioButton30->TabIndex = 0;
			this->radioButton30->TabStop = true;
			this->radioButton30->Text = L"dark blue";
			this->radioButton30->UseVisualStyleBackColor = true;
			this->radioButton30->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::radioButton1_CheckedChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"00:00", L"00:30", L"1:00", L"1:30", L"2:00",
					L"2:30", L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00",
					L"9:30", L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30",
					L"16:00", L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00",
					L"22:30", L"23:00", L"23:30", L"", L" "
			});
			this->comboBox3->Location = System::Drawing::Point(141, 189);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(253, 21);
			this->comboBox3->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(16, 285);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 24);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Color";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(16, 186);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 24);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Time";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(16, 124);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 24);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Title";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(140, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(254, 29);
			this->textBox3->TabIndex = 4;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(234, 562);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 30);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::deleteButton4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(319, 562);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 30);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Save";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::saveButton4_Click);
			// 
			// eventPnl1
			// 
			this->eventPnl1->Controls->Add(this->label6);
			this->eventPnl1->Controls->Add(this->colorGroupbox);
			this->eventPnl1->Controls->Add(this->timeCBox);
			this->eventPnl1->Controls->Add(this->label5);
			this->eventPnl1->Controls->Add(this->label3);
			this->eventPnl1->Controls->Add(this->label2);
			this->eventPnl1->Controls->Add(this->titleBox);
			this->eventPnl1->Controls->Add(this->deleteButton);
			this->eventPnl1->Controls->Add(this->saveButton);
			this->eventPnl1->Location = System::Drawing::Point(607, 492);
			this->eventPnl1->Name = L"eventPnl1";
			this->eventPnl1->Size = System::Drawing::Size(80, 56);
			this->eventPnl1->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(17, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"panel 1";
			this->label6->Visible = false;
			// 
			// colorGroupbox
			// 
			this->colorGroupbox->Controls->Add(this->greenRButton);
			this->colorGroupbox->Controls->Add(this->brownRButton);
			this->colorGroupbox->Controls->Add(this->lpinkRButton);
			this->colorGroupbox->Controls->Add(this->yellowRButton);
			this->colorGroupbox->Controls->Add(this->orangeRButton);
			this->colorGroupbox->Controls->Add(this->lblueRButton);
			this->colorGroupbox->Controls->Add(this->pinkRButton);
			this->colorGroupbox->Controls->Add(this->redRButton);
			this->colorGroupbox->Controls->Add(this->lgreenRButton);
			this->colorGroupbox->Controls->Add(this->dblueRButton);
			this->colorGroupbox->Location = System::Drawing::Point(153, 285);
			this->colorGroupbox->Name = L"colorGroupbox";
			this->colorGroupbox->Size = System::Drawing::Size(241, 194);
			this->colorGroupbox->TabIndex = 7;
			this->colorGroupbox->TabStop = false;
			this->colorGroupbox->Enter += gcnew System::EventHandler(this, &MyForm4::colorGroupbox_Enter);
			// 
			// greenRButton
			// 
			this->greenRButton->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->greenRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->greenRButton->Location = System::Drawing::Point(144, 133);
			this->greenRButton->Name = L"greenRButton";
			this->greenRButton->Size = System::Drawing::Size(88, 23);
			this->greenRButton->TabIndex = 0;
			this->greenRButton->TabStop = true;
			this->greenRButton->Text = L"green";
			this->greenRButton->UseVisualStyleBackColor = true;
			// 
			// brownRButton
			// 
			this->brownRButton->ForeColor = System::Drawing::Color::Chocolate;
			this->brownRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->brownRButton->Location = System::Drawing::Point(144, 104);
			this->brownRButton->Name = L"brownRButton";
			this->brownRButton->Size = System::Drawing::Size(88, 23);
			this->brownRButton->TabIndex = 0;
			this->brownRButton->TabStop = true;
			this->brownRButton->Text = L"brown";
			this->brownRButton->UseVisualStyleBackColor = true;
			// 
			// lpinkRButton
			// 
			this->lpinkRButton->ForeColor = System::Drawing::Color::Pink;
			this->lpinkRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lpinkRButton->Location = System::Drawing::Point(144, 75);
			this->lpinkRButton->Name = L"lpinkRButton";
			this->lpinkRButton->Size = System::Drawing::Size(88, 23);
			this->lpinkRButton->TabIndex = 0;
			this->lpinkRButton->TabStop = true;
			this->lpinkRButton->Text = L"light pink";
			this->lpinkRButton->UseVisualStyleBackColor = true;
			// 
			// yellowRButton
			// 
			this->yellowRButton->ForeColor = System::Drawing::Color::Yellow;
			this->yellowRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->yellowRButton->Location = System::Drawing::Point(144, 46);
			this->yellowRButton->Name = L"yellowRButton";
			this->yellowRButton->Size = System::Drawing::Size(88, 23);
			this->yellowRButton->TabIndex = 0;
			this->yellowRButton->TabStop = true;
			this->yellowRButton->Text = L"yellow";
			this->yellowRButton->UseVisualStyleBackColor = true;
			// 
			// orangeRButton
			// 
			this->orangeRButton->ForeColor = System::Drawing::Color::Orange;
			this->orangeRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->orangeRButton->Location = System::Drawing::Point(144, 19);
			this->orangeRButton->Name = L"orangeRButton";
			this->orangeRButton->Size = System::Drawing::Size(88, 23);
			this->orangeRButton->TabIndex = 0;
			this->orangeRButton->TabStop = true;
			this->orangeRButton->Text = L"orange";
			this->orangeRButton->UseVisualStyleBackColor = true;
			// 
			// lblueRButton
			// 
			this->lblueRButton->ForeColor = System::Drawing::Color::SkyBlue;
			this->lblueRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblueRButton->Location = System::Drawing::Point(11, 133);
			this->lblueRButton->Name = L"lblueRButton";
			this->lblueRButton->Size = System::Drawing::Size(88, 23);
			this->lblueRButton->TabIndex = 0;
			this->lblueRButton->TabStop = true;
			this->lblueRButton->Text = L"light blue";
			this->lblueRButton->UseVisualStyleBackColor = true;
			// 
			// pinkRButton
			// 
			this->pinkRButton->ForeColor = System::Drawing::Color::HotPink;
			this->pinkRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->pinkRButton->Location = System::Drawing::Point(11, 104);
			this->pinkRButton->Name = L"pinkRButton";
			this->pinkRButton->Size = System::Drawing::Size(88, 23);
			this->pinkRButton->TabIndex = 0;
			this->pinkRButton->TabStop = true;
			this->pinkRButton->Text = L"pink";
			this->pinkRButton->UseVisualStyleBackColor = true;
			// 
			// redRButton
			// 
			this->redRButton->ForeColor = System::Drawing::Color::OrangeRed;
			this->redRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->redRButton->Location = System::Drawing::Point(11, 75);
			this->redRButton->Name = L"redRButton";
			this->redRButton->Size = System::Drawing::Size(88, 23);
			this->redRButton->TabIndex = 0;
			this->redRButton->TabStop = true;
			this->redRButton->Text = L"red";
			this->redRButton->UseVisualStyleBackColor = true;
			// 
			// lgreenRButton
			// 
			this->lgreenRButton->ForeColor = System::Drawing::Color::LightGreen;
			this->lgreenRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lgreenRButton->Location = System::Drawing::Point(11, 46);
			this->lgreenRButton->Name = L"lgreenRButton";
			this->lgreenRButton->Size = System::Drawing::Size(88, 23);
			this->lgreenRButton->TabIndex = 0;
			this->lgreenRButton->TabStop = true;
			this->lgreenRButton->Text = L"light green";
			this->lgreenRButton->UseVisualStyleBackColor = true;
			// 
			// dblueRButton
			// 
			this->dblueRButton->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->dblueRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->dblueRButton->Location = System::Drawing::Point(11, 19);
			this->dblueRButton->Name = L"dblueRButton";
			this->dblueRButton->Size = System::Drawing::Size(88, 23);
			this->dblueRButton->TabIndex = 0;
			this->dblueRButton->TabStop = true;
			this->dblueRButton->Text = L"dark blue";
			this->dblueRButton->UseVisualStyleBackColor = true;
			this->dblueRButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::radioButton1_CheckedChanged);
			// 
			// timeCBox
			// 
			this->timeCBox->FormattingEnabled = true;
			this->timeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"00:00", L"00:30", L"1:00", L"1:30", L"2:00", L"2:30",
					L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00", L"9:30",
					L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30", L"16:00",
					L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00", L"22:30",
					L"23:00", L"23:30", L"", L" "
			});
			this->timeCBox->Location = System::Drawing::Point(141, 189);
			this->timeCBox->Name = L"timeCBox";
			this->timeCBox->Size = System::Drawing::Size(253, 21);
			this->timeCBox->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(16, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Color";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Time";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(16, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Title";
			// 
			// titleBox
			// 
			this->titleBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleBox->Location = System::Drawing::Point(140, 124);
			this->titleBox->Name = L"titleBox";
			this->titleBox->Size = System::Drawing::Size(254, 29);
			this->titleBox->TabIndex = 4;
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(234, 562);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(62, 30);
			this->deleteButton->TabIndex = 0;
			this->deleteButton->Text = L"Delete";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &MyForm4::deleteButton1_Click);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(319, 562);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(62, 30);
			this->saveButton->TabIndex = 0;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MyForm4::saveButton1_Click);
			// 
			// eventPnl2
			// 
			this->eventPnl2->Controls->Add(this->label7);
			this->eventPnl2->Controls->Add(this->groupBox1);
			this->eventPnl2->Controls->Add(this->timeCBox2);
			this->eventPnl2->Controls->Add(this->label8);
			this->eventPnl2->Controls->Add(this->label9);
			this->eventPnl2->Controls->Add(this->label10);
			this->eventPnl2->Controls->Add(this->titleBox2);
			this->eventPnl2->Controls->Add(this->button1);
			this->eventPnl2->Controls->Add(this->button2);
			this->eventPnl2->Location = System::Drawing::Point(0, 328);
			this->eventPnl2->Name = L"eventPnl2";
			this->eventPnl2->Size = System::Drawing::Size(1138, 300);
			this->eventPnl2->TabIndex = 5;
			this->eventPnl2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel2_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(29, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"panel 2";
			this->label7->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Controls->Add(this->radioButton10);
			this->groupBox1->Location = System::Drawing::Point(153, 285);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(241, 194);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm4::colorGroupbox_Enter);
			// 
			// radioButton1
			// 
			this->radioButton1->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->radioButton1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton1->Location = System::Drawing::Point(144, 133);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(88, 23);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"green";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->ForeColor = System::Drawing::Color::Chocolate;
			this->radioButton2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton2->Location = System::Drawing::Point(144, 104);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 23);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"brown";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->ForeColor = System::Drawing::Color::Pink;
			this->radioButton3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton3->Location = System::Drawing::Point(144, 75);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(88, 23);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"light pink";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton4->Location = System::Drawing::Point(144, 46);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(88, 23);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"yellow";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->ForeColor = System::Drawing::Color::Orange;
			this->radioButton5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton5->Location = System::Drawing::Point(144, 19);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(88, 23);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"orange";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->ForeColor = System::Drawing::Color::SkyBlue;
			this->radioButton6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton6->Location = System::Drawing::Point(11, 133);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(88, 23);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"light blue";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->ForeColor = System::Drawing::Color::HotPink;
			this->radioButton7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton7->Location = System::Drawing::Point(11, 104);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(88, 23);
			this->radioButton7->TabIndex = 0;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"pink";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->ForeColor = System::Drawing::Color::OrangeRed;
			this->radioButton8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton8->Location = System::Drawing::Point(11, 75);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(88, 23);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"red";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->ForeColor = System::Drawing::Color::LightGreen;
			this->radioButton9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton9->Location = System::Drawing::Point(11, 46);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(88, 23);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"light green";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->radioButton10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton10->Location = System::Drawing::Point(11, 19);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(88, 23);
			this->radioButton10->TabIndex = 0;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"dark blue";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::radioButton1_CheckedChanged);
			// 
			// timeCBox2
			// 
			this->timeCBox2->FormattingEnabled = true;
			this->timeCBox2->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"00:00", L"00:30", L"1:00", L"1:30", L"2:00",
					L"2:30", L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00",
					L"9:30", L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30",
					L"16:00", L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00",
					L"22:30", L"23:00", L"23:30", L"", L" "
			});
			this->timeCBox2->Location = System::Drawing::Point(141, 189);
			this->timeCBox2->Name = L"timeCBox2";
			this->timeCBox2->Size = System::Drawing::Size(253, 21);
			this->timeCBox2->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(16, 285);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Color";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(16, 186);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 24);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Time";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(16, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 24);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Title";
			// 
			// titleBox2
			// 
			this->titleBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleBox2->Location = System::Drawing::Point(140, 124);
			this->titleBox2->Name = L"titleBox2";
			this->titleBox2->Size = System::Drawing::Size(254, 29);
			this->titleBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(234, 562);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::deleteButton2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(319, 562);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 30);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::saveButton2_Click);
			// 
			// eventPnl3
			// 
			this->eventPnl3->Controls->Add(this->label11);
			this->eventPnl3->Controls->Add(this->groupBox2);
			this->eventPnl3->Controls->Add(this->comboBox2);
			this->eventPnl3->Controls->Add(this->label12);
			this->eventPnl3->Controls->Add(this->label13);
			this->eventPnl3->Controls->Add(this->label14);
			this->eventPnl3->Controls->Add(this->textBox2);
			this->eventPnl3->Controls->Add(this->button3);
			this->eventPnl3->Controls->Add(this->button4);
			this->eventPnl3->Location = System::Drawing::Point(457, 490);
			this->eventPnl3->Name = L"eventPnl3";
			this->eventPnl3->Size = System::Drawing::Size(89, 56);
			this->eventPnl3->TabIndex = 5;
			this->eventPnl3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel2_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(33, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"panel 3";
			this->label11->Visible = false;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm4::label11_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton15);
			this->groupBox2->Controls->Add(this->radioButton16);
			this->groupBox2->Controls->Add(this->radioButton17);
			this->groupBox2->Controls->Add(this->radioButton18);
			this->groupBox2->Controls->Add(this->radioButton19);
			this->groupBox2->Controls->Add(this->radioButton20);
			this->groupBox2->Location = System::Drawing::Point(153, 285);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(241, 194);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm4::colorGroupbox_Enter);
			// 
			// radioButton11
			// 
			this->radioButton11->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->radioButton11->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton11->Location = System::Drawing::Point(144, 133);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(88, 23);
			this->radioButton11->TabIndex = 0;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"green";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->ForeColor = System::Drawing::Color::Chocolate;
			this->radioButton12->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton12->Location = System::Drawing::Point(144, 104);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(88, 23);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"brown";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->ForeColor = System::Drawing::Color::Pink;
			this->radioButton13->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton13->Location = System::Drawing::Point(144, 75);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(88, 23);
			this->radioButton13->TabIndex = 0;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"light pink";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton14->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton14->Location = System::Drawing::Point(144, 46);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(88, 23);
			this->radioButton14->TabIndex = 0;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"yellow";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->ForeColor = System::Drawing::Color::Orange;
			this->radioButton15->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton15->Location = System::Drawing::Point(144, 19);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(88, 23);
			this->radioButton15->TabIndex = 0;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"orange";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->ForeColor = System::Drawing::Color::SkyBlue;
			this->radioButton16->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton16->Location = System::Drawing::Point(11, 133);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(88, 23);
			this->radioButton16->TabIndex = 0;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"light blue";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->ForeColor = System::Drawing::Color::HotPink;
			this->radioButton17->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton17->Location = System::Drawing::Point(11, 104);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(88, 23);
			this->radioButton17->TabIndex = 0;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"pink";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->ForeColor = System::Drawing::Color::OrangeRed;
			this->radioButton18->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton18->Location = System::Drawing::Point(11, 75);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(88, 23);
			this->radioButton18->TabIndex = 0;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"red";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->ForeColor = System::Drawing::Color::LightGreen;
			this->radioButton19->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton19->Location = System::Drawing::Point(11, 46);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(88, 23);
			this->radioButton19->TabIndex = 0;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"light green";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->radioButton20->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton20->Location = System::Drawing::Point(11, 19);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(88, 23);
			this->radioButton20->TabIndex = 0;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"dark blue";
			this->radioButton20->UseVisualStyleBackColor = true;
			this->radioButton20->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::radioButton1_CheckedChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"00:00", L"00:30", L"1:00", L"1:30", L"2:00",
					L"2:30", L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00",
					L"9:30", L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30",
					L"16:00", L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00",
					L"22:30", L"23:00", L"23:30", L"", L" "
			});
			this->comboBox2->Location = System::Drawing::Point(141, 189);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(253, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(16, 285);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 24);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Color";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(16, 186);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 24);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Time";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(16, 124);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 24);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Title";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(140, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 29);
			this->textBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(234, 562);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 30);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::deleteButton2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(319, 562);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 30);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::saveButton3_Click);
			// 
			// eventPnl5
			// 
			this->eventPnl5->Controls->Add(this->label19);
			this->eventPnl5->Controls->Add(this->groupBox4);
			this->eventPnl5->Controls->Add(this->comboBox4);
			this->eventPnl5->Controls->Add(this->label20);
			this->eventPnl5->Controls->Add(this->label21);
			this->eventPnl5->Controls->Add(this->label22);
			this->eventPnl5->Controls->Add(this->textBox4);
			this->eventPnl5->Controls->Add(this->button7);
			this->eventPnl5->Controls->Add(this->button8);
			this->eventPnl5->Location = System::Drawing::Point(35, 25);
			this->eventPnl5->Name = L"eventPnl5";
			this->eventPnl5->Size = System::Drawing::Size(68, 62);
			this->eventPnl5->TabIndex = 5;
			this->eventPnl5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel2_Paint);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(29, 29);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"panel 5";
			this->label19->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton31);
			this->groupBox4->Controls->Add(this->radioButton32);
			this->groupBox4->Controls->Add(this->radioButton33);
			this->groupBox4->Controls->Add(this->radioButton34);
			this->groupBox4->Controls->Add(this->radioButton35);
			this->groupBox4->Controls->Add(this->radioButton36);
			this->groupBox4->Controls->Add(this->radioButton37);
			this->groupBox4->Controls->Add(this->radioButton38);
			this->groupBox4->Controls->Add(this->radioButton39);
			this->groupBox4->Controls->Add(this->radioButton40);
			this->groupBox4->Location = System::Drawing::Point(153, 285);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(241, 194);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm4::colorGroupbox_Enter);
			// 
			// radioButton31
			// 
			this->radioButton31->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->radioButton31->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton31->Location = System::Drawing::Point(144, 133);
			this->radioButton31->Name = L"radioButton31";
			this->radioButton31->Size = System::Drawing::Size(88, 23);
			this->radioButton31->TabIndex = 0;
			this->radioButton31->TabStop = true;
			this->radioButton31->Text = L"green";
			this->radioButton31->UseVisualStyleBackColor = true;
			// 
			// radioButton32
			// 
			this->radioButton32->ForeColor = System::Drawing::Color::Chocolate;
			this->radioButton32->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton32->Location = System::Drawing::Point(144, 104);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(88, 23);
			this->radioButton32->TabIndex = 0;
			this->radioButton32->TabStop = true;
			this->radioButton32->Text = L"brown";
			this->radioButton32->UseVisualStyleBackColor = true;
			// 
			// radioButton33
			// 
			this->radioButton33->ForeColor = System::Drawing::Color::Pink;
			this->radioButton33->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton33->Location = System::Drawing::Point(144, 75);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(88, 23);
			this->radioButton33->TabIndex = 0;
			this->radioButton33->TabStop = true;
			this->radioButton33->Text = L"light pink";
			this->radioButton33->UseVisualStyleBackColor = true;
			// 
			// radioButton34
			// 
			this->radioButton34->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton34->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton34->Location = System::Drawing::Point(144, 46);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(88, 23);
			this->radioButton34->TabIndex = 0;
			this->radioButton34->TabStop = true;
			this->radioButton34->Text = L"yellow";
			this->radioButton34->UseVisualStyleBackColor = true;
			// 
			// radioButton35
			// 
			this->radioButton35->ForeColor = System::Drawing::Color::Orange;
			this->radioButton35->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton35->Location = System::Drawing::Point(144, 19);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(88, 23);
			this->radioButton35->TabIndex = 0;
			this->radioButton35->TabStop = true;
			this->radioButton35->Text = L"orange";
			this->radioButton35->UseVisualStyleBackColor = true;
			// 
			// radioButton36
			// 
			this->radioButton36->ForeColor = System::Drawing::Color::SkyBlue;
			this->radioButton36->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton36->Location = System::Drawing::Point(11, 133);
			this->radioButton36->Name = L"radioButton36";
			this->radioButton36->Size = System::Drawing::Size(88, 23);
			this->radioButton36->TabIndex = 0;
			this->radioButton36->TabStop = true;
			this->radioButton36->Text = L"light blue";
			this->radioButton36->UseVisualStyleBackColor = true;
			// 
			// radioButton37
			// 
			this->radioButton37->ForeColor = System::Drawing::Color::HotPink;
			this->radioButton37->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton37->Location = System::Drawing::Point(11, 104);
			this->radioButton37->Name = L"radioButton37";
			this->radioButton37->Size = System::Drawing::Size(88, 23);
			this->radioButton37->TabIndex = 0;
			this->radioButton37->TabStop = true;
			this->radioButton37->Text = L"pink";
			this->radioButton37->UseVisualStyleBackColor = true;
			// 
			// radioButton38
			// 
			this->radioButton38->ForeColor = System::Drawing::Color::OrangeRed;
			this->radioButton38->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton38->Location = System::Drawing::Point(11, 75);
			this->radioButton38->Name = L"radioButton38";
			this->radioButton38->Size = System::Drawing::Size(88, 23);
			this->radioButton38->TabIndex = 0;
			this->radioButton38->TabStop = true;
			this->radioButton38->Text = L"red";
			this->radioButton38->UseVisualStyleBackColor = true;
			// 
			// radioButton39
			// 
			this->radioButton39->ForeColor = System::Drawing::Color::LightGreen;
			this->radioButton39->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton39->Location = System::Drawing::Point(11, 46);
			this->radioButton39->Name = L"radioButton39";
			this->radioButton39->Size = System::Drawing::Size(88, 23);
			this->radioButton39->TabIndex = 0;
			this->radioButton39->TabStop = true;
			this->radioButton39->Text = L"light green";
			this->radioButton39->UseVisualStyleBackColor = true;
			// 
			// radioButton40
			// 
			this->radioButton40->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->radioButton40->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton40->Location = System::Drawing::Point(11, 19);
			this->radioButton40->Name = L"radioButton40";
			this->radioButton40->Size = System::Drawing::Size(88, 23);
			this->radioButton40->TabIndex = 0;
			this->radioButton40->TabStop = true;
			this->radioButton40->Text = L"dark blue";
			this->radioButton40->UseVisualStyleBackColor = true;
			this->radioButton40->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::radioButton1_CheckedChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"00:00", L"00:30", L"1:00", L"1:30", L"2:00",
					L"2:30", L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00",
					L"9:30", L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30",
					L"16:00", L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00",
					L"22:30", L"23:00", L"23:30", L"", L" "
			});
			this->comboBox4->Location = System::Drawing::Point(141, 189);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(253, 21);
			this->comboBox4->TabIndex = 6;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(16, 285);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 24);
			this->label20->TabIndex = 5;
			this->label20->Text = L"Color";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(16, 186);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 24);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Time";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(16, 124);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 24);
			this->label22->TabIndex = 5;
			this->label22->Text = L"Title";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(140, 124);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(254, 29);
			this->textBox4->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(234, 562);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 30);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::deleteButton5_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(319, 562);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 30);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Save";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::saveButton5_Click);
			// 
			// eventPnl6
			// 
			this->eventPnl6->Controls->Add(this->label23);
			this->eventPnl6->Controls->Add(this->groupBox5);
			this->eventPnl6->Controls->Add(this->comboBox5);
			this->eventPnl6->Controls->Add(this->label24);
			this->eventPnl6->Controls->Add(this->label25);
			this->eventPnl6->Controls->Add(this->label26);
			this->eventPnl6->Controls->Add(this->textBox5);
			this->eventPnl6->Controls->Add(this->button9);
			this->eventPnl6->Controls->Add(this->button10);
			this->eventPnl6->Location = System::Drawing::Point(126, 25);
			this->eventPnl6->Name = L"eventPnl6";
			this->eventPnl6->Size = System::Drawing::Size(89, 58);
			this->eventPnl6->TabIndex = 5;
			this->eventPnl6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel2_Paint);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(29, 29);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 13);
			this->label23->TabIndex = 8;
			this->label23->Text = L"panel 6";
			this->label23->Visible = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton41);
			this->groupBox5->Controls->Add(this->radioButton42);
			this->groupBox5->Controls->Add(this->radioButton43);
			this->groupBox5->Controls->Add(this->radioButton44);
			this->groupBox5->Controls->Add(this->radioButton45);
			this->groupBox5->Controls->Add(this->radioButton46);
			this->groupBox5->Controls->Add(this->radioButton47);
			this->groupBox5->Controls->Add(this->radioButton48);
			this->groupBox5->Controls->Add(this->radioButton49);
			this->groupBox5->Controls->Add(this->radioButton50);
			this->groupBox5->Location = System::Drawing::Point(153, 285);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(241, 194);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm4::colorGroupbox_Enter);
			// 
			// radioButton41
			// 
			this->radioButton41->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->radioButton41->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton41->Location = System::Drawing::Point(144, 133);
			this->radioButton41->Name = L"radioButton41";
			this->radioButton41->Size = System::Drawing::Size(88, 23);
			this->radioButton41->TabIndex = 0;
			this->radioButton41->TabStop = true;
			this->radioButton41->Text = L"green";
			this->radioButton41->UseVisualStyleBackColor = true;
			// 
			// radioButton42
			// 
			this->radioButton42->ForeColor = System::Drawing::Color::Chocolate;
			this->radioButton42->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton42->Location = System::Drawing::Point(144, 104);
			this->radioButton42->Name = L"radioButton42";
			this->radioButton42->Size = System::Drawing::Size(88, 23);
			this->radioButton42->TabIndex = 0;
			this->radioButton42->TabStop = true;
			this->radioButton42->Text = L"brown";
			this->radioButton42->UseVisualStyleBackColor = true;
			// 
			// radioButton43
			// 
			this->radioButton43->ForeColor = System::Drawing::Color::Pink;
			this->radioButton43->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton43->Location = System::Drawing::Point(144, 75);
			this->radioButton43->Name = L"radioButton43";
			this->radioButton43->Size = System::Drawing::Size(88, 23);
			this->radioButton43->TabIndex = 0;
			this->radioButton43->TabStop = true;
			this->radioButton43->Text = L"light pink";
			this->radioButton43->UseVisualStyleBackColor = true;
			// 
			// radioButton44
			// 
			this->radioButton44->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton44->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton44->Location = System::Drawing::Point(144, 46);
			this->radioButton44->Name = L"radioButton44";
			this->radioButton44->Size = System::Drawing::Size(88, 23);
			this->radioButton44->TabIndex = 0;
			this->radioButton44->TabStop = true;
			this->radioButton44->Text = L"yellow";
			this->radioButton44->UseVisualStyleBackColor = true;
			// 
			// radioButton45
			// 
			this->radioButton45->ForeColor = System::Drawing::Color::Orange;
			this->radioButton45->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton45->Location = System::Drawing::Point(144, 19);
			this->radioButton45->Name = L"radioButton45";
			this->radioButton45->Size = System::Drawing::Size(88, 23);
			this->radioButton45->TabIndex = 0;
			this->radioButton45->TabStop = true;
			this->radioButton45->Text = L"orange";
			this->radioButton45->UseVisualStyleBackColor = true;
			// 
			// radioButton46
			// 
			this->radioButton46->ForeColor = System::Drawing::Color::SkyBlue;
			this->radioButton46->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton46->Location = System::Drawing::Point(11, 133);
			this->radioButton46->Name = L"radioButton46";
			this->radioButton46->Size = System::Drawing::Size(88, 23);
			this->radioButton46->TabIndex = 0;
			this->radioButton46->TabStop = true;
			this->radioButton46->Text = L"light blue";
			this->radioButton46->UseVisualStyleBackColor = true;
			// 
			// radioButton47
			// 
			this->radioButton47->ForeColor = System::Drawing::Color::HotPink;
			this->radioButton47->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton47->Location = System::Drawing::Point(11, 104);
			this->radioButton47->Name = L"radioButton47";
			this->radioButton47->Size = System::Drawing::Size(88, 23);
			this->radioButton47->TabIndex = 0;
			this->radioButton47->TabStop = true;
			this->radioButton47->Text = L"pink";
			this->radioButton47->UseVisualStyleBackColor = true;
			// 
			// radioButton48
			// 
			this->radioButton48->ForeColor = System::Drawing::Color::OrangeRed;
			this->radioButton48->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton48->Location = System::Drawing::Point(11, 75);
			this->radioButton48->Name = L"radioButton48";
			this->radioButton48->Size = System::Drawing::Size(88, 23);
			this->radioButton48->TabIndex = 0;
			this->radioButton48->TabStop = true;
			this->radioButton48->Text = L"red";
			this->radioButton48->UseVisualStyleBackColor = true;
			// 
			// radioButton49
			// 
			this->radioButton49->ForeColor = System::Drawing::Color::LightGreen;
			this->radioButton49->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton49->Location = System::Drawing::Point(11, 46);
			this->radioButton49->Name = L"radioButton49";
			this->radioButton49->Size = System::Drawing::Size(88, 23);
			this->radioButton49->TabIndex = 0;
			this->radioButton49->TabStop = true;
			this->radioButton49->Text = L"light green";
			this->radioButton49->UseVisualStyleBackColor = true;
			// 
			// radioButton50
			// 
			this->radioButton50->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->radioButton50->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton50->Location = System::Drawing::Point(11, 19);
			this->radioButton50->Name = L"radioButton50";
			this->radioButton50->Size = System::Drawing::Size(88, 23);
			this->radioButton50->TabIndex = 0;
			this->radioButton50->TabStop = true;
			this->radioButton50->Text = L"dark blue";
			this->radioButton50->UseVisualStyleBackColor = true;
			this->radioButton50->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::radioButton1_CheckedChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
				L"00:00", L"00:30", L"1:00", L"1:30", L"2:00",
					L"2:30", L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00",
					L"9:30", L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30",
					L"16:00", L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00",
					L"22:30", L"23:00", L"23:30", L"", L" "
			});
			this->comboBox5->Location = System::Drawing::Point(141, 189);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(253, 21);
			this->comboBox5->TabIndex = 6;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(16, 285);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 24);
			this->label24->TabIndex = 5;
			this->label24->Text = L"Color";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(16, 186);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 24);
			this->label25->TabIndex = 5;
			this->label25->Text = L"Time";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(16, 124);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(45, 24);
			this->label26->TabIndex = 5;
			this->label26->Text = L"Title";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(140, 124);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(254, 29);
			this->textBox5->TabIndex = 4;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(234, 562);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 30);
			this->button9->TabIndex = 0;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm4::deleteButton6_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(319, 562);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(62, 30);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Save";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm4::saveButton6_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1138, 628);
			this->Controls->Add(this->eventPnl3);
			this->Controls->Add(this->eventPnl1);
			this->Controls->Add(this->eventPnl2);
			this->Controls->Add(this->eventGroupBox);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->eventPnl4);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->eventPnl6);
			this->Controls->Add(this->eventPnl5);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ukzn-Schedular";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm_Load);
			this->eventGroupBox->ResumeLayout(false);
			this->eventPnl4->ResumeLayout(false);
			this->eventPnl4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->eventPnl1->ResumeLayout(false);
			this->eventPnl1->PerformLayout();
			this->colorGroupbox->ResumeLayout(false);
			this->eventPnl2->ResumeLayout(false);
			this->eventPnl2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->eventPnl3->ResumeLayout(false);
			this->eventPnl3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->eventPnl5->ResumeLayout(false);
			this->eventPnl5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->eventPnl6->ResumeLayout(false);
			this->eventPnl6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void monthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		eventGroupBox->Show();

	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void eventGroupBox_Enter(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void eventb2_Click(System::Object^ sender, System::EventArgs^ e) {
		eventPnl2->Dock = DockStyle::Fill;
		eventPnl2->Show();

	}
	private: System::Void eventb1_Click(System::Object^ sender, System::EventArgs^ e) {
		eventPnl1->Dock = DockStyle::Fill;
		eventPnl1->Show();

	}
	private: System::Void saveButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB1->Text = timeCBox->Text + "                                              " + titleBox->Text;
		eventB1->ForeColor = Color::White;
		eventB1->BackColor = Color::CornflowerBlue;
		eventPnl1->Hide();

	}
	private: System::Void colorGroupbox_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void deleteButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB1->Text = "";
		eventB1->BackColor = Color::LightGray;
		eventPnl1->Hide();
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void saveButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB2->Text = timeCBox2->Text + "                                              " + titleBox2->Text;
		eventB2->ForeColor = Color::White;
		eventB2->BackColor = Color::LightGreen;
		eventPnl2->Hide();
	}
	private: System::Void deleteButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB2->Text = "";
		eventB2->BackColor = Color::LightGray;
		eventPnl2->Hide();

	}
	private: System::Void saveButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB3->Text = timeCBox->Text + "                                              " + titleBox->Text;
		eventB3->ForeColor = Color::White;
		eventB3->BackColor = Color::OrangeRed;
		eventPnl3->Hide();
	}
	private: System::Void eventb3_Click(System::Object^ sender, System::EventArgs^ e) {
		eventPnl3->Dock = DockStyle::Fill;
		eventPnl3->Show();
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void eventb4_Click(System::Object^ sender, System::EventArgs^ e) {
		eventPnl4->Dock = DockStyle::Fill;
		eventPnl4->Show();

	}
	private: System::Void saveButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB4->Text = timeCBox->Text + "                                              " + titleBox->Text;
		eventB4->ForeColor = Color::White;
		eventB4->BackColor = Color::HotPink;
		eventPnl4->Hide();
	}
	private: System::Void deleteButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB2->Text = "";
		eventB2->BackColor = Color::LightGray;
		eventPnl2->Hide();
	}
	private: System::Void eventb5_Click(System::Object^ sender, System::EventArgs^ e) {
		eventPnl5->Dock = DockStyle::Fill;
		eventPnl5->Show();
	}
	private: System::Void saveButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB5->Text = timeCBox->Text + "                                              " + titleBox->Text;
		eventB5->ForeColor = Color::White;
		eventB5->BackColor = Color::SkyBlue;
		eventPnl5->Hide();
	}
	private: System::Void deleteButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB5->Text = "";
		eventB5->BackColor = Color::LightGray;
		eventPnl5->Hide();

	}
	private: System::Void eventb6_Click(System::Object^ sender, System::EventArgs^ e) {
		eventPnl6->Dock = DockStyle::Fill;
		eventPnl6->Show();
	}
	private: System::Void saveButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB6->Text = timeCBox->Text + "                                              " + titleBox->Text;
		eventB6->ForeColor = Color::White;
		eventB6->BackColor = Color::Yellow;
		eventPnl6->Hide();

	}
	private: System::Void deleteButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		eventB6->Text = "";
		eventB6->BackColor = Color::LightGray;
		eventPnl6->Hide();
	}
	
	};
}
