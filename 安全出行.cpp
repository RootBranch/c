//http://acm.zzuli.edu.cn/problem.php?cid=1850&pid=6
#include <iostream>
using namespace std;
const int N = 1e6;
long long int a[N];
int main()
{
	long long int n;
	cin >> n;
	long long int x0;
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x0 >> a[i];
	}
	int minn = a[n - 1];
	for (int i = n - 2; i != -1; i--)
	{
		if (a[i] <= minn)
		{
			sum++;
			minn = a[i];
		}
	}
	cout << sum+1;
	return 0;
}