#include<stdio.h>
#include<conio.h>
void main ()
{
	int i=1,n,total=0,multi=1;
	clrscr();
	printf("Enter n =");
	scanf("%d",&n);

	do
	{
	printf("\n %d",i);
	total = total + i;
	multi = multi * i;
	i++;
	}
	while(i<=10);
	printf("\n total = %d\n",total);
	printf("\n multi = %d\n",multi);

	getch();
}
