#include <iostream>
#include <math.h>
using namespace std;
 void main()
{
	 int a;
	 float x,y,b;
	 float h = 0.2;

	 cout << "for" << endl;
	 for (a = 1; b <= 2; x = x + h)
	 {
		 y = cos(x) * exp(-x);
		 cout << "y=" << y << endl;
	 }

	 cout << "while" << endl;
	 a = 1;
	 while (b <= 2)
	 {
		 y = cos(x) * exp(-x);
		 x = x + h;
		 cout << "y=" << y << endl;
	 }

	 cout << "do...while" << endl;
	 a = 1;
	 do
	 {
		 y = cos(x) * exp(-x);
		 x = x + h;
		 cout << "y=" << y << endl;
	 } 
	 while (b <= 2);


	 system("pause");
}

