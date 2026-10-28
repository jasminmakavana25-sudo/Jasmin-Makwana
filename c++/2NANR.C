#include<stdio.h>
#include<conio.h>
void success()
{
	printf("succes");
}
void error()
{
	printf("error");
}
void main()
{
	int n;
	clrscr();
	printf("Enter n:-");
	scanf("%d",&n);

	if(n%3==0 && n%5==0)
	{
	  printf("success");
	}
	else
	{
	  printf("error");
	}
	getch();
 }
