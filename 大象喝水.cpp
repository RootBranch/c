//https://vjudge.d0j1a1701.cc/contest/528118#problem/C
#include <iostream>
using namespace std;
const double pi = 3.1415926535;
int main()
{
	int n, h, r;
	cin >> n >> h >> r;
	double sum = h * pi * r * r;
	double ans = n/sum;
	if (ans + 0.5 == ans) cout << ans;
	else cout <<int( ans + 1);
	return 0;
}