//https://lightoj.com/problem/trailing-zeroes-iii
#include <iostream>
using namespace std;
long long int judge(long long int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n / 5;
		n /= 5;
	}
	return sum;
}
int main()
{
	int t;
	cin >> t;
	long long int q;
	long long int ans;
	for (int i=1;i<=t;i++)
	{
		cin >> q;
		long long int l = 5;
		long long int r = 1e10;
		while (l <= r)
		{
			long long int mid = (l + r) / 2;
			long long int k = judge(mid);
			if (k == q)
			{
				long long int m = mid % 5;
				if (m == 0)
				{
					cout <<"Case "<<i<<": "<< mid << endl;
					goto da;
				}
				else
				{
					cout <<"Case " << i << ": "<< mid - m << endl;
					goto da;
				}
			}
			else if (k > q)r = mid-1;
			else l = mid+1;
		}
		cout <<"Case " << i << ": "<< "impossible" << endl;
	da:;
	}
	return 0;
}