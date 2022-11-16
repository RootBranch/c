//https://www.luogu.com.cn/problem/P1024
#include <iostream>
#include <math.h>
using namespace std;
double a, b, c, d;
double k[3];
double fx(double x)
{
	double q = (((a * x + b) * x) + c) * x + d;
	return q;
}
int main()

{
	cin >> a >> b >> c >> d;
	int s = 0;
	for (int i = -100; i <= 100; i++)
	{
		double r = i;
		double l = r + 1;
		double x1 = fx(r), x2 = fx(l);
		if (x1*x2==0)
		{
			if (x1 == 0) k[s++] = r;
		}
		else if ((x1*x2) < 0)
		{
			while (l - r >= 0.001)
			{
				double mid = (r + l) / 2;
				double x3 = fx(mid);
				if (x1 * x3 <=0) l = mid;
				else if (x2*x3 < 0) r = mid;
			}
			k[s++] = r;
		}
		if (s == 3)break;
	}
	for (int i = 0; i < 3; i++)
		printf("%.2f ", k[i]);
	return 0;
}