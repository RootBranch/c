#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double x1,y1,x2,y2;
	cin >>x1>>y1>>x2>>y2;
	double d;
		d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	double c=sqrt(d);
	printf ("%.2lf",c);
	return 0;
}