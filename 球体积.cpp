#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	const double P=3.1415927;
	int n;
	int i =0;
	double  a[1000];
	while (cin>>a[i])
	{
		double d=a[i]*P*a[i]*a[i]*4/3;
		printf ("%.3lf\n",d);
		i++;
	}
	return 0;
}