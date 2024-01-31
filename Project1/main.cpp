#include<iostream>
using namespace std;
#define myshit
#define rightsolution
int main()
{
	int number;
	cout << "type your ticket number - "; cin >> number;
	int frst = number / 1000;
	int scnd = number - frst*1000;
	int sum1 = 0;
	int sum2 = 0;
#ifdef myshito
	while (scnd || frst)
	{
		sum1 += frst % 10;
		frst /= 10;
		sum2 += scnd % 10;
		scnd /= 10;
	}
	if (sum1 == sum2)
	{
		cout << " its a lucky ticket" << endl;
	}
	else
	{
		cout << " its a common ticket" << endl;
	}
    #endif

#ifdef rightsolution
	while (number > 1000) {
		sum1 += number % 10;
		number /= 10;
	}
	while (number > 0) {
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2) {
		cout << " nice " << endl;
	}
#endif
}
	