﻿// count.cpp
// считает количество объектов, имеющих данное значение
#include <iostream>
#include <algorithm> //для count()
using namespace std;
int arr[] = { 33, 22, 33, 44, 33, 55, 66, 77 };
int main()
{
	setlocale(LC_ALL, "rus");
	int n = count(arr, arr + 8, 33); //считать, сколько раз
	//встречается 33
	cout << "Число 33 встречается " << n << " раз(а) в массиве." << endl;
	system("pause");
	return 0;
}