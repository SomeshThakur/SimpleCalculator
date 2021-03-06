#pragma once

namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SimpleCalculator
	/// </summary>
	public ref class SimpleCalculator : public System::Windows::Forms::Form
	{
	public:
		SimpleCalculator(void)
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
		~SimpleCalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SimpleCalculator::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(145, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 24);
			this->textBox1->MaxLength = 8;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SimpleCalculator::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 24);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SimpleCalculator::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SimpleCalculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SimpleCalculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(222, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SimpleCalculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(330, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SimpleCalculator::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(323, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(292, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(145, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 9;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(423, 28);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(31, 13);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Copy";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SimpleCalculator::linkLabel1_LinkClicked);
			// 
			// SimpleCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(455, 126);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(471, 165);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(471, 165);
			this->Name = L"SimpleCalculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SimpleCalculator::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != ""&&textBox2->Text != ""){
					 double res = operation('+', System::Convert::ToDouble(textBox1->Text), System::Convert::ToDouble(textBox2->Text));
					 textBox3->Text = System::Convert::ToString(res);
					 label3->Text = "+";
				 }
				 else {
					 MessageBox::Show("Please enter any number in given textboxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != ""&&textBox2->Text != ""){
					 double res = operation('-', System::Convert::ToDouble(textBox1->Text), System::Convert::ToDouble(textBox2->Text));
					 textBox3->Text = System::Convert::ToString(res);
					 label3->Text = "-";
				 }
				 else {
					 MessageBox::Show("Please enter any number in given textboxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != ""&&textBox2->Text != ""){
					 double res = operation('*', System::Convert::ToDouble(textBox1->Text), System::Convert::ToDouble(textBox2->Text));
					 textBox3->Text = System::Convert::ToString(res);
					 label3->Text = "*";
				 }
				 else {
					 MessageBox::Show("Please enter any number in given textboxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != ""&&textBox2->Text != ""){
					 double res = operation('/', System::Convert::ToDouble(textBox1->Text), System::Convert::ToDouble(textBox2->Text));
					 textBox3->Text = System::Convert::ToString(res);
					 label3->Text = "/";
				 }
				 else {
					 MessageBox::Show("Please enter any number in given textboxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
	}
	private: void Form1_FormClosing(Object^ sender, FormClosingEventArgs^ e)
	{
				 // If the no button was pressed ...
				 if ((MessageBox::Show(
					 "Are you sure that you would like to close the calculator?",
					 "", MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No))
				 {
					 // cancel the closure of the form.
					 e->Cancel = true;
				 }
	}
			 double operation(char choice, double a, double b){
				 switch (choice){
				 case '+':
					 return (a + b);
					 break;
				 case '-':
					 return (a - b);
					 break;
				 case '*':
					 return (a * b);
					 break;
				 case '/':
					 return (a / b);
					 break;
				 }
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 Clipboard::SetText(textBox3->Text);
				 textBox3->ResetText();
	
	}
};
}