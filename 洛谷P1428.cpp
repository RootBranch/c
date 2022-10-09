#include <iostream>
using namespace std;
int main ()
{
	int n ;
	int i,d;
	int a[1000];
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		int k=0;
		int cnt=0;
		for (d=0;d<i;d++)
		{
			if (a[d]<a[i])
			{	
				cnt++;
				k++;
			}
		}
		cout <<k;
		if (cnt!=n)
			cout <<" ";
	}
	
	return 0;
}