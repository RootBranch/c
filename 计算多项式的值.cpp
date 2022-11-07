//https://vjudge.d0j1a1701.cc/contest/528118#problem/D
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, a, b, c, d;
	cin >> x >> a >> b >> c >> d;
	double fx = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
	printf("%.7lf", fx);
	return 0;
}