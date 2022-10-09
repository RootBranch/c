#include <stdio.h>
int main ()
{
	int n;
	int num;
	int a =1;
	int i ;
	scanf("%d",&n);
	for (num=1;num<n;num++)
	{
		a*=10;
	}
	for (i=a;i<a*10;i++)
	{
		int sum =0;
		int b=i;
		int c;
		for (b=i;b>0;b/=10)
		{
			c=b%10;
			
			int e =1;
			for (num=0;num<n;num++)
			{
				e*=c;
			}
			sum+=e;
		}
		if(sum==i)
		printf ("%d ",i);
	}
	return 0;
}