﻿// iterfind.cpp
// find() возвращает итератор списка
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	list<int> theList(5); // пустой список для 5 значений int
	list<int>::iterator iter; // итератор
	int data = 0;
	// заполнение списка данными
	for (iter = theList.begin(); iter != theList.end(); iter++)
		*iter = data += 2; //2, 4, 6, 8, 10
		// поиск числа 8
	iter = find(theList.begin(), theList.end(), 8);
	if (iter != theList.end())
		cout << "\nНайдено число " << *iter << "\n";
	else
		cout << "\nЧисло 8 не найдено.\n";
	system("pause");
	return 0;
}