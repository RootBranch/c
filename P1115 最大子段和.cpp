#include <iostream>
using namespace std;
const int num = 1e8 + 10;
int a[num], s[num],mins[num];
int main()
{
	int n;
	cin >> n;
	int ma=0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
		mins[i] = min(mins[i - 1], s[i]);
	}
	for (int i = 1; i <= n; i++)
		ma = max(ma, s[i] - mins[i - 1]);
	cout << ma;
	return 0;
}