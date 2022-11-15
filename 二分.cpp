#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int erfen(int a[],int right, int left,int m)
{
	int mid = (left + right) / 2;
	if (a[mid] == m) return mid;
	if (abs(right - left) == 1) return 0;
	if (a[mid] > m)left = mid - 1;
	if (a[mid]<m) right = mid + 1;

	erfen(a, right, left, m);
}
int main()
{
	int a[] = { 1,5,2,6,7,8,4 };
	sort(a, a + 6);
	int m;
	while (cin >> m)
	{
		int right = 0;
		int left = 6;
		int ans = erfen(a,right, left,m);
		cout << ans + 1 << endl;
	}
	return 0;
}