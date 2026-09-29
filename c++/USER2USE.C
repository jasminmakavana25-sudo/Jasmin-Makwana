#include<stdio.h>
#include<conio.h>
void main()
{
	int user =10;
	clrscr ();

	printf("\nEnter user =");
	scanf("%d",&user);

	start:
	if (user<=20)
	{
		printf("\n %d",user);
		user+=1;
		goto start;

	}

	getch();
}