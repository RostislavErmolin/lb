// search.cpp
//Ищем последовательность, заданную одним контейнером,
//в другом контейнере
#include <iostream>
#include <algorithm>
using namespace std;
int source[] = { 11, 44, 33, 11, 22, 33, 11, 22, 44 };
int pattern[] = { 11, 22, 33 };
int main()
{
	setlocale(LC_ALL, "rus");
	int* ptr;
	ptr = search(source, source + 9, pattern, pattern + 3);
	if (ptr == source + 9) // если после последнего
		cout << "Совпадения не найдено\n";
	else
		cout << "Совпадение в позиции " << (ptr - source) << endl;
	system("pause");
	return 0;
}