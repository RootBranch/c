#include <stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
int main ()
{
	struct date today;
	today =(struct date){16,10,2022};
	struct date day;
	day=today;
	day.day=01;
	struct date *pdate =&today;
	printf ("%i-%i-%i\n",today.day,today.month,today.year);
	printf ("%i-%i-%i\n",day.day,day.month,day.year);
	printf ("%p",&pdate);
	return 0;
}
