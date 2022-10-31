//https://vjudge.d0j1a1701.cc/contest/523528#problem/E
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int>vec;
	int n;
	cin >> n;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end());
	for (auto i = vec.begin(); i != vec.end(); i++)
	{
		if (i != vec.end())	cout << *i<<' ';
		else cout << *i;
	}
	return 0;
}