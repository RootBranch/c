#include <stdio.h>
int main ()
{
	int  sum =0;
	int Msum=7+9+10+5+8+4+2+1+6+3+7+9+10+5+8+4+2;
	long long int a;
	scanf("%lld",&a);
	long long int b=a/10;
	long long int c=b;
	long long int e;
	for (int i=0;i<17;i++)
	{
		int d=c%10;
		c/=10;
		switch (i)
		{
			case 0:sum+=2*d;continue;
			case 1:sum+=4*d;continue;
			case 2:sum+=8*d;continue;
			case 3:sum+=5*d;continue;
			case 4:sum+=10*d;continue;
			case 5:sum+=9*d;continue;
			case 6:sum+=7*d;continue;
			case 7:sum+=3*d;continue;
			case 8:sum+=6*d;continue;
			case 9:sum+=1*d;continue;
			case 10:sum+=2*d;continue;
			case 11:sum+=4*d;continue;
			case 12:sum+=8*d;continue;
			case 13:sum+=5*d;continue;
			case 14:sum+=10*d;continue;
			case 15:sum+=9*d;continue;
			case 16:sum+=7*d;continue;
		}
	}
	int k=sum%11;
	printf ("%d,%d ",sum,k);
	switch (k)
	{
		case 0:e=b*10+1;break;
		case 1:e=b*10+0;break;
		case 2:e=b*10+2;break;
		case 3:e=b*10+9;break;
		case 4:e=b*10+8;break;
		case 5:e=b*10+7;break;
		case 6:e=b*10+6;break;
		case 7:e=b*10+5;break;
		case 8:e=b*10+4;break;
		case 9:e=b*10+3;break;
		case 10:e=b*10+2;break;
	}
	if (a==e)
		printf ("%lld Passed",a);
	else 
		printf ("%lld Fail",a);
	return 0;
}