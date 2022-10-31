//https://vjudge.d0j1a1701.cc/contest/523528#problem/H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector <int> vec;
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}
	for (int k = 0; k < d; k++)
	{
		vec.push_back(*vec.begin());
		vec.erase(vec.begin());
	}
	for (auto i = vec.begin(); i != vec.end(); i++)
		cout << *i<<' ';
	return 0;
}