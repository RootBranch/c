//https://ac.nowcoder.com/acm/contest/48404/G
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int x1, y1, x2, y2, x0, y0;
	for (int i = 0; i < t; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x0 >> y0;
		int sum = abs(y1 - y2) + abs(x1 - x2);
		if (x1 != x2 && y1 != y2)
			cout << sum << endl;
		else if (x1 == x2)
		{
			if (x0==x1&&(y0 > y1 && y0 < y2) || (y0<y1 && y0>y2))
				cout << sum + 2 << endl;
			else 
				cout << sum << endl;
		}
		else if (y1 == y2)
		{
			if (y0==y1&&(x0 > x1 && x0 < x2) || (x0<x1 && x0>x2))
				cout << sum + 2 << endl;
			else 
				cout << sum << endl;
		}
	}
	return 0;
}