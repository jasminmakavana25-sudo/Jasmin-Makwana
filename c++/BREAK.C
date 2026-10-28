#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for(i=1 ; i<=10 ; i++)
	{
		if(i==46)
		{
		break;
		}
		printf("\n%d",i);
	}
	getch();
}