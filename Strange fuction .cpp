//https://vjudge.csgrandeur.cn/contest/529658#problem/C
#include <iostream>
#include <math.h>
using namespace std;
double y;
double fxx(double x)
{
	double m=(((42 * x + 48) * x * x * x + 21) * x + 10)* x - y;
	return m;
}
int judge()
{
	double x1 = fxx(0);
	double x2 = fxx(100);
	if (x1*x2 >= 0)
	{
		if (x1 < 0) return 1;
		else return 2;
	}
	else return 0;
}
double fx(double x)
{
	return ((((6 * x + 8) * x * x * x + 7) * x + 5) * x - y)* x;
}
double erfen(double r,double l)
{
	while (l - r > 1e-6)
	{
		double x1 = fxx(l), x2 = fxx(r);
		double mid = (l + r) / 2;
		double x3 = fxx(mid);
		if (x1 * x3 <= 0)r = mid;
		else if (x2 * x3 < 0)l = mid;
	}
	return r;
}
int main()
{
	int n;
	scanf("%d", &n);
	double minn;
	for (int k = 0; k < n; k++)
	{
		scanf("%lf", &y);
		int chose = judge();
		if (chose == 1)
		{
			minn = fx(100);
		}
		else if (chose == 2)minn = fx(0);
		else if(chose==0)
		{
			double ans=erfen(0,100);
			minn = fx(ans);
		}
		printf("%.4lf\n", minn);
	}
	return 0;
}