#include <iostream>
#include "Form2.h"
#include "IBPForm.h"
#include "SqrtForm.h"
#pragma once
int numTest = 0;
int CheckNum1 = 0;
bool checkBoxPartialFractions = false;
bool checkBoxIBP = false;
bool checkBoxTrigSub = false;
int method;
namespace test2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected:
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;





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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(312, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"WARNING!";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 94);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 145);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 200);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Location = System::Drawing::Point(527, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 56);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Tell me my method";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(452, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 0);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(375, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(0, 0);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(243, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 42);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Before trying any other methods, check if u-substitution is possible!";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"If U-Sub fails, then...";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Is the integral a rational expression\?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(389, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Is the integral a product of polynomials, trig functions, exponentials, or logari"
				L"thms\?";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 184);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Does the integral have a square root in it\?";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(650, 362);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->ForeColor = System::Drawing::Color::Maroon;
			this->Name = L"Form1";
			this->Text = L"Integration Checklist";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBoxTrigSub == false)
		{
			checkBoxTrigSub = true;
			method = 3;
		}
		else if (checkBoxTrigSub == true)
		{
			method = 0;
			checkBoxTrigSub = false;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (method == 1)
		{

			Form2^ f2 = gcnew Form2;
			f2->r = ClientRectangle;
			this->Hide();
			f2->ShowDialog();
			//this->textBox1->Text = f2->GetTextBoxString();
			this->Show();
		}
		else if (method == 2)
		{
			IBPForm^ f3 = gcnew IBPForm;
			f3->r = ClientRectangle;
			this->Hide();
			f3->ShowDialog();
			//this->textBox1->Text = f2->GetTextBoxString();
			this->Show();
		}
		else if (method == 3)
		{
			SqrtForm^ f4 = gcnew SqrtForm;
			f4->r = ClientRectangle;
			this->Hide();
			f4->ShowDialog();
			//this->textBox1->Text = f2->GetTextBoxString();
			this->Show();
		}



	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (CheckNum1 == 0)
		{
			numTest++;
			CheckNum1++;
		}
		else if (CheckNum1 == 1)
		{
			numTest--;
			CheckNum1--;
		}
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBoxIBP == false)
		{
			checkBoxIBP = true;
			method = 2;
		}
		else if (checkBoxIBP == true)
		{
			method = 0;
			checkBoxIBP = false;
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBoxPartialFractions == false)
		{
			checkBoxPartialFractions = true;
			method = 1;
		}
		else if (checkBoxPartialFractions == true)
		{
			method = 0;
			checkBoxPartialFractions = false;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


	}
	};
}
