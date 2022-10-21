#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >>s;
	int ans = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == 'V' && s[i + 1] == 'K')
		{
			ans++;
			s[i] = 'M';
			s[i + 1] = 'M';
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == 'V' && s[i + 1] == 'V')
		{
			ans++;
			break;
		}
		if (s[i] == 'K' && s[i + 1] == 'K')
		{
			ans++;
			break;
		}
	}
	cout << ans;
	return 0;
}