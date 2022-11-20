//http://acm.zzuli.edu.cn/problem.php?cid=1853&pid=8
#include <iostream>
using namespace std;
string key;
int a[1005];
char m[10000];
int main()
{
	cin >> key;
	int i = 0;
	int len = key.length();
	while (cin >> a[i])
	{
		m[i] =key[i % len] + a[i];
		cout << m[i];
		i++;
	}
	return 0;
}