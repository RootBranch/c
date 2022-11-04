//https://vjudge.d0j1a1701.cc/contest/526572#problem/G
#include <iostream>
#include <string>
#include <set>
using namespace std;
int st[30];
int main()
{
	int n;
	cin >> n;
	string s, k;
	while (n--)
	{
		memset(st, 0, sizeof(st));
		cin >> s;
		cin >> k;
		for (int i = 0; i < 2; i++)
		{
			st[s[i] - 'a']=1;
			st[k[i] - 'a'] = 1;
		}
		int sum = 0;
		for (int i = 0; i < 28; i++)
		{
			sum += st[i];
		}
		if (sum == 1)cout << 0 << endl;
		if (sum == 2)cout << 1 << endl;
		if (sum == 3)cout << 2 << endl;
		if (sum==4)cout << 3 << endl;
	}
	return 0;
}