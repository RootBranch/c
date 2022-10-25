#include <iostream>
using namespace std;
int a[100000050],s[100000005];
int main()
{	
	s[0] = 1;
	int n;
	cin >> n;
	int max = 0;
	int max2 = 0;
	for (int i = 1; i <= n; i++)
	{
		int x1, x2;
		cin >> x1 >> x2;
		a[x1] += 1;
		a[x2] -= 1;
		if (max2 < x2) max2 = x2;
	}
	for (int i = 1; i <= max2; i++)
	{
		s[i]= a[i]+s[i-1];
		if (s[i] > max) max = s[i];
	}
	cout << max;
	return 0;
}