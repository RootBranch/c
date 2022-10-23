#include <iostream>
#include <math.h>
using namespace std;
int isprime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
void write(int i)
{

	for (int j = 2; j <= i / 2; j++)
	{
		if (isprime(j) && isprime(i - j))
		{
			cout << i << '=' << j << '+' << i - j << endl;
			return;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 4; i <= n; i += 2)
	{
		write(i);
	}
	return 0;
}
