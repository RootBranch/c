#include <iostream>
#include <string.h>
using namespace std;
int main ()

{
	int a[20][20];
	int x=0,y;
	int tot=1;
	int n=1;
	cin>>n;
	memset (a,0,sizeof(a));
	a[0][n-1]=1;

	y=n-1;
	while (tot<n*n)
	{
		while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;
		while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
		while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++tot;
		while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot;
	}
	for (x=0;x<n;x++)
	{
		for(y = 0; y < n; y++) printf("%3d", a[x][y]);
		printf("\n");
	}
	return 0;
}