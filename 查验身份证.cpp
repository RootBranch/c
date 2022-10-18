#include <stdio.h>
int main ()
{
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int c[11]={1,0,2,9,8,7,6,5,4,3,2};
	char b[18];
	int sum =0;
	scanf("%s",b);
	for (int i=0;i<17;i++)
	{
		sum=sum+a[i]*(b[i]-'0');
	}
	int d=b[17]-'0';
	if (d==c[sum%11])
		printf ("%s Passed",b);
	else 
		printf ("%s Failed");
	return 0;
}
