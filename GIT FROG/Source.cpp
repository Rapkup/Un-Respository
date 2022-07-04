#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>

using namespace std;

int input_norm(const char ch[])
{
	int size;
	cout << ch << endl;
	while (scanf("%d", &size) != 1 || size < 8)
	{

		rewind(stdin);
		cout << "Давай по новой, миша" << endl;
	}
	return size;
} // Добавление переменной с условием задачи

int input_perem(int& x, const char ch[])
{
	cout << " " << ch; cin >> x;
	return x;
}

int input_rand_arr(int* arr, int size, int R, int L)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % R + L;
	return *arr;
}

int output_perem(int x, const char ch[])
{
	cout << "%s: %d" << ch, x;
	return x;
}

void output_arr(int* arr, int size, const char ch[])
{
	cout << "\n " << ch;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

}

int exer(int* arr, int size)
{
	int min;
	min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\n" << "Минимальный элемент" << min << endl;

	int temp = 0;

	if (arr[7] != min)
	{
		for (int i = 0; i < size; i++)
		{
			if (min == arr[i])
			{
				arr[i] = arr[7];
			}
		}

		temp = min;
		min = arr[7];
		arr[7] = temp;
	}
	return min;
}

void tester(int* arr, int size)
{
	if (size < 8)
	{
		cout << "Размер массива не удовлетворяет условию работы программы";
	}
	int min = exer(arr, size);

	if (arr[7] < min)
	{
		cout << "Тест на проверку выполнения задания с массивом не пройден" << endl;
	}
	else
		cout << "Тест на проверку выполнения задания с массивом пройден" << endl;

}


void main(void)
{
system("color 3F");
SetConsoleOutputCP(1251);
setlocale(LC_ALL, "rus");


//int  R, L;
//int size = input_norm("Введите размер массива, обязательно не меньше восьми: ");
cout << "\n";
//input_perem(R, "Введите правую границу массива: ");
//input_perem(L, "Введите левую границу массива: ");
int* arr = new int[10];
int* arrTester = new int[10];
input_rand_arr(arr, 10, 20, 10);
cout << "\n";

output_arr(arr, 10, "Ваш массив: ");
//exer(arr, 10);
tester(arr, 10);
output_arr(arr, 10, "Ваш отработанный массив: ");



system("pause");
}