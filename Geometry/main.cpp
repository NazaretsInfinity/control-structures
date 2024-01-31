#include<iostream>
using namespace std;
#define triangle
void main()
{
#ifdef MY_GEOM

	char sim = '*'; // first---------------------------------
	for (int i = 0; i < 5; i++)
	{
		{
			for (int n = 0; n < 5; n++)
				cout << sim;
		}
		cout << endl;
	}
	cout << "\n"; // second ---------------------------------
	for (int i = 0; i < 6; i++)
	{
		for (int n = 0; n < i; n++)
		{
			cout << sim;
		}
		cout << endl;
	}
	cout << "\n"; // third -----------------------------------
	for (int i = 0; i < 6; i++)
	{
		for (int n = 5; n > i; n--)
		{
			cout << sim;
		}
		cout << endl;
	}
	cout << "\n"; // fouth------------------------------------
	for (int i = 0; i < 6; i++)
	{
		for (int n = 1; n <= i; n++)
		{
			cout << " ";
		}
		for (int n = 5; n > i; n--)
		{
			cout << sim;
		}
		cout << endl;
	}
	cout << "\n"; // fifth------------------------------------
	for (int i = 0; i < 6; i++)
	{
		for (int n = 5; n > i; n--)
		{
			cout << " ";
		}
		for (int n = 0; n < i; n++)
		{
			cout << sim;
		}
		cout << endl;
	}
	cout << "\n"; // sixth-------------------------------------


	cout << "\n"; // seventh-----------------------------------
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 1)
		{
			for (int n = 0; n < 5; n++)
			{

				if (n % 2 == 0)
					cout << "- ";
				else
					cout << "+ ";
			}
			cout << "\n";
		}
		else if (i % 2 == 0)
		{
			for (int n = 0; n < 5; n++)
			{
				if (n % 2 == 0)
					cout << "+ ";
				else
					cout << "- ";
			}
			cout << endl;
		}
	}

#endif 
	int numb;
#ifdef square
	cout << "type the amount of stars "; cin >> numb;
	for (int i = 0; i < numb; i++)
	{
		for (int n = 0; n < numb; n++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef triangle1
	cout << "type the amount of stars "; cin >> numb;
	for (int i = 0; i <= numb; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif 
#ifdef triangle2
	cout << "type the amount of stars "; cin >> numb;
	for (int i = 0; i <= numb; i++)
	{
		for (int j = i; j < numb; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif 
#ifdef triangle3
	cout << "type the amount of stars "; cin >> numb;
	for (int i = 0; i <= numb; i++)
	{
		for (int p = 0; p < i; p++)
		{
			cout << "  ";
		}
		for (int j = i; j < numb; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
#endif
#ifdef triangle4
	cout << "type the amount of stars "; cin >> numb;
	for (int i = 0; i <= numb; i++)
	{
		for (int p = numb; p > i; p--)
		{
			cout << "  ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif 


#ifdef rhombus
	cout << "type the amount of stars "; cin >> numb;
	for (int i = 0; i < numb; i++)
	{
		for (int j = i; j < numb; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i <= numb - 1; i++)
	{
		for (int p = 0; p <= i; p++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = i; j < numb - 1; j++)
		{
			cout << "  ";
		}
		cout << "/" << endl;
	}
#endif
#ifdef rhombus
	cout << "type the amount of stars: "; cin >> numb;
	for (int i = 0; i < numb; i++)
	{
		for (int j = i; j < numb; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < numb; i++)
	{
		for (int p = 0; p <= i; p++)cout << " "; cout << "\\";
		for (int j = i * 2; j < (numb - 1) * 2; j++)
		{
			cout << " ";
		}
		cout << "/" << endl;
	}
#endif
#ifdef triangle2
	cout << "type the amount: "; cin >> numb;
	for (int i = 0; i < numb; i++)
	{
		for (int j = 0; j < numb; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//if ((i%2==j%2)cout << "+ ";else cout << "- ";
		    //((i%2==j%2) ? cout << "+ ":cout << "- ";
			cout << (i % 2 == j % 2 ? "+ ": "- ");
		}
		cout << endl;
	}
#endif
}

	




