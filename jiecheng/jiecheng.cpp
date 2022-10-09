#include <stdio.h>
int main ()
{
	long long int n,i,sum,a=1 ;
	scanf_s("%lld",&n);
	for (a=1;a<=n;a++)
	{
		int c=1;
		for (i=1;i<=a;i++)
		{
			c*=i;
		}
		sum+=c;
	}
	printf ("%lld",sum);
	return 0;
}