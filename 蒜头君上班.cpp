//https://vjudge.d0j1a1701.cc/contest/528118#problem/E
#include <iostream>
using namespace std;
int main()
{
	double bike, walk;
	int dis;
	cin >> dis;
	bike = 27.0+ 23.0 + dis / 3.0;
	walk = dis / 1.2;
	if (bike == walk) cout << "All";
	if (bike > walk) cout << "Bike";
	if (bike < walk)cout << "Walk";
	return 0;
}