//http://acm.zzuli.edu.cn/problem.php?cid=1853&pid=7
#include<stdio.h>
int n;
long long int a[100060], b[100046];
long long int sum1;
long long int sum2;
int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld",&a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lld",&b[i]);
		sum1 += b[i];
	}
	if (a[n - 1] + 1 <= b[n - 1])
	{
		a[n - 1] = b[n - 1];
	}
	else
	{
		a[n - 1]++;
	}
	sum2 += a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i] < b[i])
		{
			if (b[i] <= a[i + 1])
				a[i] = b[i];
		}
		else if (a[i] >= b[i])
		{
			if (a[i] + 1 <= a[i + 1])
				a[i]++;
		}
		sum2 += a[i];
	}
	printf("%lld",sum1+sum2);
	return 0;
}