#include <iostream>
#include <fstream>
#include <Windows.h>
#include <locale.h>
#include <time.h>
#include <string>
#include "MyTestForm.h"
#include "MyForm.h"
#include <msclr\marshal_cppstd.h>
#include "C:\Users\������\Desktop\�������������� ������\IndividualProject\Header.h"

using namespace System;
using namespace System::Windows::Forms;

int correct_counter = 0;
int i_taskCount = 0;
int taskAmountBoxValue = 0;

System::Void IndividualProject::MyTestForm::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("�� �������, ��� ������ �����? \n�������� ����� ������.", "��������������.", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		correct_counter = 0;
		i_taskCount = 0;
		taskAmountBoxValue = 0;

		MyForm^ form = gcnew MyForm;
		form->Show();
		this->Hide();
		return System::Void();
	}
	else
		return;
}

System::Void IndividualProject::MyTestForm::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("�� �������, ��� ������ �����? \n�������� ����� ������.", "��������������.", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
		return System::Void();
	}
	else
		return;
}

System::Void IndividualProject::MyTestForm::testStartButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (String::IsNullOrWhiteSpace(this->taskAmountBox->Text))
	{
		MessageBox::Show("������. ������� ��������!", "������!");
		return;
	}
	taskAmountBoxValue = Convert::ToInt32(taskAmountBox->Text);
	
	if (taskAmountBoxValue < 1 || taskAmountBoxValue > 20)
	{
		MessageBox::Show("������. �� ��� �� ������ ������������� ����, ������� �������� �� ����� ������ � �� ����� �������� �������!", "������!");
	}
	else
	{
		this->testStartGroupBox->Hide();
		this->testTaskGroupBox->Show();
		TaskTestMode(taskAmountBoxValue);
	}

	return System::Void();
}

System::Void IndividualProject::MyTestForm::TaskTestMode(int taskAmountBoxValue)
{
	int correct_counter = 0;
	int* p_cc = &correct_counter;
	int taskAmount, taskTypeCh;

	this->taskNameLabel->Text = "������� � " + (i_taskCount + 1);

	TaskGeneration(p_cc); 
}

