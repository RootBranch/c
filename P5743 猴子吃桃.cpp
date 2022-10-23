#include <iostream>
using namespace std;
int num(int i)
{
	i = (1 + i) * 2;
	return i;
}
int main()
{
	int n;
	cin >> n;
	int a = 1;
	for (int i = 0; i < n-1; i++)
	{
		a = num(a);
	}
	cout << a;
	return 0;
}