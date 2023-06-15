#pragma once
#include<algorithm>
#include "iostream"
#include "conio.h"
#include "stdlib.h"
#include "Form1.h"
#include "math.h"
namespace My10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(323, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(485, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Natijani olish";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(179, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"N->";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(711, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"M->";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(231, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(758, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(182, 132);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(676, 225);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 393);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Random orqali son kiritish uchun bosing";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(693, 390);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Natija:";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(770, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 11;
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1215, 494);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Korelyatsion koeffitsiyentini hisoblash";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int n,m;
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 n = Convert::ToInt32(textBox1->Text);
         dataGridView1->RowCount = n;
	}
    private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 m = Convert::ToInt32(textBox2->Text);
         dataGridView1->ColumnCount = m;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 double a[100][100];
         for(int i = 0; i<n; i++){
         for(int j = 0; j<m; j++){
           a[i][j] = rand()%100; 
           dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(a[i][j]);
         }
       }
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 n = Convert::ToInt32(textBox1->Text);
double a[100][100];
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        a[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
    }
}

double k = 0, l = 0, dxs = 0, dys = 0;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        k += a[0][j];
        l += a[1][j];
    }
}
double kx =1.0*k/(2*m);
double ly =1.0*l/(2*m);
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        dxs += (a[0][j] - kx) * (a[0][j] - kx);
        dys += (a[1][j] - ly) * (a[1][j] - ly);
    }
}

double dx =1.0*dxs/(2*m);
double dy =1.0*dys/(2*m);
double rs = 0;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        rs += (a[0][j] - kx) * (a[1][j] - ly);
    }
}
double result = rs /(2*m *Math::Sqrt(dx * dy));
		 label6->Text=result.ToString();
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


