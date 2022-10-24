#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int a[66000],s[66000];
int main ()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
	cin >>a[i];
	}
	int q;
	for (int i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	cin >>q;
	for (int i=1;i<=q;i++)
	{
		int m,n;
		cin >>m>>n;
		cout <<s[m+n-1]-s[m-1]<<endl;
	}
	return 0;
}
