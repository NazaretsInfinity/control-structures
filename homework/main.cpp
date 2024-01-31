#include<iostream>
using namespace std;
#define task
#define WIDTH   8
void main()
{
	int h;
#ifdef task1 // chess only with 2 for
	int numb;
	cout << "type the size: "; cin >> numb;
	for (int i = 0; i < numb * numb; i++)
	{
		for (int j = 0; j < numb * numb; j++)
		{
			//cout << ((i / numb) % 2 == (j / numb) % 2 ? "* " : "  ");
			cout << ((i / numb & 1 ^ j / numb & 1) ? "  " : "* ");
		}
		cout << endl;
	}
#endif 
#ifdef task2 // Pascal stuff
	cout << "Type the size: "; cin >> h;
	int nf = 1;
	for (int i = 0; i < h; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;	
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(WIDTH/2);
			cout << "";
		}
		int mf = 1;
		cout.width(WIDTH);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int mnf = 1;
			for (int mn = 1; mn <= n - m; mn++)
			{
					mnf *= mn;
			}
			cout.width(WIDTH);
			cout << nf / mf / mnf;
		}
		cout << endl;
	}

#endif
#ifdef task // changes variables
	int a,b;
	cout << "type two variables pls: "; cout << endl << "a = "; cin >> a; cout << "b = "; cin  >> b;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << "Nah, a = " << a << " " << "b = " << b;
#endif
}
