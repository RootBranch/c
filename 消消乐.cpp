////http://acm.zzuli.edu.cn/problem.php?id=2960
//#include <iostream>
//#include <string>
//using namespace std;
//int a[100];
//int b[100];
//int main()
//{
//	string s, m;
//	cin >> s >> m;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//			a[s[i] - 'a'] = 1;
//		else if (s[i] >= 'A' && s[i] <= 'Z')a[s[i] - 'A' + 26] = 1;
//	}
//	for (int i = 0; i < m.size(); i++)
//	{
//		if (m[i] >= 'a' && m[i] <= 'z')b[m[i] - 'a'] = 1;
//		else if (m[i] >= 'A' && m[i] <= 'Z')b[m[i] - 'A' + 26] = 1;
//	}
//	for (int i = 0; i <= 56; i++)
//	{
//		if (a[i] == b[i] && a[i] == 1)
//		{
//			cout << "YES";
//			return 0;
//		}
//	}
//	cout << "NO";
//	return 0;
//}