#include <iostream>
#include <set>
#include <math.h>
using namespace std;
const int n = 1000008;
int pri[n];
int v[n];
int m;
void is_primer() {
	for (int i = 2; i <= 100; i++) {
		if (!v[i])pri[m++] = i;
		for (int j = 0; j <m; j++) 
		{
			if (pri[j] > v[i] || pri[j] * i > 100)break;
			v[pri[j] * i] = pri[j];
		}
	}
	for (int i = 0; i < m; i++)
		cout << pri[i] << ' ';
}
int find(int n)
{
	for (int i = 0; ; i++)
	{
		if (n == pri[i])return 1;
		if (pri[i] > n)return 0;
	}
}
int main()
{
	int n=1;
	is_primer();
	while (n != 0)
	{
		cin >> n;
		for (int i = 0; ; i++)
		{
			if (find(n - pri[i]))
			{
				cout << n << " = " << pri[i] << " + " << n - pri[i] << endl;
				break;
			}
		}
	}
	return 0;
}