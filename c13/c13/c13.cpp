
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Date
{
private:
	int day;
	int month;
	int year;
public:
	void inputdate() // получение информации
	{
		cout << "\nВведите день: "; cin >> day;
		cout << "Введите месяц: "; cin >> month;
		cout << "Введите год: "; cin >> year;
	}
	void showdate() // вывод информации
	{
		cout << day << month << year << '\"';
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "rus");
	Date birthday; // определяем объект типа Date
	birthday.inputdate(); // получаем информацию
	birthday.showdate(); // выводим на экран
	Date* birthday_ptr; // определяем переменную-указатель на Date
	birthday_ptr = new Date; // создаем объект
	birthday_ptr->inputdate(); // получаем для него информацию
	birthday_ptr->showdate(); // выводим информацию
	cout << endl;
	system("pause");
	return 0;
}
