#include <iostream>
#include <string>
#include <string.h>
using namespace std;
void s(string a,string b)
{
	int i = 0;
	int fir = 0;
	for (int i = 0; i < b.size(); i++)
	{
		if (a[fir] == b[i]) fir++;
	}
	if (fir == a.size()) cout << "YES";
	else cout << "NO";
}
int main()
{
	string a, b;
	cin >> a >> b;
	int sum1 = a.size();
	int sum2 = b.size();
	if (sum1 >= sum2) s(b, a);
	if (sum2 > sum1) s(a, b);
	return 0;
	
}
