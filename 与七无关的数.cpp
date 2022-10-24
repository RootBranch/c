#include <iostream>
using namespace std;
int a[1005];
int main()
{
	int n;
	cin >> n;
	int j = 0;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 7 != 0 && i / 10 != 7 && i % 10 != 7)
		{
			a[j++] = i;
		}
	}
	for (int i = 0; i <= j; i++)
	{
		sum += a[i] * a[i];
	}
	cout << sum;
	return 0;
}