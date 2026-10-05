#include<stdio.h>
#include<conio.h>
void main()
{
	int i=25, user;
	clrscr();
	 printf("\nEnter user= ");
	 scanf("%d",&user);

	  start:
	 if (i>=1)
	 {
		printf("\n suuuuuuuuuuu %d",i);
		i-=1;
		goto start;
	 }

	 getch();
	}
