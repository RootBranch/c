//https://vjudge.d0j1a1701.cc/contest/528118#problem/H
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
	set<string>se;
	string s;
	while (cin >> s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (isalpha(s[i]))
				s[i] = tolower(s[i]);
			else s[i] = ' ';
		}
		string ss;
		stringstream sss(s);
		while (sss >> ss)
			se.insert(ss);
	}
	for (auto i = se.begin(); i != se.end(); i++)
		cout << *i << endl;
}