System::Void IndividualProject::MyTestForm::TaskGeneration(int* p_cc)
{
	srand(time(NULL));


	// �������� ���������� ����������� ��������.
	int variety = rand() % (5 - 1 + 1) + 1;
	
	// ��������������� �������� ��� ������ ������.
	switch (variety)
	{
	case 1:
	{
		int I, i, M, m, N, n, colorCount, correct_answer, user_answer;
		m = rand() % (10 - 7 + 1) + 7;
		M = pow(2, m);
		n = rand() % (10 - 7 + 1) + 7;
		N = pow(2, n);
		i = rand() % (8 - 2 + 1) + 2;
		colorCount = pow(2, i);

		this->taskLabel->Text = "����� ����������� ����� ������ (� �����) ����� ���������������, ����� ����� ���� ��������� ����� ��������� ����������� �������� " + M + " x " + N + " �������� ��� �������, ��� � ����������� ����� �������������� " + colorCount + " ��������� ������?";
		this->taskLabel->Text += "\n� ������ �������� ������ ����� �����, ������� ��������� ������ �� �����.";

		I = M * N * i;
		correct_answer = (I / (8 * 1024));
		
		this->correctAnswerLabel->Text += correct_answer;
	}
	break;
	case 2:
	{
		int I, Ibyte, i, M, m, N, n, correct_answer, user_answer;
		I = rand() % (32 - 10 + 1) + 10;
		Ibyte = I * 1024 * 8;
		m = rand() % (8 - 7 + 1) + 7;
		M = pow(2, m);
		n = rand() % (8 - 7 + 1) + 7;
		N = pow(2, n);

		this->taskLabel->Text = "������� �������� " + M + " x " + N + " �������� �������� � ������ " + I + " �����(��� ����� ������).";
		this->taskLabel->Text += "\n������� ����������� ��������� ���������� ������ � ������� �����������.";

		i = (Ibyte / (M * N));

		correct_answer = pow(2, i);

		this->correctAnswerLabel->Text += correct_answer;
	}
	break;
	case 3:
	{
		int new_i, prev_i, diffI, prevI, correct_answer, user_answer;
		prev_i = rand() % (8 - 5 + 1) + 5;
		new_i = rand() % (5 - 2 + 1) + 2;
		diffI = rand() % (32 - 10 + 1) + 10;

		this->taskLabel->Text = "����� �������������� ���������� " + (pow(2, prev_i)) + " - �������� ������������ ����� � " + (pow(2, new_i)) + " - ������� ������ ��� ������ ���������� �� " + diffI + " �����.";
		this->taskLabel->Text += "\n����� ��� ������ ��������� ����� � �������?";

		prevI = (((diffI / new_i) * prev_i) / (prev_i / new_i));
		
		correct_answer = prevI;

		this->correctAnswerLabel->Text += correct_answer;
	}
	break;
	case 4:
	{
		int b, t, S, I, correct_answer, user_answer;
		int a1[] = { 1,2 };
		int a2[] = { 16,32,64 };
		double f;
		t = (rand() % (4 - 1 + 1) + 1) * 10;
		S = a1[rand() % 2];
		b = a2[rand() % 3];
		I = (rand() % (100 - 70 + 1) + 70) * 100;

		this->taskLabel->Text = "�� ������ ��� " + S + "-��������� ����������� � " + b + "-������ ����������� �� " + t + " ������ ��� ������� �������� ����.";
		this->taskLabel->Text += "\n��������, ��� ������ ����� �������� " + I + " �����.������ ������ �� �������������.";
		this->taskLabel->Text += "\n� ����� �������� ������������� (� ���) ������ ������? � ����� �������� ������ ����� �����.";

		f = I / (b * t * S);

		correct_answer = f;

		this->correctAnswerLabel->Text += correct_answer;
	}
	break;
	case 5:
	{
		int b, t, f, S, I, correct_answer, user_answer;
		double newI, b_multiply, f_multiply;

		std::string S_textview, b_textview, f_textview;
		I = rand() % (50 - 30 + 1) + 30;
		S = rand() % (2 - 1 + 1) + 1;
		b = 1;
		t = 1;
		f = 1;
		double a1[] = { 0.25, 0.5, 1.5, 2.0, 3.0, 4.0 };
		b_multiply = a1[rand() % 6];
		f_multiply = a1[rand() % 6];
		if (S == 1) S_textview = "����";
		if (S == 2) S_textview = "������";


		if (b_multiply == 0.25) b_textview = "� 4 ���� ������";
		if (b_multiply == 0.5) b_textview = "� 2 ���� ������";
		if (b_multiply == 1.5) b_textview = "� 1.5 ��� ������";
		if (b_multiply == 2.0) b_textview = "� 2 ���� ������";
		if (b_multiply == 3.0) b_textview = "� 3 ���� ������";
		if (b_multiply == 4.0) b_textview = "� 4 ���� ������";


		if (f_multiply == 0.25) f_textview = "� 4 ���� ������";
		if (f_multiply == 0.5) f_textview = "� 2 ���� ������";
		if (f_multiply == 1.5) f_textview = "� 1.5 ��� ������";
		if (f_multiply == 2.0) f_textview = "� 2 ���� ������";
		if (f_multiply == 3.0) f_textview = "� 3 ���� ������";
		if (f_multiply == 4.0) f_textview = "� 4 ���� ������";

		
		System::String^ S_sysstr = msclr::interop::marshal_as<System::String^>(S_textview);
	
		System::String^ f_sysstr = msclr::interop::marshal_as<System::String^>(f_textview);
		
		System::String^ b_sysstr = msclr::interop::marshal_as<System::String^>(b_textview);

		this->taskLabel->Text = "����������� �������� ��� ������� � ������� " + S_sysstr +", ��������� � ������� � ���� ����� ��� ������������� ������ ������.";
		this->taskLabel->Text += "������ ����������� ����� � " + I + " �����. ";

		if (S == 1) S = 2;
		else S = 1;
		if (S == 1) S_textview = "����";
		if (S == 2) S_textview = "������";

		S_sysstr = msclr::interop::marshal_as<System::String^>(S_textview);

		this->taskLabel->Text += "\n����� ��� �� ����������� �������� ��� ������� �������� � ������� " + S_sysstr + " � ��������� � ����������� " + b_sysstr + " � �������� ������������� " + f_sysstr + ", ��� � ������ ���. ������ ������ �� �������������.";
		this->taskLabel->Text += "\n������� ������ ����� � �����, ����������� ��� ��������� ������. � ������ �������� ������ ����� �����, ������� ��������� ������ �� �����.";
		
		I = I * b_multiply * f_multiply * S;

		correct_answer = I;

		this->correctAnswerLabel->Text += correct_answer;
	}
	break;
	default:
	{
		MessageBox::Show("������!", "������!");
		Application::Exit();
	}
	}

	return System::Void();
}

System::Void IndividualProject::MyTestForm::answerSubmitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->wrongLabel->Hide();
	this->correctLabel->Hide();
	if (String::IsNullOrWhiteSpace(this->taskAmountBox->Text))
	{
		MessageBox::Show("������. ������� ��������!", "������!");
		return;
	}
	if (String::IsNullOrWhiteSpace(this->taskAnswerBox->Text))
	{
		MessageBox::Show("������. ������� ��������!", "������!");
		return;
	}
	int user_answer = Convert::ToInt32(taskAnswerBox->Text);
	int correct_answer = Convert::ToInt32(correctAnswerLabel->Text);

	if (user_answer == correct_answer)
	{
		this->correctLabel->Show();
		this->taskResultBox->Show();
		correct_counter += 1;
	}
	else
	{
		this->wrongLabel->Show();
		this->taskResultBox->Show();
	}

	return System::Void();
}

System::Void IndividualProject::MyTestForm::nextTaskButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	i_taskCount++;
	if ((i_taskCount + 1) == taskAmountBoxValue)
	{
		this->nextTaskButton->Text = "��������� ����";
	}
	if (i_taskCount == taskAmountBoxValue)
	{
		MessageBox::Show("���� ��������! �� �������� ��������� �� " + correct_counter + "/" + i_taskCount + " ��������.", "���� ��������");
		i_taskCount = 0;
		correct_counter = 0;
		MyForm^ form = gcnew MyForm;
		form->Show();
		this->Hide();
	}
	this->correctAnswerLabel->Text = "";
	this->taskAnswerBox->Text = "";
	this->taskResultBox->Hide();
	TaskTestMode(taskAmountBoxValue);

	return System::Void();
}
