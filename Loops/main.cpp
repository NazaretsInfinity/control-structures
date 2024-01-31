#include<iostream>
#include<conio.h>
using namespace std;
#define WHILE_1
#define WHILE_2
void main()
{
#ifdef DEBUG
	setlocale(LC_ALL, "Russian");
	// WHILE_1

	   //int i = 0;
	   //int n;
	   //cout << "type amount of iteracy - "; cin >> n;
	   //while (i < n)
	   //{
	   //	cout << "Hello babe\n";
	   //	++i;
	   //}
   // WHILE_1

	char key;
	do
	{

		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // DEBUG

#ifdef MYSHIT
	/*int number;
	int fact = 1;
	cout << " type your number -  "; cin >> number;
	while (number != 0)
	{
		fact *= number;
			number -= 1;
	}
	cout << fact << endl;*/


	/*double number;
	int degree;
	cout << " type your number - "; cin >> number;
	cout << " type degree - "; cin >> degree;
	int multip = number;
	while (degree != 1 && degree > 0)
	{
		number *= multip;
		degree -= 1;
	}
	while (degree < 0 && degree != -1)
	{
		number *= multip;
		degree += 1;
	}
	double negativenumb = 1 / number;
	if (degree > 0)
		cout << number << endl;
	else if (degree < 0)
		cout << negativenumb << endl;
	else if (degree == 0)
		cout << 1 << endl;*/

	char butt;
	int counter = 0;
	butt = _getch();
	while (counter != 256)
	{
		cout << butt << " ";
		if (counter % 16 == 0)
		{
			cout << "\n";
		}
		butt += 1;
		counter += 1;
	}
#endif 

#ifdef RIGHTSOLUTION1
	// factorial
	int number;
	int i = 1; // counter 1 2 3 etc...
	double fact = 1; // factorial
	cout << " type the nymber: "; cin >> number;
	while (i <= number) {
		cout << i << "!= ";
		fact *= i++;
		cout << fact << "\n";
	}
#endif
#ifdef RIGHTSOLUTION2
	double a; // found of power
	int n; // power
	double N = 1; // all sh#t together 
	cout << " type the number -  "; cin >> a;
	cout << "type the power - "; cin >> n;
	int i = 0;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	while (i++ < n)N *= a;
	cout << N << endl;
#endif
#ifdef WHILE_1
	int i = 0;
	
	int n = 256;
	while (i < n)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i++ << " ";
	}
#endif
	
}	