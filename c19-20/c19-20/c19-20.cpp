// virtpers.cpp
// виртуальные функции и класс person
#include <iostream>
using namespace std;
///////////////////////////////////////////////
class person
{
protected:
	char name[40];
public:
	void getName()
	{
		cout << " Введите имя: "; cin >> name;
	}
	void putName()
	{
		
			cout << " Имя: " << name << endl;
	}
	//чистые виртуальные функции
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
};
////////////////////////////////////////////////
class student : public person
{
private:
	float gpa; //средний балл
public:
	void getData() //запросить данные об ученике у
	{ //пользователя
		person::getName();
		cout << " Средний балл ученика: "; cin >> gpa;
	}
	bool isOutstanding()
	{
		return gpa > 3.5;
	}
};
////////////////////////////////////////////////
class professor : public person
{
private:
	int numPubs; //число публикаций
public:
	void getData() //запросить данные о педагоге у
	{ //пользователя
		person::getName();
		cout << " Число публикаций: "; cin >> numPubs;
	}
	bool isOutstanding()
	{
		return numPubs > 100;
	}
};
////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "rus");
	person* persPtr[100]; //массив указателей на базовый класс person
	int n = 0; //число людей, внесенных в список char choice;
	char choice;
	do {
		cout << " Учащийся (s) или педагог (p): ";
		cin >> choice;
		if (choice == 's') //Занести нового ученика
			persPtr[n] = new student; // в массив
		else //Занести нового
			persPtr[n] = new professor; //педагога в массив
		persPtr[n++]->getData(); //Запрос данных о персоне
		cout << " Ввести еще персону (y/n)? ";
		cin >> choice;
	} while (choice == 'y'); //цикл, пока ответ 'y'
	for (int j = 0; j < n; j++)
	{
		persPtr[j]->putName(); //Вывести все имена,
		if (persPtr[j]->isOutstanding()) //сообщать о
			cout << " Это выдающийся человек!\n"; //выдающихся
	}
	system("pause");
	return 0;
	
} //Конец main()