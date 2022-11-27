//https://ac.nowcoder.com/acm/contest/48404/F
#include <iostream>
using namespace std;
int main()
{
		int n;
	cin >> n;
	string s;
	cin >> s;
	int begin = 0;
	int end = n - 1;
	for (int i = 0; i <n; i++)
	{
		if (s[begin] < s[end]&&begin<=end)
		{
			cout << s[begin];
			begin++;
		}
		else if (s[begin] > s[end]&&begin<=end)
		{
			cout << s[end];
			end--;
		}
		else
		{
			int e = end;
			int b = begin;
			int chose = 0;
			for (; e > b;)
			{
				if (s[e] > s[b])
				{
					chose = 0;
					break;
				}
				else if (s[e] < s[b])
				{
					chose = 1;
					break;
				}
				else
				{
					e--;
					b++;
					continue;
				}
			}
			if (chose == 0)
			{
				cout << s[begin];
				begin++;
			}
			else
			{
				cout << s[end];
				end--;
			}
		}
	}
	return 0;
}