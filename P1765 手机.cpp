#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int a[40] = { 1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4 };
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= 'z' && s[i]>='a') sum += a[s[i] - 'a'];
		if (s[i] == ' ') sum +=1;
	}
	cout<<sum;
	return 0;
}
