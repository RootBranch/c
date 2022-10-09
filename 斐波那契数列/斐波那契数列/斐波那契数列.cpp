#include <stdio.h>
int main ()
{
	const int n=1000;
	int a [n]={1,1};
	int k ;
	int x1,x0,i=2;
	x1=1;
	x0=1;
	scanf("%d",&k);
	for(i=2;i<=k;i++)
	{
		a[i]=x1+x0;
		x0=x1;
		x1=a[i];
	}
	printf ("%d",a[k-1]);
	return 0;
}