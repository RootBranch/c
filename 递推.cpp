#include <iostream>
using namespace std;
void printN(int n)
{
	if (n) printN(n - 1);
	cout << n<<endl;
}
void printA(int n)
{
	for (int i = 1; i <= n; i++)
		cout << i << endl;
}
int main()
{
	int n;
	cin >> n;
	printA(n);
	return 0;
}