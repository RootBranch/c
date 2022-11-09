//https://vjudge.d0j1a1701.cc/contest/528118#problem/B
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int n, m;
long long num;
string s;
string b;
vector<string>v;
void to_ten(int n, string s)
{
	int k;
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i]))	k = s[i] - 'a' + 10;
		else k = s[i] - '0';
		num = (long long )num * n + k;
	}
}
void to_any(int m)
{
	long long yu;
	string d;
	while (num > 0)
	{
		yu = num % m;
		num /= m;
		if (yu >= 10)d = yu - 10 + 'A';
		else d = yu+'0';
		v.push_back(d);
	}
}
int main()
{
	int cho;
	cin >> cho;
	for (int j = 0; j < cho; j++)
	{	
		v.clear();
		cin >> n >> s >> m;
		for (int i = 0; i < s.size(); i++)
		{
			if (isalpha(s[i])) s[i] = towlower(s[i]);
		}
		to_ten(n, s);
		to_any(m);
		for (auto i = v.end(); i != v.begin();)
		{
			cout << *(--i);
		}
		cout << endl;
	}
}