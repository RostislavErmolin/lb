// listfill.cpp
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
	system("pause");
	return 0;
}
