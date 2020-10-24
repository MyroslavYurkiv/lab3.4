// Lab_03_4.cpp
// < Юрків Мирослав >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 31
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R{}; 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if ((y <= sqrt(pow(R, 2) - pow(x, 2)) && y >= x && x >= 0) || 
		( y <= x && y >= -R ))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}