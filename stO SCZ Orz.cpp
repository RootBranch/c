#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	long long int a;
	long long int ans=0;
	cin >> s>> a;
	for (int i = 0; i < s.size(); i++)
	{
		ans = (ans*10%a+(s[i]-'0')%a) % a;
	}
	cout << ans;
	return 0;
}