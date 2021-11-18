// listfill2.cpp
// Итератор используется для заполнения контейнера данными

#include <iostream>
#include <list>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	list<int> iList(5); // пустой список для хранения 5
	
		//значений типа int
		list<int>::iterator it; // итератор
	int data = 0;
	// заполнение списка данными
	for (it = iList.begin(); it != iList.end(); ++it)
		*it = data += 2;
	// вывод списка
	for (it = iList.begin(); it != iList.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	iList.resize(10);//увеличим список до 10 элементов
	// заполнение расширенного списка данными
	for (it = iList.begin(); it != iList.end(); ++it)
		*it = data += 2;
	// вывод списка
	for (it = iList.begin(); it != iList.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	it = iList.begin();//выставляем итератор на начало списка
	for (int i = 1; i != 5; i++)
		++it; // сдвигаем итератор на пятую позицию 
	cout << *it << endl;// вывести на экран пятый элемент списка
	iList.insert(it, 100);//вставляем "100" перед текущей позицией итератора (перед пятой)
	//и возвращаем позицию нового элемента
	// вывод получившегося списка
	for (it = iList.begin(); it != iList.end(); it++)
		cout << *it << ' ';
	cout << endl;
	cout << iList.size() << endl;// Стало 11 элементов списка
	it = iList.begin();//выставляем итератор на начало списка
	for (int i = 1; i != 5; i++)
		++it; // сдвигаем итератор на пятую позицию 
	cout << *it << endl;// вывести на экран пятый элемент списка
	iList.erase(it); //удалить пятый элемент списка, т.е "100"
	// вывод получившегося списка без "100"
	for (it = iList.begin(); it != iList.end(); it++)
		cout << *it << ' ';
	cout << endl;
	iList.clear();// Удалить все элементы (опустошить список)
	cout << iList.size() << endl;// Осталось элементов списка "0"
	system("pause");
	return 0;
}
