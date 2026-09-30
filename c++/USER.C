#include<stdio.h>
#include<conio.h>
void main()
{
       int user=20;
       clrscr();
       printf("\nEnter user =");
       scanf("%d",&user);

       start:
       if(user>=10)
       {
	printf("\n%d",user);
	user-=1;
	goto start;
       }
       getch();
}