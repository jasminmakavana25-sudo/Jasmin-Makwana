#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,choice,sum,multi;
	clrscr();

	printf("Enter A =");
	scanf("%d",&a);
	printf("Enter B =");
	scanf("%d",&b);

	start:
	printf("\n\n1.Sum\n2.Multi");

	printf("\n\n Enter Choice=");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		{
			sum = a+b;
			printf("sum %d",sum);
			break;
		}
		case 2:
		{
			multi = a*b;
			printf("\nMutli %d",multi);
			break;
		}
		default:
		{
			printf("\n wrong number....");
			goto start;
		}
	     }
	getch();
}
