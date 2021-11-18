// smallobj.cpp
// демонстрирует простой небольшой объект
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class smallobj // определение класса
{
private:
	int somedata; // поле класса
public:
	void setdata(int d) // метод класса, изменяющий значение поля
	{
		somedata = d;
	}
	
		void showdata() // метод класса, отображающий значение поля
	{
		cout << "Значение поля равно " << somedata << endl;
	}
};
//////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "rus");
	smallobj s1, s2; // определение двух объектов класса smallobj
	s1.setdata(1066); // вызовы метода setdata()
	s2.setdata(1776);
	s1.showdata(); // вызовы метода showdata()
	s2.showdata();
	system("pause");
	return 0;
}
