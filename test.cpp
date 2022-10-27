#include <iostream>
using namespace std;
void del(int arrar[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		if (arrar[i]==m)
			for (int j = i; j < 10; j++)
			{
				arrar[j] = arrar[j + 1];
			}
	}
}
int main()
{
	int a[100] = { 1,2,3,4,5,6,7,8,9,10 };
	int n, m;
	cin >> n >> m;
	del(a, n, m);
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == 0) break;
		cout << a[i]<<' ';
	}
}