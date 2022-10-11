#include <iostream>
using namespace std;
int main ()
{
	int a[1000];
	int b[1000];
	int e [1000]={0};
	int i =0;
	int n ;
	int c=0;
	int d=0;
	int f=0;
	cin>>n;
	for (i=0;i<7;i++)
	{
		cin>>b[i];
	}
	for (i=0;i<n;i++)
	{
		int cnt =0;
		for (d=0;d<7;d++)
		{
			cin>>a[d];
		}
		for (d=0;d<7;d++)
		{
			for (c=0;c<7;c++)
			{
				if (a[d]==b[c])
					cnt ++;
			}
		}
			e[7-cnt]++;
		
	}
	
	for (i=0;i<7;i++)
	{
		cout<<e[i]<<' ';
	}
	return 0;
}