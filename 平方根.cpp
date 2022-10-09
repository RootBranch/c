#include<stdio.h>
#include<math.h>      
int main()
{
 int a;
 double x0,x;
  scanf_s("%d",&a);
 x0=1.0;
 do
 {
	 x=x0;
	 x0=(x+a/x)/2;
 }
 while (fabs(x0-x)>1E-5);
 printf ("%0.3lf",x0);
 return 0;
}