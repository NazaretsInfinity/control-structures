#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Controls";
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << "Температура воздуха: " << temperature << " градусов\n";
	if (temperature > 98)
	{
		cout << " на улице тепло" << endl;
	}
	else if (temperature > 40)
	{
		cout << "u r in a desert bro";
	}
	else if (temperature > 33)
	{
		cout << "darn im gonna get cooked";
	}
	else
	{
		cout << " на улице холодно";
	}
}