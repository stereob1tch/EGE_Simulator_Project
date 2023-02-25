#pragma once

namespace IndividualProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ тренажёрЕГЭToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ запускаетТренажёрToolStripMenuItem;
	private: System::Windows::Forms::Button^ button_StartTest;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ buttonProgramInfo;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->тренажёрЕГЭToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->запускаетТренажёрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_StartTest = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonProgramInfo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Главное меню";
			// 
			// тренажёрЕГЭToolStripMenuItem
			// 
			this->тренажёрЕГЭToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->запускаетТренажёрToolStripMenuItem });
			this->тренажёрЕГЭToolStripMenuItem->Name = L"тренажёрЕГЭToolStripMenuItem";
			this->тренажёрЕГЭToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->тренажёрЕГЭToolStripMenuItem->Text = L"Тренажёр ЕГЭ";
			// 
			// запускаетТренажёрToolStripMenuItem
			// 
			this->запускаетТренажёрToolStripMenuItem->Name = L"запускаетТренажёрToolStripMenuItem";
			this->запускаетТренажёрToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->запускаетТренажёрToolStripMenuItem->Text = L"Запускает тренажёр ";
			// 
			// button_StartTest
			// 
			this->button_StartTest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_StartTest->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_StartTest->Location = System::Drawing::Point(234, 221);
			this->button_StartTest->Name = L"button_StartTest";
			this->button_StartTest->Size = System::Drawing::Size(362, 36);
			this->button_StartTest->TabIndex = 2;
			this->button_StartTest->Text = L"Запустить тест";
			this->button_StartTest->UseVisualStyleBackColor = true;
			this->button_StartTest->Click += gcnew System::EventHandler(this, &MyForm::button_StartTest_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(234, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(362, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// buttonProgramInfo
			// 
			this->buttonProgramInfo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonProgramInfo->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonProgramInfo->Location = System::Drawing::Point(234, 263);
			this->buttonProgramInfo->Name = L"buttonProgramInfo";
			this->buttonProgramInfo->Size = System::Drawing::Size(362, 36);
			this->buttonProgramInfo->TabIndex = 5;
			this->buttonProgramInfo->Text = L"О программе";
			this->buttonProgramInfo->UseVisualStyleBackColor = true;
			this->buttonProgramInfo->Click += gcnew System::EventHandler(this, &MyForm::buttonProgramInfo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 469);
			this->Controls->Add(this->buttonProgramInfo);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button_StartTest);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(819, 508);
			this->MinimumSize = System::Drawing::Size(819, 508);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Генератор задания №7 ЕГЭ по информатике";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void button_StartTest_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buttonProgramInfo_Click(System::Object^ sender, System::EventArgs^ e);
};
}
