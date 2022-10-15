#include <stdio.h>
#include <string.h>
char a[100]={0};
	int b[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int maxn=0;
	int minn=100;
	int sum[26]={0};
int main ()
{
	scanf("%s",a);
	int len =strlen(a);
	for (int i=0;i<len;i++)
	{
		sum[a[i]-'a']++;
	}
	for (int i=0;i<26;i++)
	{
		if (sum[i]>maxn)maxn=sum[i];
		if (sum[i]<minn&&sum[i]>0)minn=sum[i];
	}
	for (int i=0;i<25;i++)
	{
		int c=maxn-minn;
		if (c==b[i])
		{
			printf ("Lucky Word\n%d",c);
			return 0;
		}
	}
	printf ("No Answer\n0");
	return 0;
}