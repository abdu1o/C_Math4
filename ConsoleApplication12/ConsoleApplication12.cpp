#include <iostream>
#include <typeinfo>
using namespace std;

//(1)-----------------------------------------
//int main()
//{
//    int cordX1, cordX2, cordY1, cordY2;
//
//    cout << "Enter cords of first dot:  ";
//    cin >> cordX1 >> cordY1;
//
//    cout << "Enter cords of second dot:  ";
//    cin >> cordX2 >> cordY2;
//
//    if (cordX1 == cordX2)
//    {
//        cout << "Line parallel to the y-axis";
//    }
//    else if (cordY1 == cordY2)
//    {
//        cout << "Line parallel to the x-axis";
//    }
//    else
//    {
//        cout << "Line parallel to nothing";
//    }
//}
//--------------------------------------------


//(2)-----------------------------------------
//int main()
//{
//	double num;
//
//	cout << "Enter random number: ";
//	cin >> num;
//
//	if(num - int(num) == 0)
//	{
//		cout << "Ur number is integral";
//	}
//	else if(num - int(num) != 0)
//	{
//		cout << "Ur number is float";
//	}
//	else
//	{
//		cout << "Ur number is not number";
//	}
//}
//--------------------------------------------


//(3)-----------------------------------------
int main()
{
	int ticket;

	cout << "Entera number of ticket (6 symbols): ";
	cin >> ticket;

	int num1 = ticket / 100000;
	int num2 = ticket / 10000 % 10;
	int num3 = ticket / 1000 % 10;

	int num4 = ticket / 100 % 10;
	int num5 = ticket / 10 % 10;
	int num6 = ticket % 10;

	if (num1 + num2 + num3 == num4 + num5 + num6)
	{
		cout << "Ur ticket is lucky";
	}
	else
	{
		cout << "Ur ticket is not lucky";
	}
}