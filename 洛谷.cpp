#include <iostream>
using namespace std;
int main ()
{
	int n;
	int i=0;
	int t=0;
	int cnt=0;
	int a[1000];
	cin>>n;
	while (n!=1)
	{
		a[i]=n;
		if (n%2==0)
		{
			n=n/2;
		}
		else if (n%2!=0)
		{
			n=n*3+1;
		}
		i++;
		cnt++;
	}
	cout<<"1"<<" ";
	for (i=cnt-1;i>=0;i--)
	{
		cout<<a[i];
		t++;
		if (t!=cnt+1)
			cout<<' ';
	}

	return 0;
}