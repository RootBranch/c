#include <iostream>
using namespace std;
long long int a[10006],s[100030];
int main ()
{
	int n;
	cin >>n;
	a[0]=1;
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		a[i]=a[i-1]*i;
	}
	for (int i=1;i<=n;i++)
	{
		sum +=a[i];
	}
	cout <<sum;
	return 0;
}
