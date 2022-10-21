//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string s;
//	cin >>s;
//	int ans = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (s[i] == 'V' && s[i + 1] == 'K')
//		{
//			ans++;
//			s[i] = 'M';
//			s[i + 1] = 'M';
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (s[i] == 'V' && s[i + 1] == 'V')
//		{
//			ans++;
//			break;
//		}
//		if (s[i] == 'K' && s[i + 1] == 'K')
//		{
//			ans++;
//			break;
//		}
//	}
//	cout << ans;
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int boy=0;
	int girl=0;
	for (int i = 0; i < s.length() - 2; i++)
	{
		if (s[i]=='b'||s[i + 1] == 'o' || s[i + 2] == 'y') boy++;
	}
	for (int i = 0; i < s.length() - 3; i++)
	{
		if (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r'||s[i+3]=='l') girl++;
	}
	cout << boy << endl << girl;
	return 0;
}