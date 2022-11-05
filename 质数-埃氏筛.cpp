#include <iostream>
#include <set>
using namespace std;
int a[3000];
bool b[3000];
int main()
{
	int n;
	cin >> n;
	int m = 0;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i = 2; i < n; i++)
	{
		if (b[i] == 0)a[m++] = i;
		if (b[i])continue;
		for (int j = i * i; j < n; j += i)
		{
			b[j] = 1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}