#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	char a[10];
	cin >>a[0]>>a[1]>>a[2];
	sort (a,a+2);
	for (int i=0;i<3;i++)
	{
		cout <<a[i]<<' ';
	}
	return 0;
}