#include <iostream>
using namespace std;
struct input 
{
	string name;
	int year, score;
}a[10000];
void output(int i)
{
	cin >> a[i].name >> a[i].year >> a[i].score;
	if (a[i].score * 1.2 > 600) a[i].score = 600;
	else a[i].score *= 1.2;
	cout << a[i].name <<' '<< a[i].year + 1 <<' '<< a[i].score << endl;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		output(i);
	}
	return 0;
}