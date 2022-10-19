#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char a [1000];
	int n;
	cin >>n>>a;
	int len=strlen(a);
	for (int i=0;i<len;i++)
	{
		putchar((a[i]-'a'+n)%26+'a');
	}
}
