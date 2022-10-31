//https://vjudge.d0j1a1701.cc/contest/523528#problem/I
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<long long int>vec;
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		int x1=0, x2=0;
		scanf("%d",&x1);
		if (x1 == 1)
		{
			scanf(" %d",&x2);
			vec.push_back(x2);
		}
		if (x1 == 2)
			if (vec.begin() != vec.end())
				vec.pop_back();
		if (x1 == 3)
			if (vec.begin() != vec.end())printf("%lld\n", *(vec.end()-1));
			else printf("Empty!\n");
	}
	return 0;
}
