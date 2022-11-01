//https://vjudge.d0j1a1701.cc/contest/523528#problem/K
#include <iostream>
#include <string>
using namespace std;
int a[1000];
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		a[s[i] - 'a'] = 1;
	}
	int sum = 0;
	for (int i = 0; i < 30; i++)
	{
		sum += a[i];
	}
	if (sum % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}