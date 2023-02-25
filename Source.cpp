#include <iostream>
#include <fstream>
#include <Windows.h>
#include <locale.h>
#include <time.h>
#include <string>
#include "Header.h"
using namespace std;

void ImageTaskGeneration(int* p_cc)
{

	srand(time(NULL));


	// �������� ���������� ����������� ��������.
	int variety = rand() % (3 - 1 + 1) + 1;

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

		cout << "\n����� ����������� ����� ������ (� �����) ����� ���������������, ����� ����� ���� ��������� ����� ��������� ����������� �������� " << M << " x " << N << " �������� ��� �������, ��� � ����������� ����� �������������� " << colorCount << " ��������� ������ ?" << endl;
		cout << "� ������ �������� ������ ����� �����, ������� ��������� ������ �� �����." << endl;

		I = M * N * i;
		correct_answer = (I / (8 * 1024));
		//cout << "���������� �����: " << correct_answer << " �����" << endl;
		cout << "\n�����: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "�����!" << endl;
			*p_cc += 1;
		}
		else
			cout << "�������!" << endl;
		cout << "���������� �����: " << correct_answer << " �����" << endl;
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

		cout << "\n������� �������� " << M << " x " << N << " �������� �������� � ������ " << I << " �����(��� ����� ������)." << endl;
		cout << "������� ����������� ��������� ���������� ������ � ������� �����������." << endl;

		i = (Ibyte / (M * N));

		correct_answer = pow(2, i);
		//cout << "���������� �����: ������������ ���������� ������ � ������� ����� " << correct_answer << "." << endl;
		cout << "\n�����: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "�����!" << endl;
			*p_cc += 1;
		}
		else
			cout << "�������!" << endl;
		cout << "���������� �����: ������������ ���������� ������ � ������� ����� " << correct_answer << "." << endl;
	}
	break;
	case 3:
	{
		int new_i, prev_i, diffI, prevI, correct_answer, user_answer;
		prev_i = rand() % (8 - 5 + 1) + 5;
		new_i = rand() % (5 - 2 + 1) + 2;
		diffI = rand() % (32 - 10 + 1) + 10;

		cout << "\n����� �������������� ���������� " << (pow(2, prev_i)) << " - �������� ������������ ����� � " << (pow(2, new_i)) << " - ������� ������ ��� ������ ���������� �� " << diffI << " �����." << endl;
		cout << "����� ��� ������ ��������� ����� � �������?" << endl;

		prevI = (((diffI / new_i) * prev_i) / (prev_i / new_i));
		//cout << "���������� �����: " << correct_answer << " �����." << endl;
		correct_answer = prevI;

		cout << "\n�����: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "�����!" << endl;
			*p_cc += 1;
		}
		else
			cout << "�������!" << endl;
		cout << "���������� �����: " << correct_answer << " �����." << endl;
	}
	break;

	default:
	{
		cout << "������!";
		exit(0);
	}
	}

}

/*void ImageTaskGenerationToTxt(ofstream test_output)
{
	srand(time(NULL));
	// �������� ���������� ����������� ��������.
	int variety = rand() % (3 - 1 + 1) + 1;

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

		test_output << "\n����� ����������� ����� ������ (� �����) ����� ���������������, ����� ����� ���� ��������� ����� ��������� ����������� �������� " << M << " x " << N << " �������� ��� �������, ��� � ����������� ����� �������������� " << colorCount << " ��������� ������ ?" << endl;
		test_output << "� ������ �������� ������ ����� �����, ������� ��������� ������ �� �����." << endl;

		I = M * N * i;
		correct_answer = (I / (8 * 1024));
		test_output << "���������� �����: " << correct_answer << " �����" << endl;
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

		test_output << "\n������� �������� " << M << " x " << N << " �������� �������� � ������ " << I << " �����(��� ����� ������)." << endl;
		test_output << "������� ����������� ��������� ���������� ������ � ������� �����������." << endl;

		i = (Ibyte / (M * N));

		correct_answer = pow(2, i);
		test_output << "���������� �����: ������������ ���������� ������ � ������� ����� " << correct_answer << "." << endl;
	}
	break;
	case 3:
	{
		int new_i, prev_i, diffI, prevI, correct_answer, user_answer;
		prev_i = rand() % (8 - 5 + 1) + 5;
		new_i = rand() % (5 - 2 + 1) + 2;
		diffI = rand() % (32 - 10 + 1) + 10;

		test_output << "\n����� �������������� ���������� " << (pow(2, prev_i)) << " - �������� ������������ ����� � " << (pow(2, new_i)) << " - ������� ������ ��� ������ ���������� �� " << diffI << " �����." << endl;
		test_output << "����� ��� ������ ��������� ����� � �������?" << endl;

		prevI = (((diffI / new_i) * prev_i) / (prev_i / new_i));
		correct_answer = prevI;
		test_output << "���������� �����: " << correct_answer << " �����." << endl;
	}
	break;

	default:
	{
		cout << "������!";
		exit(0);
	}
	}
}*/

