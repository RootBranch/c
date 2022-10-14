#include <iostream>
#include <string.h>
using namespace std;
int a[104][104];
int main ()
{
	int n ,m;
	int i=0;
	char t;
	int h=1;
	memset (a,0,sizeof(a));
	cin>>n>>m;
	for (i=1;i<=n;i++)
	{
		for (int d=1;d<=n;d++)
		{
			cin >>t;
			if (t=='*')
				a[i][d]=1;
		}
	}
	for (i=1;i<=n;i++)
	{
		for (int d=1;d<=n;d++)
		{
			if (a[i][d]==1)
				cout <<'*';
			else
			{
				cout <<a[i+1][d]+a[i+1][d+1]+a[i][d+1]+a[i-1][d]+a[i][d-1]+a[i-1][d-1]+a[i-1][d+1]+a[i+1][d-1];
			}
			if (h==m)
			{
					cout <<endl;
					h=0;
			}
			h++;
		}
	}
	return 0;
}