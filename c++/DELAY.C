#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	clrscr();
	for(i=1 ;i<=50 ;i++)
	{
		printf("%d\t",i);
		sleep(5);
	}
	getch();
}