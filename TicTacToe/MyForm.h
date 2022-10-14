#pragma once

namespace TicTacToe {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(175, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(94, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(175, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(13, 175);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(94, 175);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(175, 175);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(263, 269);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

#define turnX 0
#define turnO 1

		bool turn = turnX;

		void status(String^ currentTurn) {

			if ((button1->Text == button2->Text && button1->Text == button3->Text && button1->Text != "") ||
				(button4->Text == button5->Text && button4->Text == button6->Text && button4->Text != "") ||
				(button7->Text == button8->Text && button7->Text == button9->Text && button7->Text != "") ||
				(button1->Text == button4->Text && button1->Text == button7->Text && button1->Text != "") ||
				(button2->Text == button5->Text && button2->Text == button8->Text && button2->Text != "") ||
				(button3->Text == button6->Text && button3->Text == button9->Text && button3->Text != "") ||
				(button1->Text == button5->Text && button1->Text == button9->Text && button1->Text != "") ||
				(button3->Text == button5->Text && button3->Text == button7->Text && button3->Text != ""))
			{
				MessageBox::Show(currentTurn + "Won!", "Game Over!");
				Application::Exit();
			}
			else if (
				button1->Text != "" &&
				button2->Text != "" &&
				button3->Text != "" &&
				button4->Text != "" &&
				button5->Text != "" &&
				button6->Text != "" &&
				button7->Text != "" &&
				button8->Text != "" &&
				button9->Text != "")

			{
				MessageBox::Show("Game Tied", "Game Tied!");
				Application::Exit();

			}


		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (safe_cast<Button^>(sender)->Text == "") {
			if (turn == turnX)
			{
				safe_cast<Button^>(sender)->Text = "X";
				turn = turnO;
			}
			else if (turn == turnO)
			{
				safe_cast<Button^>(sender)->Text = "O";
				turn = turnX;
			}
			status(safe_cast<Button^>(sender)->Text);
		}

	}
	};
}
