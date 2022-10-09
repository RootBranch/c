#include <stdio.h>
int main ()
{
	const int  num =1000;
	int a[num],i,n,c=0;
	scanf_s("%d",&n);
	for(i=1;i<n;i++)
	{
		int sum =0;
		int b=1;
		int c =0;
		for (b=1;b<i;b++)
		{
			if (i%b==0)
			{
				a[c++]=b;
				sum+=b;
			}
		}
		if (sum==i)
		{
			int d=0;
			printf ("%d its forter is ",i);
			for (d=0;d<c;d++)
			{
				printf ("%d ",a[d]);
			}
			printf ("\n");
		}
	}
	return 0;
}