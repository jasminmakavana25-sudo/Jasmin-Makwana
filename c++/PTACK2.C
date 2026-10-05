#include<stdio.h>
#include<conio.h>
void main()
{
	int  user1=20,user2=1;
	clrscr();
	 printf("Enter user1 =");
	 scanf("%d",&user1);
	 printf("Enter user2 =");
	 scanf("%d",&user2);

	 do
	 {
	 printf("\nhellooooooooo %d",user1);
	 user1--;
	 }
	 while(user1>=user2);
	getch();
}