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


	// Рандомно выбирается неизвестная величина.
	int variety = rand() % (3 - 1 + 1) + 1;

	// Рассматриваются варианты для кажого случая.
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

		cout << "\nКакой минимальный объем памяти (в Кбайт) нужно зарезервировать, чтобы можно было сохранить любое растровое изображение размером " << M << " x " << N << " пикселей при условии, что в изображении могут использоваться " << colorCount << " различных цветов ?" << endl;
		cout << "В ответе запишите только целое число, единицу измерения писать не нужно." << endl;

		I = M * N * i;
		correct_answer = (I / (8 * 1024));
		//cout << "Правильный ответ: " << correct_answer << " Кбайт" << endl;
		cout << "\nОтвет: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "Верно!" << endl;
			*p_cc += 1;
		}
		else
			cout << "Неверно!" << endl;
		cout << "Правильный ответ: " << correct_answer << " Кбайт" << endl;
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

		cout << "\nРисунок размером " << M << " x " << N << " пикселей занимает в памяти " << I << " Кбайт(без учёта сжатия)." << endl;
		cout << "Найдите максимально возможное количество цветов в палитре изображения." << endl;

		i = (Ibyte / (M * N));

		correct_answer = pow(2, i);
		//cout << "Правильный ответ: Максимальное количество цветов в палитре равно " << correct_answer << "." << endl;
		cout << "\nОтвет: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "Верно!" << endl;
			*p_cc += 1;
		}
		else
			cout << "Неверно!" << endl;
		cout << "Правильный ответ: Максимальное количество цветов в палитре равно " << correct_answer << "." << endl;
	}
	break;
	case 3:
	{
		int new_i, prev_i, diffI, prevI, correct_answer, user_answer;
		prev_i = rand() % (8 - 5 + 1) + 5;
		new_i = rand() % (5 - 2 + 1) + 2;
		diffI = rand() % (32 - 10 + 1) + 10;

		cout << "\nПосле преобразования растрового " << (pow(2, prev_i)) << " - цветного графического файла в " << (pow(2, new_i)) << " - цветный формат его размер уменьшился на " << diffI << " Кбайт." << endl;
		cout << "Каков был размер исходного файла в Кбайтах?" << endl;

		prevI = (((diffI / new_i) * prev_i) / (prev_i / new_i));
		//cout << "Правильный ответ: " << correct_answer << " Кбайт." << endl;
		correct_answer = prevI;

		cout << "\nОтвет: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "Верно!" << endl;
			*p_cc += 1;
		}
		else
			cout << "Неверно!" << endl;
		cout << "Правильный ответ: " << correct_answer << " Кбайт." << endl;
	}
	break;

	default:
	{
		cout << "Ошибка!";
		exit(0);
	}
	}

}

/*void ImageTaskGenerationToTxt(ofstream test_output)
{
	srand(time(NULL));
	// Рандомно выбирается неизвестная величина.
	int variety = rand() % (3 - 1 + 1) + 1;

	// Рассматриваются варианты для кажого случая.
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

		test_output << "\nКакой минимальный объем памяти (в Кбайт) нужно зарезервировать, чтобы можно было сохранить любое растровое изображение размером " << M << " x " << N << " пикселей при условии, что в изображении могут использоваться " << colorCount << " различных цветов ?" << endl;
		test_output << "В ответе запишите только целое число, единицу измерения писать не нужно." << endl;

		I = M * N * i;
		correct_answer = (I / (8 * 1024));
		test_output << "Правильный ответ: " << correct_answer << " Кбайт" << endl;
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

		test_output << "\nРисунок размером " << M << " x " << N << " пикселей занимает в памяти " << I << " Кбайт(без учёта сжатия)." << endl;
		test_output << "Найдите максимально возможное количество цветов в палитре изображения." << endl;

		i = (Ibyte / (M * N));

		correct_answer = pow(2, i);
		test_output << "Правильный ответ: Максимальное количество цветов в палитре равно " << correct_answer << "." << endl;
	}
	break;
	case 3:
	{
		int new_i, prev_i, diffI, prevI, correct_answer, user_answer;
		prev_i = rand() % (8 - 5 + 1) + 5;
		new_i = rand() % (5 - 2 + 1) + 2;
		diffI = rand() % (32 - 10 + 1) + 10;

		test_output << "\nПосле преобразования растрового " << (pow(2, prev_i)) << " - цветного графического файла в " << (pow(2, new_i)) << " - цветный формат его размер уменьшился на " << diffI << " Кбайт." << endl;
		test_output << "Каков был размер исходного файла в Кбайтах?" << endl;

		prevI = (((diffI / new_i) * prev_i) / (prev_i / new_i));
		correct_answer = prevI;
		test_output << "Правильный ответ: " << correct_answer << " Кбайт." << endl;
	}
	break;

	default:
	{
		cout << "Ошибка!";
		exit(0);
	}
	}
}*/

