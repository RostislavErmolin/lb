﻿// find.cpp
// найти первый объект, значение которого равно данному
#include <iostream>
#include <algorithm> //для find()
using namespace std;
int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int main()
{
	setlocale(LC_ALL, "rus");
	int* ptr;
	ptr = find(arr, arr + 8, 33); //найти первое вхождение 33
	cout << "Первый объект со значением 33 найден в позиции " << (ptr - arr) << endl;
	system("pause");
	return 0;
}