// vectins.cpp
// демонстрация методов insert(), erase()

#include <iostream>
#include <vector>
using namespace std;
int main()

{
	setlocale(LC_ALL, "rus");
	int arr[] = { 100, 110, 120, 130 }; //массив типа int
	vector<int> v(arr, arr + 4); // инициализировать вектор
	//массивом
	cout << "\nПеред вставкой: ";
	int j;
	for (j = 0; j < v.size(); j++) // вывести все элементы
		cout << v[j] << ' ';
	v.insert(v.begin() + 2, 115); // вставить 115 в позицию 2
	cout << "\nПосле вставки: ";
	for (j = 0; j < v.size(); j++) // вывести все элементы
		cout << v[j] << ' ';
	v.erase(v.begin() + 2); // удалить элемент со 2 позиции
	cout << "\nПосле удаления: ";
	for (j = 0; j < v.size(); j++) // вывести все элементы
		cout << v[j] << ' ';
	cout << endl;
	system("pause");
	return 0;
}
