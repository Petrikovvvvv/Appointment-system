#pragma once
#include"rooms.h"
#include"edit.h"
#include"view.h"
#include"booking.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;

    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Button^ button1;


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Location = System::Drawing::Point(-6, 126);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1070, 69);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button4->Location = System::Drawing::Point(856, 10);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(121, 47);
            this->button4->TabIndex = 4;
            this->button4->Text = L"View";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button3->Location = System::Drawing::Point(614, 10);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(121, 47);
            this->button3->TabIndex = 3;
            this->button3->Text = L"Edit";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button2->Location = System::Drawing::Point(344, 10);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(121, 47);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Rooms";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Poppins", 12));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->button5->Location = System::Drawing::Point(780, 42);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(255, 47);
            this->button5->TabIndex = 5;
            this->button5->Text = L"Book a Reservation";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins", 20));
            this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox1->Location = System::Drawing::Point(43, 42);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(352, 50);
            this->textBox1->TabIndex = 6;
            this->textBox1->Text = L"Hotel Reservation";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(86, 276);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(209, 197);
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Location = System::Drawing::Point(417, 276);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(209, 197);
            this->pictureBox2->TabIndex = 8;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox3->Location = System::Drawing::Point(749, 276);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(209, 197);
            this->pictureBox3->TabIndex = 9;
            this->pictureBox3->TabStop = false;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox2->Location = System::Drawing::Point(75, 500);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(220, 35);
            this->textBox2->TabIndex = 10;
            this->textBox2->Text = L"Luxurious Rooms";
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox3->Location = System::Drawing::Point(417, 500);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(220, 35);
            this->textBox3->TabIndex = 11;
            this->textBox3->Text = L"Room Service";
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox4->Location = System::Drawing::Point(749, 500);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(267, 35);
            this->textBox4->TabIndex = 12;
            this->textBox4->Text = L"Family Accomodation";
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox5->Location = System::Drawing::Point(75, 536);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(219, 20);
            this->textBox5->TabIndex = 13;
            this->textBox5->Text = L"Reserve your room today";
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox6->Location = System::Drawing::Point(417, 536);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(202, 20);
            this->textBox6->TabIndex = 14;
            this->textBox6->Text = L"Elegant Room Service";
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox7->Location = System::Drawing::Point(749, 536);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(202, 20);
            this->textBox7->TabIndex = 15;
            this->textBox7->Text = L"Best Rooms for the Family";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Maroon;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
            this->button1->Location = System::Drawing::Point(110, 10);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(121, 47);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Home";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->ClientSize = System::Drawing::Size(1062, 653);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->panel1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        rooms^ obj1 = gcnew rooms();
        obj1->ShowDialog();
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        Edit^ obj1 = gcnew Edit();
        obj1->ShowDialog();
    
    }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
       this->Hide();
       View^ obj1 = gcnew View();
       obj1->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
      this->Hide();
      booking^ obj1 = gcnew booking();
      obj1->ShowDialog();

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
