#include<iostream>
using namespace std;
#define ISSUE
void main()
{
#ifdef ISSUE1 //factorial
	double numb;
	cin >> numb;
	int fact = numb;
	for (int i = 1; i < fact; i++)
	{
		numb *= i;
	}
	cout << numb << endl;
#endif
#ifdef ISSUE2 //power
	double number;
	int power;
	double result = 1;
	cout << "number -  "; cin >> number;
	cout << "power - "; cin >> power;

	if (power < 0)
	{
		number = 1 / number;
		power = -power;
	}
	for (int i = 0; power > i; i++)
	{
		result *= number;
	}
	cout << "it's " << result << endl;
#endif
#ifdef ISSUE3 // ascii
	for (int butt = 0; butt < 256; butt++)
	{
		if (butt % 16 == 0)
		{
			cout << "\n";
		}
		cout << (char)butt << " ";
	}
#endif
#ifdef ISSUE4// Fibonacci 
	int number;

	cout << "type the limit: "; cin >> number;
	for (int i = 1,i2=0; i < number; i += i2)
	{
		cout << i2 << " " << i << " ";
		i2 += i;
	}
#endif
#ifdef ISSUE5 // Fibonacci
	int number;
	int digit = 1;
	int past_d = 0;
	int digit2;
	cout << "type the amount: "; cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << past_d << " ";
		digit2 = past_d;
		past_d += digit;
		digit = digit2;
	}
#endif
#ifdef ISSUE6 // Prime numbers
	
	int number;
	int past;
	past = 1;
	cout << "type the limit - "; cin >> number;
	while (past != number)
	{
		int counter = 0;
		for (int i = 1; i < past; i++)
		{

			if (past % i == 0)
			{
				counter++;
			}
		}
		if (counter < 2)
			cout << past << " ";
		past++;
	}
#endif
#ifdef ISSUE7// multiplication table
	int number = 10;
	for (int i = 1; i < number; i++)
	{
		for (int n = 1; n < 6; n++)
		{
			cout << n << "*" << i << "=" << n * i << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i < number; i++)
	{
		for (int n = 6; n < 11; n++)
		{
			cout << n << "*" << i << "=" << n * i << "\t";
		}
		cout << endl;
	}
#endif

#ifdef ISSUE8//ythagorean table
	int number = 11;
	for (int i = 1; i < number; i++)
	{
		for (int n = 1; n < 11; n++)
		{
			cout << i * n << "\t";
		}
		cout << "\n";
	}
#endif
#ifdef ISSUE0 //fibo
	int n;
	cout << " type the limit : "; cin >> n;
	for( int a=0,b=1; a<n;b+=a, a=b-a)
		{
			cout << a << "\t";
		}
		cout << endl;
#endif
#ifdef ISSUE0 //prime hren'
		int number;
		cout << "type the limit: "; cin >> number;
		for (int i = 0; i <= number; i++)
		{
			bool simple = true;  
			for (int j = 2; j<i; j++)
			{
				if (i % j == 0)
				{
					simple = false;
					break;
				}
			}
			if (simple)
			{
				cout << i << " ";
			}
		}
#endif
#ifdef ISSUE

#endif


#ifdef ISSUE

#endif
}