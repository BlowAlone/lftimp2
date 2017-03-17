#pragma once

#include <cstring>
#include "create.h"
#include "start.h"
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
  private: System::Windows::Forms::Button^  button1;
  private: System::Windows::Forms::Button^  button2;
  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::Label^  label3;
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
      System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->SuspendLayout();
      // 
      // button1
      // 
      this->button1->Location = System::Drawing::Point(97, 100);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(97, 23);
      this->button1->TabIndex = 0;
      this->button1->Text = L"Пройти тест";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
      // 
      // button2
      // 
      this->button2->Location = System::Drawing::Point(184, 184);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(75, 23);
      this->button2->TabIndex = 1;
      this->button2->Text = L"Ввести";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(62, 184);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(103, 20);
      this->textBox1->TabIndex = 2;
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(12, 155);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(295, 13);
      this->label1->TabIndex = 3;
      this->label1->Text = L"Для того, чтобы изменить задания теста, введите ключ.";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(34, 43);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(226, 13);
      this->label2->TabIndex = 4;
      this->label2->Text = L"Хотите проверить скорость своего счета\? ";
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(59, 72);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(180, 13);
      this->label3->TabIndex = 5;
      this->label3->Text = L"Пройдите наш тест прямо сейчас!";
      // 
      // Form1
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(312, 262);
      this->Controls->Add(this->label3);
      this->Controls->Add(this->label2);
      this->Controls->Add(this->label1);
      this->Controls->Add(this->textBox1);
      this->Controls->Add(this->button2);
      this->Controls->Add(this->button1);
      this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
      this->MaximizeBox = false;
      this->MinimizeBox = false;
      this->Name = L"Form1";
      this->Text = L"Тест на счет";
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
  private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
             //this->button1->Visible = false;
             start^st = gcnew start();
             st->ShowDialog();
           }
  private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
            char key[] = "teacher";
            char*  userword = (char*)Marshal::StringToHGlobalAnsi(textBox1->Text).ToPointer();
            int a = strcmp(userword, key);
            if (a == 0) 
            {
              textBox1->Text = gcnew String("");  
              MessageBox::Show("Приступайте к изменениям");
              create^cr = gcnew create();
              cr->ShowDialog();
            }
            else {
              MessageBox::Show("Введен неверный ключ!");
            }
           }
  };
}