void AudioTaskGeneration(int* p_cc)
{

	srand(time(NULL));


	// Рандомно выбирается неизвестная величина.
	int variety = rand() % (2 - 1 + 1) + 1;

	// Рассматриваются варианты для кажого случая.
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

		cout << "\nНа студии при " << S << "-канальной звукозаписи с " << b << "-битным разрешением за " << t << " секунд был записан звуковой файл." << endl;
		cout << "Известно, что размер файла оказался " << I << " Кбайт.Сжатие данных не производилось." << endl;
		cout << "С какой частотой дискретизации (в кГц) велась запись? В ответ запишите только целую часть." << endl;

		f = I / (b * t * S);

		correct_answer = f;
		//cout << "Правильный ответ: " << correct_answer << " кГц." << endl;
		cout << "\nОтвет: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "Верно!" << endl;
			*p_cc += 1;
		}
		else
			cout << "Неверно!" << endl;
		cout << "Правильный ответ: " << correct_answer << " кГц." << endl;
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
		if (S == 1) S_textview = "моно";
		if (S == 2) S_textview = "стерео";


		if (b_multiply == 0.25) b_textview = "в 4 раза меньше";
		if (b_multiply == 0.5) b_textview = "в 2 раза меньше";
		if (b_multiply == 1.5) b_textview = "в 1.5 раз больше";
		if (b_multiply == 2.0) b_textview = "в 2 раза больше";
		if (b_multiply == 3.0) b_textview = "в 3 раза больше";
		if (b_multiply == 4.0) b_textview = "в 4 раза больше";


		if (f_multiply == 0.25) f_textview = "в 4 раза меньше";
		if (f_multiply == 0.5) f_textview = "в 2 раза меньше";
		if (f_multiply == 1.5) f_textview = "в 1.5 раз больше";
		if (f_multiply == 2.0) f_textview = "в 2 раза больше";
		if (f_multiply == 3.0) f_textview = "в 3 раза больше";
		if (f_multiply == 4.0) f_textview = "в 4 раза больше";

		cout << "\nМузыкальный фрагмент был записан в формате " << S_textview << ", оцифрован и сохранён в виде файла без использования сжатия данных. Размер полученного файла – " << I << " Мбайт. " << endl;

		if (S == 1) S = 2;
		else S = 1;
		if (S == 1) S_textview = "моно";
		if (S == 2) S_textview = "стерео";

		cout << "Затем тот же музыкальный фрагмент был записан повторно в формате " << S_textview << " и оцифрован с разрешением " << b_textview << " и частотой дискретизации " << f_textview << ", чем в первый раз. Сжатие данных не производилось." << endl;
		cout << "Укажите размер файла в Мбайт, полученного при повторной записи. В ответе запишите только целую часть, единицу измерения писать не нужно." << endl;

		I = I * b_multiply * f_multiply * S;

		correct_answer = I;
		//cout << "Правильный ответ: " << correct_answer << " Мбайт." << endl;
		cout << "\nОтвет: "; cin >> user_answer;
		cout << endl;
		if (correct_answer == user_answer)
		{
			cout << "Верно!" << endl;
			*p_cc += 1;
		}
		else
			cout << "Неверно!" << endl;
		cout << "Правильный ответ: " << correct_answer << " Мбайт." << endl;
	}
	break;

	default:
	{
		cout << "Ошибка!";
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
		cout << "Ошибка. За раз вы можете сгенерировать тест, который содержит не менее одного и не более двадцати заданий!";
		cout << "Введите количество заданий для создания теста: "; cin >> taskAmount;
	}

	int i = 0;
	do {
		cout << "\nЗадание №" << (i + 1);
		taskTypeCh = rand() % (2 - 1 + 1) + 1;
		switch (taskTypeCh)
		{
		case 1: ImageTaskGeneration(p_cc); break;
		case 2: AudioTaskGeneration(p_cc); break;

		default:
		{
			cout << "Ошибка!";
			exit(0);
		}
		}
		i++;
	} while (i < taskAmount);
	cout << "\nТест завершён.";
	cout << "\nРезультат: " << *p_cc << "/" << taskAmount << " заданий выполнено верно.";
}

/*void TaskFileMode()
{
	int taskAmount, taskTypeCh;
	cout << "Введите количество заданий для создания теста: "; cin >> taskAmount;
	while (taskAmount < 1 || taskAmount > 20)
	{
		cout << "Ошибка. За раз вы можете сгенерировать тест, который содержит не менее одного и не более двадцати заданий!" << endl;
		cout << "Введите количество заданий для создания теста: "; cin >> taskAmount;
	}
	ofstream test_output;
	test_output.open("output.txt");
	if (!test_output.is_open())
	{
		cout << "Ошибка!";
		return;
	}
	test_output << "ИНФОРМАТИКА \nЕГЭ \nЗАДАНИЕ №7\n Тест состоит из " << taskAmount << " заданий.";
	int i = 0;
	do {
		cout << "\nЗадание №" << (i + 1);
		taskTypeCh = rand() % (2 - 1 + 1) + 1;
		switch (taskTypeCh)
		{
		case 1: ImageTaskGenerationToTxt(test_output); break;
		case 2: AudioTaskGenerationToTxt(test_output); break;

		default:
		{
			cout << "Ошибка!";
			exit(0);
		}
		}
		i++;
	} while (i < taskAmount);
} */