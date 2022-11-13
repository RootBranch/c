//http://acm.zzuli.edu.cn/problem.php?cid=1851&pid=3
#include <iostream>
using namespace std;
int n;
string s;
char m[12];
int a[30];
int maxn;
int main()
{
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		a[s[i] - 'a' + 1]++;
		maxn = max(maxn, a[s[i] - 'a' + 1]);
	}
	int cnt = 0;
	for (int i = 0; i < 30; i++)
	{
		if (a[i] != 0)
		{
			m[a[i] - 1] = i + 'a' - 1;
		}
	}
	for (int i = 0; i < maxn; i++)
		cout << m[i];
	return 0;
}