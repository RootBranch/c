//https://vjudge.d0j1a1701.cc/contest/523528#problem/B
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s ;
	int n;
	cin >> n;
	for (int i = 1; i <=n+1; i++)
	{
		getline(cin,s);
		reverse(s.begin(), s.end());
		if (i!=1)cout << s<<endl;
	}
	return 0;
}