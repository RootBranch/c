#include <iostream>
#include <string.h>
using namespace std;
int main()
{	char str[101];
	char in[101];
	int q;
	cin >> q;
	cin >> str;
	for (int i = 0; i < q; i++)
	{
		int num;
		cin >> num;
		if (num == 1)
		{
			cin >>in;
			strcat(str, in);
			cout << str<<endl;
		}
		if (num == 2)
		{
			int a, b;
			cin >> a >> b;
			str[a + b] = '\0';
			strcpy(in, &str[a]);
			strcpy(str, in);
			cout << str<<endl;
		}
		if (num == 3)
		{
			int a;
			cin >> a >> in;
			strcat(in, &str[a]);
			str[a] = '\0';
			strcat(str, in);
			cout << str<<endl;
		}
		if (num == 4)
		{
			cin >> in;
			char *ans = strstr(str, in);
			if (ans == NULL)
				cout << -1<<endl;
			else
				cout << strlen(str) - strlen(ans)<<endl;
		}
	}
	return 0;
}
