//https://vjudge.d0j1a1701.cc/contest/528118#problem/A
#include <iostream>
#include <algorithm>
using namespace std;
struct line
{
	string name;
	int ma, ch, en, di,sum;
}a[106];
bool cmp(line x, line y)
{
	return x.sum > y.sum;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name >> a[i].ma >> a[i].ch >> a[i].en >> a[i].di;
		a[i].sum=a[i].ma + a[i].ch + a[i].en + a[i].di;
	}
	sort(a, a+n,cmp);
	cout << a[0].name << endl << a[1].name << endl << a[2].name << endl;
	return 0;
}