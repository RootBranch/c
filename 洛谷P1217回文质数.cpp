#include <iostream>
#include <math.h>
using namespace std;
int prime(int n)
{
	int i =0;
	for (i=3;i<n/2;i++)
	{
		if (n%i==0)
			return 0;
	}
	return 1;
}
 
int main ()
{
	int a,b;
	int i ;
	cin>>a>>b;
	if (a%2==0)
		a++;
	for (i=a;i<=b;i=i+2)
	{

		int a[1000000];
		int c=i;
		int cnt=0;
		int d=0;
		if (i==9989899)
		{
			break;
		}
		if (prime(i))
		{
			while (c>0)
			{
				a[cnt]=c%10;
				c=c/10;
				cnt++;
			}
			int n=0;
			while (n<cnt)
			{
				d=a[n]+d*10;
				n++;
			}
			if (d==i)
				cout <<i<<endl;
		}
	}
	return 0;
}