#include <stdio.h>
#include <string.h>
int mylen (const char *s)
{
	int cnt =0;
	while (s[cnt] !=0)
		cnt ++;
	return cnt;
}
int main (int argc,char const *argv[])
{
	char line []="hello";
	printf ("strlen=%d\n",strlen (line));
	printf ("sizeof=%d\n",sizeof(line));
	printf ("mylen=%d\n",mylen (line));
	return 0;
}