#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,rev,sum=0,i,cube;
	clrscr();
	printf("Enter n =");
	scanf("%d",&n);

	i=n;

	while(n>0)
	{
		rem = n%10;
		rev=rev*10+rem;
		n= n/10;
	}
	if(sum == i)
	{
		printf("armstrong...");
	}
	else
	{
		printf("not");
	}
	getch();
	}