#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
const int N = 1e6 + 5;
int a[N];
int n, m;
int binary_search(int sta, int end, int ans)
{
	while (sta <= end)
	{
		int mid = (sta + end) / 2;
		if (ans<a[end] && ans>a[end - 1])return end - 1;
		else if (ans > a[sta] && ans < a[sta + 1])return sta;
		else if (a[mid] > ans)end = mid - 1;
		else if (a[mid] < ans)sta = mid + 1;
		else if (a[mid] == ans)return mid;
	}
	return -1;
}
int main()
{
	set<int>s;
	cin >> n >> m;
	int t;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		s.insert(t);
	}
	t = 0;
	for (auto i = s.begin(); i != s.end(); i++)
		a[t++] = *i;
	int d;
	while (m--)
	{
		cin >> d;
		if (d < a[0]) cout << a[0] << endl;
		else if (d >= a[t - 1]) cout << -1 << endl;
		else {
			int sta = 0;
			int end = t - 1;
			int ans = binary_search(sta, end, d);
			cout << a[ans + 1] << endl;
		}
	}
	return 0;
}