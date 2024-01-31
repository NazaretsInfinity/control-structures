#include<iostream>
using namespace std;
#define maestrosolution
#define WHITE_BOX "\xDB\xDB"
#define  BLACK_BOX "\x20\x20"
/*  \x -позволяет включить в строку символ по ASCII-коду в шестнадцатеричной сс 
*/
void main()
{
	int numb;
#ifdef MYTRASH
	cout << "type the size: "; cin >> numb;
	cout << char(218);
	for (int c = 0; c < numb * 2; c++)cout << char(196); cout << char(191) << endl;
	for (int i = 0; i < numb; i++)
	{
		cout << char(179);
		for (int j = 0; j < numb; j++)
		{
			if ((i + j) % 2 == 0)cout << char(219) << char(219); else cout << "  ";
		}
		cout << char(179);
		cout << endl;
	}
	cout << char(192);
	for (int c = 0; c < numb * 2; c++)cout << char(196); cout << char(217) << endl;

	//-----------------------------------------------
	cout << "type the size: "; cin >> numb;
	for (int i = 0; i < numb; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i % 2 == 0)
				for (int p = 0; p < numb; p++)
				{
					if (p % 2 == 0)
						for (int l = 0; l < 5; l++)cout << "* ";
					else for (int l = 0; l < 5; l++)cout << "  ";
				}
			else
				for (int p = 0; p < numb; p++)
				{
					if (p % 2 == 0)
						for (int l = 0; l < 5; l++)cout << "  ";
					else for (int l = 0; l < 5; l++)cout << "* ";
				}
			cout << endl;
		}
	}
#endif
#ifdef task1
	cout << "type the size: "; cin >> numb;
	numb++;
	for (int i = 0; i <= numb; i++)
	{
		for (int j = 0; j <= numb; j++)
		{
			if (i == 0 && j == 0)cout << char(218);
			else if (i == 0 && j == numb)cout << char(191);
			else if (i == numb && j == 0)cout << char(192);
			else if (i == numb && j == numb)cout << char(217);
			else if (i == 0 || i == numb)cout << char(196) << char(196);
			else if (j == 0 || j == numb)cout << char(179);
			//else (i % 2 == j % 2)? cout << char(219) << char(219):cout << "  ";
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif
#ifdef task2
	setlocale(LC_ALL, "");
	cout << "type the size: "; cin >> numb;
	for (int i = 0; i < numb; i++)
	{
		for (int j = 0; j < numb; j++)
		{
			for (int k = 0; k < numb; k++)
			{
				for (int l = 0; l < numb; l++)
				{
					cout << (i % 2 == k%2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif

}