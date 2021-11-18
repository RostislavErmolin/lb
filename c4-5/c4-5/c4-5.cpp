// counter.cpp
// счетчик в качестве объекта
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Counter
{
private:
	unsigned int count; // значение счетчика
	
public:
	Counter() : count(0) // конструктор без параметра
	{ /* пустое тело */
	}
	Counter(int i) : count(i) // конструктор с параметром
	{
		cout << "Использовался конструктор с параметром" << endl;
	}
	~Counter() // деструктор
	{
		cout << "Объект уничтожен" << endl;
	}
	void inc_count() // инкрементирование счетчика
	{
		count++;
	}
	int get_count() // получение значения счетчика
	{
		return count;
	}
};
//////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "rus");
	Counter c1; // будет использован конструктор без параметров
	Counter c2(1); // будет использован конструктор с параметром “1”
	cout << "\nc1=" << c1.get_count(); // вывод
	cout << "\nc2=" << c2.get_count();
	c1.inc_count(); // инкрементирование c1
	c2.inc_count(); // инкрементирование c2
	c2.inc_count(); // инкрементирование c2
	cout << "\nc1=" << c1.get_count(); // вывод
	cout << "\nc2=" << c2.get_count();
	cout << endl;
	system("pause");
	return 0;
}
