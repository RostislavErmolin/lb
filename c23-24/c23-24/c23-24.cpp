// Пример. Использование шаблонов с двумя типами-параметрами
#include <iostream>
using namespace std;
template < class T1, class T2 >
T1 maximum(T1 x, T2 y)
{
	if (x >= y) return x;
	return y;
};
int main()
{
	setlocale(LC_ALL, "rus");
	int i = 5;
		double d = 3.2345;
	cout << "максимум из " << d << " и " << i << " равен " << maximum(d, i) << endl;
	system("pause");
	return 0;
}