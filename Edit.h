#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Edit
	/// </summary>
	public ref class Edit : public System::Windows::Forms::Form
	{
	public:
		Edit(void)
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
		~Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel6;


    private: System::Windows::Forms::Button^ button4;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;

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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel6->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button1->CausesValidation = false;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(461, 534);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(139, 55);
            this->button1->TabIndex = 16;
            this->button1->Text = L"Edit";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // comboBox2
            // 
            this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Standard Room", L"Deluxe Room", L"Executive Suite",
                    L"Family Suite", L"Penthouse Suite"
            });
            this->comboBox2->Location = System::Drawing::Point(574, 295);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(369, 24);
            this->comboBox2->TabIndex = 15;
            this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Edit::comboBox2_SelectedIndexChanged);
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Debit/Credit Card", L"Cash" });
            this->comboBox1->Location = System::Drawing::Point(574, 212);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(369, 24);
            this->comboBox1->TabIndex = 14;
            // 
            // dateTimePicker2
            // 
            this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->dateTimePicker2->Location = System::Drawing::Point(574, 462);
            this->dateTimePicker2->Name = L"dateTimePicker2";
            this->dateTimePicker2->Size = System::Drawing::Size(304, 22);
            this->dateTimePicker2->TabIndex = 13;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->dateTimePicker1->Location = System::Drawing::Point(185, 462);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(304, 22);
            this->dateTimePicker1->TabIndex = 12;
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox11->Location = System::Drawing::Point(574, 415);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(192, 25);
            this->textBox11->TabIndex = 11;
            this->textBox11->Text = L"Check-out:";
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox10->Location = System::Drawing::Point(185, 415);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(192, 25);
            this->textBox10->TabIndex = 10;
            this->textBox10->Text = L"Check-in:";
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox9->Location = System::Drawing::Point(574, 264);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(192, 25);
            this->textBox9->TabIndex = 9;
            this->textBox9->Text = L"Room type:";
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox8->Location = System::Drawing::Point(574, 181);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(192, 25);
            this->textBox8->TabIndex = 8;
            this->textBox8->Text = L"Payment Method:";
            // 
            // panel5
            // 
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Location = System::Drawing::Point(54, 381);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(450, 2);
            this->panel5->TabIndex = 5;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox6->Location = System::Drawing::Point(54, 324);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(192, 25);
            this->textBox6->TabIndex = 6;
            this->textBox6->Text = L"Email:";
            // 
            // panel4
            // 
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Location = System::Drawing::Point(54, 316);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(450, 2);
            this->panel4->TabIndex = 4;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox5->Location = System::Drawing::Point(54, 360);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(257, 15);
            this->textBox5->TabIndex = 5;
            this->textBox5->TextChanged += gcnew System::EventHandler(this, &Edit::textBox5_TextChanged);
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox4->Location = System::Drawing::Point(54, 264);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(192, 25);
            this->textBox4->TabIndex = 4;
            this->textBox4->Text = L"Phone Number:";
            // 
            // panel3
            // 
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Location = System::Drawing::Point(54, 233);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(450, 2);
            this->panel3->TabIndex = 3;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox3->Location = System::Drawing::Point(54, 212);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(257, 15);
            this->textBox3->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox2->Location = System::Drawing::Point(54, 181);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(192, 25);
            this->textBox2->TabIndex = 1;
            this->textBox2->Text = L"Name:";
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &Edit::textBox2_TextChanged);
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox7->Location = System::Drawing::Point(54, 295);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(257, 15);
            this->textBox7->TabIndex = 7;
            // 
            // panel1
            // 
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->panel6);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->comboBox2);
            this->panel1->Controls->Add(this->comboBox1);
            this->panel1->Controls->Add(this->dateTimePicker2);
            this->panel1->Controls->Add(this->dateTimePicker1);
            this->panel1->Controls->Add(this->textBox11);
            this->panel1->Controls->Add(this->textBox10);
            this->panel1->Controls->Add(this->textBox9);
            this->panel1->Controls->Add(this->textBox8);
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox6);
            this->panel1->Controls->Add(this->panel4);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->textBox4);
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Location = System::Drawing::Point(23, 25);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1016, 603);
            this->panel1->TabIndex = 1;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Edit::panel1_Paint);
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel6->Controls->Add(this->button3);
            this->panel6->Controls->Add(this->button2);
            this->panel6->Controls->Add(this->button4);
            this->panel6->Controls->Add(this->button5);
            this->panel6->Location = System::Drawing::Point(-1, 29);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1016, 69);
            this->panel6->TabIndex = 17;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Maroon;
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button3->Location = System::Drawing::Point(597, 10);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(121, 47);
            this->button3->TabIndex = 3;
            this->button3->Text = L"Edit";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Edit::button3_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button2->Location = System::Drawing::Point(86, 10);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(121, 47);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Home";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Edit::button2_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button4->Location = System::Drawing::Point(843, 10);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(121, 47);
            this->button4->TabIndex = 4;
            this->button4->Text = L"View";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Edit::button4_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button5->Location = System::Drawing::Point(333, 10);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(121, 47);
            this->button5->TabIndex = 2;
            this->button5->Text = L"Rooms";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &Edit::button5_Click);
            // 
            // Edit
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->ClientSize = System::Drawing::Size(1062, 653);
            this->Controls->Add(this->panel1);
            this->Name = L"Edit";
            this->Text = L"Edit";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { 
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Edit^ obj1 = gcnew Edit();
    obj1->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Home^ obj1 = gcnew Home();
    obj1->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    rooms^ obj1 = gcnew rooms();
    obj1->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    View^ obj1 = gcnew View();
    obj1->ShowDialog();
}
};
}
