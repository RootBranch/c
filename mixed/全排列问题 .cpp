//全排列问题 
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		a[i] = i;
	do {
		for (int i = 1; i <= n; i++)
			cout << a[i] << ' ';
		puts("");
	} while (next_permutation(a + 1, a + n + 1));
	return 0;
}