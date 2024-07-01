#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for admindashboard
	/// </summary>
	public ref class admindashboard : public System::Windows::Forms::Form
	{
	public:
		admindashboard(void)
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
		~admindashboard()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^ panel1;
    protected:
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::TextBox^ textBox1;
























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
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Location = System::Drawing::Point(25, 29);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1016, 603);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &admindashboard::panel1_Paint);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel2->Controls->Add(this->textBox1);
            this->panel2->Location = System::Drawing::Point(11, 35);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(991, 52);
            this->panel2->TabIndex = 0;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox7->Location = System::Drawing::Point(54, 303);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(257, 15);
            this->textBox7->TabIndex = 7;
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(279, 3);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(447, 41);
            this->textBox1->TabIndex = 0;
            this->textBox1->Text = L"Make A Reservation";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &admindashboard::textBox1_TextChanged_1);
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox2->Location = System::Drawing::Point(54, 122);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(192, 25);
            this->textBox2->TabIndex = 1;
            this->textBox2->Text = L"Name:";
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox3->Location = System::Drawing::Point(54, 153);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(257, 15);
            this->textBox3->TabIndex = 2;
            // 
            // panel3
            // 
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Location = System::Drawing::Point(54, 174);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(450, 2);
            this->panel3->TabIndex = 3;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox4->Location = System::Drawing::Point(54, 196);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(192, 25);
            this->textBox4->TabIndex = 4;
            this->textBox4->Text = L"Phone Number:";
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox5->Location = System::Drawing::Point(54, 227);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(257, 15);
            this->textBox5->TabIndex = 5;
            // 
            // panel4
            // 
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Location = System::Drawing::Point(54, 248);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(450, 2);
            this->panel4->TabIndex = 4;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox6->Location = System::Drawing::Point(54, 272);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(192, 25);
            this->textBox6->TabIndex = 6;
            this->textBox6->Text = L"Email:";
            // 
            // panel5
            // 
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Location = System::Drawing::Point(54, 324);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(450, 2);
            this->panel5->TabIndex = 5;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox8->Location = System::Drawing::Point(574, 122);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(192, 25);
            this->textBox8->TabIndex = 8;
            this->textBox8->Text = L"Payment Method:";
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox9->Location = System::Drawing::Point(574, 186);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(192, 25);
            this->textBox9->TabIndex = 9;
            this->textBox9->Text = L"Room type:";
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox10->Location = System::Drawing::Point(185, 372);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(192, 25);
            this->textBox10->TabIndex = 10;
            this->textBox10->Text = L"Check-in:";
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
            this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox11->Location = System::Drawing::Point(574, 372);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(192, 25);
            this->textBox11->TabIndex = 11;
            this->textBox11->Text = L"Check-out:";
            this->textBox11->TextChanged += gcnew System::EventHandler(this, &admindashboard::textBox11_TextChanged);
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->dateTimePicker1->Location = System::Drawing::Point(185, 403);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(304, 22);
            this->dateTimePicker1->TabIndex = 12;
            // 
            // dateTimePicker2
            // 
            this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->dateTimePicker2->Location = System::Drawing::Point(574, 403);
            this->dateTimePicker2->Name = L"dateTimePicker2";
            this->dateTimePicker2->Size = System::Drawing::Size(304, 22);
            this->dateTimePicker2->TabIndex = 13;
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Debit/Credit Card", L"Cash" });
            this->comboBox1->Location = System::Drawing::Point(574, 153);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(369, 24);
            this->comboBox1->TabIndex = 14;
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
            this->comboBox2->Location = System::Drawing::Point(574, 224);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(369, 24);
            this->comboBox2->TabIndex = 15;
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
            this->button1->Location = System::Drawing::Point(371, 479);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(316, 55);
            this->button1->TabIndex = 16;
            this->button1->Text = L"Book Reservation";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // admindashboard
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->ClientSize = System::Drawing::Size(1062, 653);
            this->Controls->Add(this->panel1);
            this->Name = L"admindashboard";
            this->Text = L"admindashboard";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
