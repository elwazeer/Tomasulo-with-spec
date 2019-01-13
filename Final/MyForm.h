#pragma once
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <stdlib.h>
#include <string.h>

using namespace msclr::interop;

//using namespace std;

void exe(std::string, int, std::string, float&, float&, float&);

namespace Final {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Clock Cycles";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(20, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(20, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"IPC";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(203, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Misprediction";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"File Name";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Starting Address";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Data Entries";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(83, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"(separated by commas)";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
			String^ fn = textBox1->Text;
			std::string x = msclr::interop::marshal_as< std::string >(fn);

			String^ sadd = textBox2->Text;
			int sadd2 = System::Convert::ToInt16(sadd);

			String^ data = textBox3->Text;
			std::string y = msclr::interop::marshal_as< std::string >(data);

			float sys_clk_final, ipc_final, mis_final;

			exe(x, sadd2, y, sys_clk_final, ipc_final, mis_final);

			String^ out1 = System::Convert::ToString(sys_clk_final);
			label1->Text = out1;

			String^ out2 = System::Convert::ToString(ipc_final);
			label2->Text = out2;

			String^ out3 = System::Convert::ToString(mis_final);
			label3->Text = out3;

			fn = "";
			sadd = "";
			data = "";

			/*fn = System::Convert::ToString(sys_clk_final);
			label1->Text = fn;

			sadd = System::Convert::ToString(ipc_final);
			label2->Text = sadd;

			data = System::Convert::ToString(mis_final);
			label3->Text = data;*/
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	

}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
