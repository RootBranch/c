#include <iostream>
using namespace std;
void swap (int *a,int *b);
int main ()
{
	int a;
	int b;
	cin >>a>>b;
	swap (&a,&b);
	cout <<a<<b;
	return 0;
}
void swap (int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}