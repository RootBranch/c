#include <iostream>
#include <vector>
using namespace std;
void binary(int n)
{
	vector <int>vec;
	int ans = -1;
	while (n)
	{
		vec.push_back(n % 2);
		n /= 2;
	}
	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		ans++;
		if (*it == 1)
		{
			if (it != vec.end() - 1)cout << ans << ' ';
			else cout << ans << endl;
		}
	}
	vec.clear();
}
int main()
{
	int d;
	cin >> d;
	for (int i = 1; i <= d; i++)
	{
		int n;
		cin >> n;
		binary(n);
	}
	return 0;
}