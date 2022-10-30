//#include <iostream>
//#include <math.h>
//using namespace std;
//const long long int k = 1e9 + 7;
//int yue (int a, int b)
//{
//	int n = max(a, b);
//	int m = min(a, b);
//	if (n % m == 0)
//		return m;
//	return yue (n % m, m);
//}
//int wan (int a,int n)
//{
//	for (int i = 2; i <= n; i++)
//	{
//		if (yue(i,a)!=1)
//			return 1;
//	}
//	return 0;
//}
//int main()
//
//{
//	long long int n;
//	cin >> n;
//	long long int ans;
//	for (int i = n + 1;; i++)
//	{
//		if (wan(i, n))
//		{
//			ans = i;
//			break;
//		}
//	}
//	cout << ans% k;
//	return 0;
//}