//https://vjudge.d0j1a1701.cc/contest/528118#problem/N
#include <iostream>
#include <string>
using namespace std;
string s[100][100];
int main()
{
	int high, kuan,chose;
	char a;
	cin >> high >> kuan >> a >> chose;
	if (chose == 0)
	{
		for(int i=0;i<high;i++)
		{
			for (int j = 0; j < kuan; j++)
			{
				if (i == 0 || i == high - 1 || j == 0 || j == kuan - 1)
				{
					cout << a;
				}
				else cout << ' ';
			}
			cout << endl;
		}
	}
	if (chose == 1)
	{
		for (int i = 0; i < high; i++)
		{
			for (int j = 0; j < kuan; j++)
			{
				cout << a;
			}
			cout << endl;
		}
	}
	return 0;
}