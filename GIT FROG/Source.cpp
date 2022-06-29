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




void main(void)
{

	system("pause");
}