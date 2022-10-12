#include <iostream>
using namespace std;
int main ()
{
	int n,i,a[1000]={0};
	int b=0;
	int t=0;
	cin>>n>>i;
	for (b=1;b<=i;b++)
	{
		for (t=1;t<=n;t++)
		{
			if (t%b==0)
			{
				a[t]=!a[t];
			}
		}
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]==1)
		cout <<i<<' ';
	}
	return 0;
}