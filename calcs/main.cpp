#include<iostream>
using namespace std;
void main()
// fibonacci out of 2 variables 
{
	int n;
	cout << " type the limit : "; cin >> n;
	for (int i = 0, j = 1; i < n; j += i, i = j- i)
	{
		cout << i << " ";
	}
	cout << endl;
}