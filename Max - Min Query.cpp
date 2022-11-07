//https://vjudge.d0j1a1701.cc/contest/528118#problem/i
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	multiset<long long int>s;
	for (int i = 0; i < n; i++)
	{
		int chose;
		cin >> chose;
		long long int x1, x2;
		if (chose == 1)
		{
			cin >> x1;
			s.insert(x1);
		}
		if (chose == 2)
		{
			cin >> x1 >> x2;
			while (x2--)
			{
				multiset<long long int>::iterator it1 = s.find(x1);
				if (it1 == s.end())
					break;
				s.erase(it1);
			}
		}
		if (chose == 3)
		{
			if (s.size()!=0)
				cout << *(--s.end()) - *s.begin() << endl;
		}
	}
	return 0;
}