//https://vjudge.d0j1a1701.cc/contest/523528#problem/D
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[1000008];
int main()
{
	int n;
	cin >> n;
	vector<int> vec;
	int x;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	int x1;
	cin >> x1;
	vec.erase(vec.begin()+x1-1);
	int x2, x3;
	cin >> x2>> x3;
	vec.erase(vec.begin() + x2-1, vec.begin() + x3 - 1);
	cout << vec.size() << endl;
	for (auto i = vec.begin(); i != vec.end(); i++)
		cout << *i<<" ";
	return 0;
}