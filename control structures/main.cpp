#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Controls";
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	cout << "����������� �������: " << temperature << " ��������\n";
	if (temperature > 98)
	{
		cout << " �� ����� �����" << endl;
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
		cout << " �� ����� �������";
	}
}