#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main ()
{
	int a[110],s[110];
	int n,m;
	cin >>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin >>a[i];
	}
	for (int i=1;i <=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	for (int i=0;i<m;i++)
	{
		int h,j;
		cin >>h>>j;
		cout <<s[j]-s[h-1]<<endl;
	}
	return 0;
}
