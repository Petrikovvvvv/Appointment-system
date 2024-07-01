#pragma once
#include"rooms.h"
#include"edit.h"
#include"view.h"
#include"booking.h"
#include"Home1.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for rooms
	/// </summary>
	public ref class rooms : public System::Windows::Forms::Form
	{
	public:
		rooms(void)
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
		~rooms()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(rooms::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel5->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Location = System::Drawing::Point(47, 165);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(217, 341);
            this->panel1->TabIndex = 1;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Maroon;
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button1->Location = System::Drawing::Point(91, 274);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(119, 38);
            this->button1->TabIndex = 3;
            this->button1->Text = L"Book now";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Poppins", 15));
            this->textBox3->Location = System::Drawing::Point(13, 274);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(72, 38);
            this->textBox3->TabIndex = 2;
            this->textBox3->Text = L"$ 100";
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &rooms::textBox3_TextChanged);
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::Maroon;
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox2->Location = System::Drawing::Point(38, 207);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(179, 30);
            this->textBox2->TabIndex = 1;
            this->textBox2->Text = L"Standard Room";
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::White;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(217, 222);
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->textBox5);
            this->panel2->Controls->Add(this->textBox4);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Location = System::Drawing::Point(296, 165);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(217, 341);
            this->panel2->TabIndex = 2;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Maroon;
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button2->Location = System::Drawing::Point(91, 274);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(119, 38);
            this->button2->TabIndex = 4;
            this->button2->Text = L"Book now";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Poppins", 15));
            this->textBox5->Location = System::Drawing::Point(13, 274);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(72, 38);
            this->textBox5->TabIndex = 4;
            this->textBox5->Text = L"$ 150";
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::Maroon;
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox4->Location = System::Drawing::Point(76, 207);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(141, 30);
            this->textBox4->TabIndex = 4;
            this->textBox4->Text = L"Deluxe Room";
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::White;
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox2->Location = System::Drawing::Point(0, 0);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(217, 222);
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel3->Controls->Add(this->button3);
            this->panel3->Controls->Add(this->textBox7);
            this->panel3->Controls->Add(this->textBox6);
            this->panel3->Controls->Add(this->pictureBox3);
            this->panel3->Location = System::Drawing::Point(542, 165);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(217, 341);
            this->panel3->TabIndex = 3;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Maroon;
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button3->Location = System::Drawing::Point(91, 274);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(119, 38);
            this->button3->TabIndex = 5;
            this->button3->Text = L"Book now";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Poppins", 15));
            this->textBox7->Location = System::Drawing::Point(12, 274);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(72, 38);
            this->textBox7->TabIndex = 5;
            this->textBox7->Text = L"$ 300";
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::Maroon;
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox6->Location = System::Drawing::Point(67, 207);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(150, 30);
            this->textBox6->TabIndex = 5;
            this->textBox6->Text = L"Family Suite";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::White;
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox3->Location = System::Drawing::Point(0, 0);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(217, 222);
            this->pictureBox3->TabIndex = 2;
            this->pictureBox3->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel4->Controls->Add(this->textBox9);
            this->panel4->Controls->Add(this->button4);
            this->panel4->Controls->Add(this->textBox8);
            this->panel4->Controls->Add(this->pictureBox4);
            this->panel4->Location = System::Drawing::Point(783, 165);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(217, 341);
            this->panel4->TabIndex = 3;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Poppins", 15));
            this->textBox9->Location = System::Drawing::Point(13, 274);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(72, 38);
            this->textBox9->TabIndex = 6;
            this->textBox9->Text = L"$ 500";
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Maroon;
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button4->Location = System::Drawing::Point(91, 274);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(119, 38);
            this->button4->TabIndex = 6;
            this->button4->Text = L"Book now";
            this->button4->UseVisualStyleBackColor = false;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::Maroon;
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox8->Location = System::Drawing::Point(51, 207);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(166, 30);
            this->textBox8->TabIndex = 6;
            this->textBox8->Text = L"Executive Suite";
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::White;
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Location = System::Drawing::Point(0, 0);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(217, 222);
            this->pictureBox4->TabIndex = 3;
            this->pictureBox4->TabStop = false;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel5->Controls->Add(this->button5);
            this->panel5->Controls->Add(this->button6);
            this->panel5->Controls->Add(this->button7);
            this->panel5->Controls->Add(this->button8);
            this->panel5->Location = System::Drawing::Point(0, 25);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(1070, 69);
            this->panel5->TabIndex = 4;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button5->Location = System::Drawing::Point(856, 10);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(121, 47);
            this->button5->TabIndex = 4;
            this->button5->Text = L"View";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &rooms::button5_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button6->Location = System::Drawing::Point(614, 10);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(121, 47);
            this->button6->TabIndex = 3;
            this->button6->Text = L"Edit";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &rooms::button6_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::Maroon;
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button7->Location = System::Drawing::Point(333, 10);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(121, 47);
            this->button7->TabIndex = 2;
            this->button7->Text = L"Rooms";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &rooms::button7_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button8->Location = System::Drawing::Point(81, 10);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(121, 47);
            this->button8->TabIndex = 1;
            this->button8->Text = L"Home";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &rooms::button8_Click);
            // 
            // rooms
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1062, 653);
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Name = L"rooms";
            this->Text = L"rooms";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel5->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Home^ obj1 = gcnew Home();
    obj1->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    rooms^ obj1 = gcnew rooms();
    obj1->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Edit^ obj1 = gcnew Edit();
    obj1->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    View^ obj1 = gcnew View();
    obj1->ShowDialog();
}
};
}

