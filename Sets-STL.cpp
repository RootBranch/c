//https://vjudge.d0j1a1701.cc/contest/523528#problem/J
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	set<int>s;
	int n;
	cin >> n;
	int x;
	int m;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> m;
		if (x == 1)
		{
			s.insert(m);
		}
		else if (x == 2)
		{
			s.erase(m);
		}
		else if (x == 3)
		{
			set<int>::iterator it = s.find(m);
			if (it!= s.end())
				cout << "Yes"<<endl;
			else cout << "No"<<endl;
		}
	}
	return 0;
}