//http://acm.zzuli.edu.cn/problem.php?cid=1850&pid=3
#include <iostream>
#include <string>
#include <set>
using namespace std;
string s;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		s.clear();
		cin >> s;
		if (s[0]>='a'&&s[0]<='z')s[0] = s[0] -32;
		for (int j = 1; j < s.size(); j++)
		{
			if (s[j] == '_' && s[j + 1] >= 'a' && s[j + 1] <= 'z'&&j+1<s.size()) s[j + 1] -=32 ;
			if (s[j] == '_' && s[j -1] >= 'a' && s[j -1] <= 'z'&&j-1>1) s[j -1] -= 32;
		}
		cout << s<<endl;
	}
	return 0;
}