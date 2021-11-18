// ptrobjs.cpp
// массив указателей на объекты
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Person // класс человек
{
private:
	char name[40]; // имя человека
public:
	void setName() // установка имени
	{
		cout << "Введите имя: ";
		cin >> name;
	}
	void printName() // показ имени
	{
		cout << "\n Имя: " << name;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "rus");
	Person* persPtr[100]; // массив указателей
	int n = 0; // количество элементов в массиве
	char choice;
	do
	{
		persPtr[n] = new Person; // создаем новый объект
		persPtr[n]->setName(); // вводим имя
		n++; // увеличиваем количество
		cout << "Продолжаем ввод (y/n)?"; // спрашиваем, закончен ли ввод
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++)
	{
		cout << "\nИнформация о номере " << j + 1;
		persPtr[j]->printName();
	}
	for (int j = 0; j < n; j++)
	{
		delete persPtr[j]; //высвобождение памяти из под объектов
	}
	cout << endl;
	system("pause");
	return 0;
	
}
