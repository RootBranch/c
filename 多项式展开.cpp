#include<iostream>
#include <math.h>
using namespace std;
double f1(int n, double a[], int x)
{
	double m = a[0];
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += a[i] * pow(x, i);
	}
	return sum;
}
double f2(int n,double a[], int x)
{
	double m = a[n];
	double sum = 0;
	for (int i = n; i >= 1; i--)
	{
		sum += x * sum + a[i - 1];
	}
	return sum;
}
int main()
{
	int n;
	double a[3] = {1,2,3};
	int x;
	cin >> n>>x;
	cout << f1(n, a, x)<<endl;
	cout << f2(n, a, x)<<endl;
}
