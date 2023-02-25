#pragma once

namespace IndividualProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyTestForm
	/// </summary>
	public ref class MyTestForm : public System::Windows::Forms::Form
	{
	public:
		MyTestForm(void)
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
		~MyTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьс€¬√лавноећенюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходЌа–абочий—толToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ taskAmountBox;
	private: System::Windows::Forms::Button^ testStartButton;
	private: System::Windows::Forms::GroupBox^ testStartGroupBox;
	private: System::Windows::Forms::GroupBox^ testTaskGroupBox;
	private: System::Windows::Forms::Label^ taskLabel;
	private: System::Windows::Forms::Label^ taskNameLabel;
	private: System::Windows::Forms::Label^ correctLabel;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ taskAnswerBox;
	private: System::Windows::Forms::Label^ correctTaskAnswer;
	private: System::Windows::Forms::Label^ correctAnswerLabel;
	private: System::Windows::Forms::Button^ answerSubmitButton;
	private: System::Windows::Forms::Button^ nextTaskButton;
	private: System::Windows::Forms::GroupBox^ taskResultBox;
	private: System::Windows::Forms::Label^ wrongLabel;
	private: System::Windows::Forms::Label^ cheatLabel;



	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьс€¬√лавноећенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходЌа–абочий—толToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->taskAmountBox = (gcnew System::Windows::Forms::TextBox());
			this->testStartButton = (gcnew System::Windows::Forms::Button());
			this->testStartGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->testTaskGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->cheatLabel = (gcnew System::Windows::Forms::Label());
			this->answerSubmitButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->taskAnswerBox = (gcnew System::Windows::Forms::TextBox());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			this->taskNameLabel = (gcnew System::Windows::Forms::Label());
			this->nextTaskButton = (gcnew System::Windows::Forms::Button());
			this->correctAnswerLabel = (gcnew System::Windows::Forms::Label());
			this->correctTaskAnswer = (gcnew System::Windows::Forms::Label());
			this->correctLabel = (gcnew System::Windows::Forms::Label());
			this->taskResultBox = (gcnew System::Windows::Forms::GroupBox());
			this->wrongLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->testStartGroupBox->SuspendLayout();
			this->testTaskGroupBox->SuspendLayout();
			this->taskResultBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вернутьс€¬√лавноећенюToolStripMenuItem,
					this->выходЌа–абочий—толToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(805, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьс€¬√лавноећенюToolStripMenuItem
			// 
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Name = L"вернутьс€¬√лавноећенюToolStripMenuItem";
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Size = System::Drawing::Size(166, 20);
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Text = L"¬ернутьс€ в главное меню";
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyTestForm::вернутьс€¬√лавноећенюToolStripMenuItem_Click);
			// 
			// выходЌа–абочий—толToolStripMenuItem
			// 
			this->выходЌа–абочий—толToolStripMenuItem->Name = L"выходЌа–абочий—толToolStripMenuItem";
			this->выходЌа–абочий—толToolStripMenuItem->Size = System::Drawing::Size(149, 20);
			this->выходЌа–абочий—толToolStripMenuItem->Text = L"¬ыход на рабочий стол";
			this->выходЌа–абочий—толToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyTestForm::выходЌа–абочий—толToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"“ренажЄр";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(582, 42);
			this->label2->TabIndex = 3;
			this->label2->Text = L"¬ведите количество заданий, которое вы хотите решить\r\nи нажмите на кнопку \"Ќачать"
				L" тест\":";
			// 
			// taskAmountBox
			// 
			this->taskAmountBox->HideSelection = false;
			this->taskAmountBox->Location = System::Drawing::Point(10, 84);
			this->taskAmountBox->MaximumSize = System::Drawing::Size(70, 29);
			this->taskAmountBox->MaxLength = 2;
			this->taskAmountBox->MinimumSize = System::Drawing::Size(70, 29);
			this->taskAmountBox->Name = L"taskAmountBox";
			this->taskAmountBox->ShortcutsEnabled = false;
			this->taskAmountBox->Size = System::Drawing::Size(70, 29);
			this->taskAmountBox->TabIndex = 4;
			// 
			// testStartButton
			// 
			this->testStartButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->testStartButton->Location = System::Drawing::Point(10, 126);
			this->testStartButton->Name = L"testStartButton";
			this->testStartButton->Size = System::Drawing::Size(157, 46);
			this->testStartButton->TabIndex = 5;
			this->testStartButton->Text = L"Ќачать тест";
			this->testStartButton->UseVisualStyleBackColor = true;
			this->testStartButton->Click += gcnew System::EventHandler(this, &MyTestForm::testStartButton_Click);
			// 
			// testStartGroupBox
			// 
			this->testStartGroupBox->Controls->Add(this->label2);
			this->testStartGroupBox->Controls->Add(this->testStartButton);
			this->testStartGroupBox->Controls->Add(this->taskAmountBox);
			this->testStartGroupBox->Location = System::Drawing::Point(22, 352);
			this->testStartGroupBox->Name = L"testStartGroupBox";
			this->testStartGroupBox->Size = System::Drawing::Size(603, 178);
			this->testStartGroupBox->TabIndex = 6;
			this->testStartGroupBox->TabStop = false;
			// 
			// testTaskGroupBox
			// 
			this->testTaskGroupBox->Controls->Add(this->cheatLabel);
			this->testTaskGroupBox->Controls->Add(this->answerSubmitButton);
			this->testTaskGroupBox->Controls->Add(this->label3);
			this->testTaskGroupBox->Controls->Add(this->taskAnswerBox);
			this->testTaskGroupBox->Controls->Add(this->taskLabel);
			this->testTaskGroupBox->Controls->Add(this->taskNameLabel);
			this->testTaskGroupBox->Location = System::Drawing::Point(22, 57);
			this->testTaskGroupBox->Name = L"testTaskGroupBox";
			this->testTaskGroupBox->Size = System::Drawing::Size(771, 310);
			this->testTaskGroupBox->TabIndex = 7;
			this->testTaskGroupBox->TabStop = false;
			this->testTaskGroupBox->Visible = false;
			// 
			// cheatLabel
			// 
			this->cheatLabel->AutoSize = true;
			this->cheatLabel->Location = System::Drawing::Point(362, 226);
			this->cheatLabel->Name = L"cheatLabel";
			this->cheatLabel->Size = System::Drawing::Size(21, 21);
			this->cheatLabel->TabIndex = 9;
			this->cheatLabel->Text = L" ";
			// 
			// answerSubmitButton
			// 
			this->answerSubmitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->answerSubmitButton->Location = System::Drawing::Point(198, 267);
			this->answerSubmitButton->Name = L"answerSubmitButton";
			this->answerSubmitButton->Size = System::Drawing::Size(98, 29);
			this->answerSubmitButton->TabIndex = 8;
			this->answerSubmitButton->Text = L"¬вести";
			this->answerSubmitButton->UseVisualStyleBackColor = true;
			this->answerSubmitButton->Click += gcnew System::EventHandler(this, &MyTestForm::answerSubmitButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ќтвет:";
			// 
			// taskAnswerBox
			// 
			this->taskAnswerBox->Location = System::Drawing::Point(92, 267);
			this->taskAnswerBox->MaxLength = 5;
			this->taskAnswerBox->Name = L"taskAnswerBox";
			this->taskAnswerBox->Size = System::Drawing::Size(100, 29);
			this->taskAnswerBox->TabIndex = 2;
			// 
			// taskLabel
			// 
			this->taskLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taskLabel->Location = System::Drawing::Point(10, 60);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(700, 187);
			this->taskLabel->TabIndex = 1;
			// 
			// taskNameLabel
			// 
			this->taskNameLabel->AutoSize = true;
			this->taskNameLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taskNameLabel->Location = System::Drawing::Point(6, 25);
			this->taskNameLabel->Name = L"taskNameLabel";
			this->taskNameLabel->Size = System::Drawing::Size(87, 22);
			this->taskNameLabel->TabIndex = 0;
			this->taskNameLabel->Text = L"«адание";
			// 
			// nextTaskButton
			// 
			this->nextTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nextTaskButton->Location = System::Drawing::Point(652, 11);
			this->nextTaskButton->Name = L"nextTaskButton";
			this->nextTaskButton->Size = System::Drawing::Size(119, 57);
			this->nextTaskButton->TabIndex = 9;
			this->nextTaskButton->Text = L"—ледующее задание";
			this->nextTaskButton->UseVisualStyleBackColor = true;
			this->nextTaskButton->Click += gcnew System::EventHandler(this, &MyTestForm::nextTaskButton_Click);
			// 
			// correctAnswerLabel
			// 
			this->correctAnswerLabel->AutoSize = true;
			this->correctAnswerLabel->Location = System::Drawing::Point(213, 25);
			this->correctAnswerLabel->Name = L"correctAnswerLabel";
			this->correctAnswerLabel->Size = System::Drawing::Size(21, 21);
			this->correctAnswerLabel->TabIndex = 7;
			this->correctAnswerLabel->Text = L" ";
			this->correctAnswerLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// correctTaskAnswer
			// 
			this->correctTaskAnswer->AutoSize = true;
			this->correctTaskAnswer->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->correctTaskAnswer->Location = System::Drawing::Point(10, 25);
			this->correctTaskAnswer->Name = L"correctTaskAnswer";
			this->correctTaskAnswer->Size = System::Drawing::Size(197, 22);
			this->correctTaskAnswer->TabIndex = 6;
			this->correctTaskAnswer->Text = L"ѕравильный ответ:";
			// 
			// correctLabel
			// 
			this->correctLabel->AutoSize = true;
			this->correctLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->correctLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->correctLabel->Location = System::Drawing::Point(338, 22);
			this->correctLabel->Name = L"correctLabel";
			this->correctLabel->Size = System::Drawing::Size(110, 31);
			this->correctLabel->TabIndex = 4;
			this->correctLabel->Text = L"¬ерно!";
			this->correctLabel->Visible = false;
			// 
			// taskResultBox
			// 
			this->taskResultBox->Controls->Add(this->wrongLabel);
			this->taskResultBox->Controls->Add(this->nextTaskButton);
			this->taskResultBox->Controls->Add(this->correctTaskAnswer);
			this->taskResultBox->Controls->Add(this->correctAnswerLabel);
			this->taskResultBox->Controls->Add(this->correctLabel);
			this->taskResultBox->Location = System::Drawing::Point(22, 362);
			this->taskResultBox->Name = L"taskResultBox";
			this->taskResultBox->Size = System::Drawing::Size(771, 68);
			this->taskResultBox->TabIndex = 10;
			this->taskResultBox->TabStop = false;
			this->taskResultBox->Visible = false;
			// 
			// wrongLabel
			// 
			this->wrongLabel->AutoSize = true;
			this->wrongLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wrongLabel->ForeColor = System::Drawing::Color::Red;
			this->wrongLabel->Location = System::Drawing::Point(338, 22);
			this->wrongLabel->Name = L"wrongLabel";
			this->wrongLabel->Size = System::Drawing::Size(142, 31);
			this->wrongLabel->TabIndex = 10;
			this->wrongLabel->Text = L"Ќеверно!";
			this->wrongLabel->Visible = false;
			// 
			// MyTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 537);
			this->Controls->Add(this->taskResultBox);
			this->Controls->Add(this->testTaskGroupBox);
			this->Controls->Add(this->testStartGroupBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(821, 576);
			this->MinimumSize = System::Drawing::Size(821, 576);
			this->Name = L"MyTestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"√енератор задани€ є7 ≈√Ё по информатике";
			this->Load += gcnew System::EventHandler(this, &MyTestForm::MyTestForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->testStartGroupBox->ResumeLayout(false);
			this->testStartGroupBox->PerformLayout();
			this->testTaskGroupBox->ResumeLayout(false);
			this->testTaskGroupBox->PerformLayout();
			this->taskResultBox->ResumeLayout(false);
			this->taskResultBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyTestForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void вернутьс€¬√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void выходЌа–абочий—толToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void testStartButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void TaskTestMode(int taskAmountBoxValue);

	private: System::Void TaskGeneration(int* p_cc);

	private: System::Void answerSubmitButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void nextTaskButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
