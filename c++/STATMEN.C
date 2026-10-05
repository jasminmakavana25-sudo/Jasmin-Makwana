#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1;
	clrscr();

	start:
	if (i<=10)
	{
		printf("\nhello %d",i);
		i+=1;
		goto start;
	}

	return 0;
}