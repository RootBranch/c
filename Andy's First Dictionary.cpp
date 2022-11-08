//https://vjudge.d0j1a1701.cc/contest/528118#problem/H
#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	set<string>s;
	string fir;
	while (cin >> fir&&fir!="0")
	{
		int len = fir.length();
		for (int i = 0; i < len; i++)
		{
			if (isalpha(fir[i]))fir[i] = tolower(fir[i]);
			else fir[i] = ' ';
		}
		string ss;
		stringstream a(fir);
		while (a >> ss)
			s.insert(ss);
	}
	for (auto i = s.begin(); i != s.end(); i++)
		cout << *i << endl;
	return 0;
}