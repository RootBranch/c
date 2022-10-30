//#include <iostream>
//using namespace std;
//const int num = 1e7 + 5;
//const int c = 1e9 + 7;
//int a[num];
//int main()
//{
//	long long int n, k;
//	long long int ans=0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i+1; j <= n; j++)
//		{
//			if (a[i] * a[j] <= a[i] + a[j] + k) ans++;
//		}
//	}
//	cout << ans % c;
//	return 0;
//}