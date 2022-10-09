#include <iostream>
using namespace std;
int main()
{
	int l,m,sum=0;
	int b,c;
	int a[10000];
	int i=0;
	int j=0;
	cin>>l>>m;
	for (i=0;i<=l;i++)
	{
		a[i]=0;
	}
	for (i=1;i<=m;i++)
	{
		cin>>b>>c;
		for (j=b;j<=c;j++)
		{
			if (a[j]==0)
			a[j]++;
		}
	}
	for (i=0;i<=l;i++)
	{
		if (a[i]==0)
			sum++;
	}
	cout<<sum;
	return 0;
}
