#include <iostream>
using namespace std;
int main ()
{
	int n=0;
	int a[1000];
	int i;
	int cnt=0;
	for (i=0;i<1000;i++)
	{
		cin>>a[i];
		n++;
		if (a[i]==0)
			break;
	}
	for (i=n-2;i>=0;i--)
	{
		cout <<a[i];
		cnt++;
		if (cnt!=n-1)
			cout<<' ';
	}
	return 0;
}