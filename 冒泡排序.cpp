#include <iostream>
using namespace std;
int a[1000];
void bubble_sort(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] < a[j]) swap(a[i], a[j]);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	bubble_sort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i]<<' ';
	return 0;
}
