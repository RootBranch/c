#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
string s;
string s1;
int isabc(char m)
{
	if (m >= 'a' && m <= 'z')
		return 1;
	else return 0;
}
int main()
{
	set<string>a;
	while (cin >> s)
	{
		int l = s.length();
		for (int i = 0; i < l; i++)
		{
			if (isabc(s[i]))
			{
				s[i] = towlower(s[i]);
				s1 += s[i];
			}
			else
			{
				if (s1.length())
				{
					a.insert(s1);
					s1.clear();
				}
			}
		}
		if (s1.length())
		{
			a.insert(s1);
			s1.clear();
		}
	}
	for (auto i = a.begin(); i != a.end(); i++)
	{
		cout << *i << endl;
	}
	return 0;
}