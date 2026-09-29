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

	printf("1.sum\n2.multi");

	printf("\n\nEnter Choice =");
	scanf("%d",&choice);


	switch(choice)
	{
		case 1:
		{
			sum =a+b;
			printf("Sum %d",sum);
			break;
		}
		case 2:
		{
			multi =a*b;
			printf("\nMulti %d",multi);
			break;
		}
		default:
		{
			printf("\nYour choice is wrong...");
			goto start;
		}
	      }
     getch();
}

