//#include <iostream>
//#include <math.h>
//using namespace std;
//int  is_prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int change(int n)
//{
//	int t = n;
//	int sum = 0;
//	while (t > 0)
//	{
//		int m = t % 10;
//		t = t / 10;
//		sum = sum * 10 + m;
//	}
//	return sum;
//}
//int main()
//{
//	int j, l;
//	cin >> j >> l;
//	int ans = 0;
//	for (int i = j; i <= l; i++)
//	{
//		if (is_prime(i))
//		{
//			if (i == change(i)) ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}