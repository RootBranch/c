#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a[1000];
	int i= 0;
	while (cin>>a[i])
	{
		cout <<fabs(a[i])<<endl;
		i++;
	}
	return 0;
}