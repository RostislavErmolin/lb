// vector.cpp
// Демонстрация push_back(), operator[], size()
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	vector<int> v; // создать вектор типа int
	v.push_back(10); // внести данные в конец вектора
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v[0] = 20; // заменить новыми значениями
	v[3] = 23;
	for (int j = 0; j < v.size(); j++) // вывести содержимое
		cout << v[j] << ' '; // 20 11 12 23
	cout << endl;
	system("pause");
	return 0;
}