void AudioTaskGeneration(int* p_cc)
{

	srand(time(NULL));


	// �������� ���������� ����������� ��������.
	int variety = rand() % (2 - 1 + 1) + 1;

	// ��������������� �������� ��� ������ ������.
	switch (variety)
	{
	case 1:
	{
		int b, t, S, I, correct_answer, user_answer;
		int a1[] = { 1,2 };
		int a2[] = { 16,32,64 };
		double f;
		t = (rand() % (4 - 1 + 1) + 1) * 10;
		S = a1[rand() % 2];
		b = a2[rand() % 3];
		I = (rand() % (100 - 70 + 1) + 70) * 100;

		cout << "\n�� ������ ��� " << S << "-��������� ����������� � " << b << "-������ ����������� �� " << t << " ������ ��� ������� �������� ����." << endl;
		cout << "��������, ��� ������ ����� �������� " << I << " �����.������ ������ �� �������������." << endl;
		cout << "� ����� �������� ������������� (� ���) ������ ������? � ����� �������� ������ ����� �����." << endl;

		f = I / (b * t * S);

		correct_answer = f;
		//cout << "���������� �����: " << correct_answer << " ���." << endl;
		cout << "\n�����: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "�����!" << endl;
			*p_cc += 1;
		}
		else
			cout << "�������!" << endl;
		cout << "���������� �����: " << correct_answer << " ���." << endl;
	}
	break;

	case 2:
	{
		int b, t, f, S, I, correct_answer, user_answer;
		double newI, b_multiply, f_multiply;
		string S_textview, b_textview, f_textview;
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

		cout << "\n����������� �������� ��� ������� � ������� " << S_textview << ", ��������� � ������� � ���� ����� ��� ������������� ������ ������. ������ ����������� ����� � " << I << " �����. " << endl;

		if (S == 1) S = 2;
		else S = 1;
		if (S == 1) S_textview = "����";
		if (S == 2) S_textview = "������";

		cout << "����� ��� �� ����������� �������� ��� ������� �������� � ������� " << S_textview << " � ��������� � ����������� " << b_textview << " � �������� ������������� " << f_textview << ", ��� � ������ ���. ������ ������ �� �������������." << endl;
		cout << "������� ������ ����� � �����, ����������� ��� ��������� ������. � ������ �������� ������ ����� �����, ������� ��������� ������ �� �����." << endl;

		I = I * b_multiply * f_multiply * S;

		correct_answer = I;
		//cout << "���������� �����: " << correct_answer << " �����." << endl;
		cout << "\n�����: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "�����!" << endl;
			*p_cc += 1;
		}
		else
			cout << "�������!" << endl;
		cout << "���������� �����: " << correct_answer << " �����." << endl;
	}
	break;

	default:
	{
		cout << "������!";
		exit(0);
	}
	}
}

void TaskTestMode()
{
	int correct_counter = 0;
	int* p_cc = &correct_counter;
	int taskAmount, taskTypeCh;

	while (taskAmount < 1 || taskAmount > 20)
	{
		cout << "������. �� ��� �� ������ ������������� ����, ������� �������� �� ����� ������ � �� ����� �������� �������!";
		cout << "������� ���������� ������� ��� �������� �����: "; cin >> taskAmount;
	}

	int i = 0;
	do {
		cout << "\n������� �" << (i + 1);
		taskTypeCh = rand() % (2 - 1 + 1) + 1;
		switch (taskTypeCh)
		{
		case 1: ImageTaskGeneration(p_cc); break;
		case 2: AudioTaskGeneration(p_cc); break;

		default:
		{
			cout << "������!";
			exit(0);
		}
		}
		i++;
	} while (i < taskAmount);
	cout << "\n���� ��������.";
	cout << "\n���������: " << *p_cc << "/" << taskAmount << " ������� ��������� �����.";
}

/*void TaskFileMode()
{
	int taskAmount, taskTypeCh;
	cout << "������� ���������� ������� ��� �������� �����: "; cin >> taskAmount;
	while (taskAmount < 1 || taskAmount > 20)
	{
		cout << "������. �� ��� �� ������ ������������� ����, ������� �������� �� ����� ������ � �� ����� �������� �������!" << endl;
		cout << "������� ���������� ������� ��� �������� �����: "; cin >> taskAmount;
	}
	ofstream test_output;
	test_output.open("output.txt");
	if (!test_output.is_open())
	{
		cout << "������!";
		return;
	}
	test_output << "����������� \n��� \n������� �7\n ���� ������� �� " << taskAmount << " �������.";
	int i = 0;
	do {
		cout << "\n������� �" << (i + 1);
		taskTypeCh = rand() % (2 - 1 + 1) + 1;
		switch (taskTypeCh)
		{
		case 1: ImageTaskGenerationToTxt(test_output); break;
		case 2: AudioTaskGenerationToTxt(test_output); break;

		default:
		{
			cout << "������!";
			exit(0);
		}
		}
		i++;
	} while (i < taskAmount);
} */