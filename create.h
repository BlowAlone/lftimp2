#pragma once
#include <fstream>
#include "stdafx.h"
#include <stdio.h>
#include <string>  
#include <iostream>  

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
  using namespace std; 

  using namespace Runtime::InteropServices;

	/// <summary>
	/// Summary for create
	/// </summary>
	public ref class create : public System::Windows::Forms::Form
	{
	public:
		create(void)
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
		~create()
		{
			if (components)
			{
				delete components;
			}
		}

  protected: 
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::Button^  button1;
  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::Button^  button2;
  private: System::Windows::Forms::Button^  button3;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::Label^  label4;
  private: System::Windows::Forms::TextBox^  textBox2;
  private: System::Windows::Forms::ListBox^  listBox1;


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
      System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(create::typeid));
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->button3 = (gcnew System::Windows::Forms::Button());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->listBox1 = (gcnew System::Windows::Forms::ListBox());
      this->SuspendLayout();
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(12, 28);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(410, 13);
      this->label1->TabIndex = 1;
      this->label1->Text = L"Выберите примеры, которые будут представлены в тесте или добавьте новые.";
      // 
      // button1
      // 
      this->button1->Location = System::Drawing::Point(338, 285);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(75, 23);
      this->button1->TabIndex = 2;
      this->button1->Text = L"Закрыть";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &create::button1_Click);
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(15, 80);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(239, 20);
      this->textBox1->TabIndex = 3;
      // 
      // button2
      // 
      this->button2->Location = System::Drawing::Point(336, 79);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(77, 20);
      this->button2->TabIndex = 4;
      this->button2->Text = L"Ввести";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &create::button2_Click);
      // 
      // button3
      // 
      this->button3->Location = System::Drawing::Point(336, 118);
      this->button3->Name = L"button3";
      this->button3->Size = System::Drawing::Size(75, 23);
      this->button3->TabIndex = 5;
      this->button3->Text = L"Обновить";
      this->button3->UseVisualStyleBackColor = true;
      this->button3->Click += gcnew System::EventHandler(this, &create::button3_Click);
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(12, 53);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(93, 13);
      this->label2->TabIndex = 6;
      this->label2->Text = L"Введите пример:";
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(12, 118);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(107, 13);
      this->label3->TabIndex = 7;
      this->label3->Text = L"Примеры для теста";
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(260, 83);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(13, 13);
      this->label4->TabIndex = 8;
      this->label4->Text = L"=";
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(279, 79);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(51, 20);
      this->textBox2->TabIndex = 9;
      // 
      // listBox1
      // 
      this->listBox1->FormattingEnabled = true;
      this->listBox1->Location = System::Drawing::Point(15, 146);
      this->listBox1->Name = L"listBox1";
      this->listBox1->Size = System::Drawing::Size(239, 134);
      this->listBox1->TabIndex = 10;
      // 
      // create
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(439, 320);
      this->Controls->Add(this->listBox1);
      this->Controls->Add(this->textBox2);
      this->Controls->Add(this->label4);
      this->Controls->Add(this->label3);
      this->Controls->Add(this->label2);
      this->Controls->Add(this->button3);
      this->Controls->Add(this->button2);
      this->Controls->Add(this->textBox1);
      this->Controls->Add(this->button1);
      this->Controls->Add(this->label1);
      this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
      this->MaximizeBox = false;
      this->MinimizeBox = false;
      this->Name = L"create";
      this->Text = L"create";
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
  private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
             char*  newAns = (char*)Marshal::StringToHGlobalAnsi(textBox2->Text).ToPointer();
             char*  newTest = (char*)Marshal::StringToHGlobalAnsi(textBox1->Text).ToPointer();
             if (textBox1->Text != "") {
               if (textBox2->Text != "") {
               ofstream fout("test.txt", ios::app); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
               fout << newTest <<'\n';; // запись строки в файл
               fout.close(); // закрываем файл  
               ofstream fans("answers.txt", ios::app); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
               fans << newAns <<'\n';; // запись строки в файл
               fans.close(); // закрываем файл  
               } 
               else {
               MessageBox::Show("Введите ответ");
               }
             }
             else {
               MessageBox::Show("Введите пример");
             }

           }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
           this->Close();
         }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
           string newstr;
           ifstream fin("test.txt");
           int k = 0;
           while(!fin.eof()){
             getline(fin, newstr);
            // ListBox1->Items->Add(gcnew String(newstr.c_str()));
            // listBox1->Items->Add( String::Format( k, ") " , newstr) );
             k++;
           // if CheckedListBox1->Checked[j] = false {CheckListBox1->Items->RemoveAt(j)};
            }
            fin.close();
           // textBox1->Text = gcnew String("");  
         }
};
}
