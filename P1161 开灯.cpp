#include <iostream>
using namespace std ;
int a[2000001]={0};
int main ()
{
	int n;
	int i =0;
	int c=0;
	cin >>n;
	for (i=0;i<n;i++)
	{
		double t;
		int b;
		cin >>t>>b;
		for (c=1;c<=b;c++)
		{
			int d=int(t*c)-1;
			a[d]=!a[d];
		}
	}
	for (i=0;;i++)
	{
		if (a[i]==1)
		{	
			cout <<i+1;
			return 0;
		}
	}
}