#include <iostream>
#include <math.h>
using namespace std;
int isprime(int i)
{
	int a;
	int ret = 1;
	for (int n = 2; n <= sqrt(i) ; n++)
	{
		if (i % n == 0)
		{
			ret = 0;
			return ret;
		}
	}
	return ret;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <sqrt(n); i++)
	{
		if (n % i == 0)
			if (isprime(i))
			{
				cout << n/i;
				return 0;
			}
	}
}