#include<iostream>
#include<conio.h>
#define rightsolution
using namespace std;
void main()
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75 
#define RIGHT_ARROW 77 
#define Enter 13
#define Escape 27
{
#ifdef myshit
	char butt;
	do
	{
		butt = _getch();
		switch (butt) {
		case(27):cout << " exit " << endl; break;
		case(32):cout << " jump " << endl; break;
		case(13):cout << " fire" << endl; break;
		case(119):cout << " forward" << endl; break;
		case(115):cout << " back" << endl; break;
		case(97):cout << " left" << endl; break;
		case(100):cout << " right" << endl; break;
		}
	} while (butt != 27);
#endif
#ifdef rightsolution
	char key;
	do {
		key = _getch();
	//		//cout << (int)key << " " << key << endl;
	//	if (key == 'w' || key == 'W' || key == UP_ARROW ) cout << " forward" << endl;
	//	else if (key == 's' || key == 'S' || key== DOWN_ARROW) cout << "back" << endl;
	//	else if (key == 'a' || key == 'A' || key== LEFT_ARROW) cout << " left" << endl;
	//	else if (key == 'd' || key == 'D' || key == RIGHT_ARROW) cout << " right " << endl;
	//	else if (key != 27 && key!=-32) cout << "error" << endl;
		switch (key) {
		case(RIGHT_ARROW):
		case('a'):
		case('A'):cout << " right" << endl; break;
		case(UP_ARROW):
		case('w'):
		case('W'):cout << " forward" << endl; break;
		case(DOWN_ARROW):
		case('s'):
		case('S'):cout << " back" << endl; break;
		case(LEFT_ARROW):
		case('D'):
		case('d'):cout << " left" << endl; break;
		case Escape: cout << " exit " << endl;
		case -32: break;
		default: cout << "Error" << endl;
		} 
	} while (key != 27);
#endif 
}