#include<stdio.h>
#include<conio.h>
void main ()
{
	int i=1,n,total=0,multi=1;
	clrscr();

	printf("Enter i =");
	scanf("%d",&n);

	while(i<=5)
	{
		printf("\n%d",i);
		total = total+i;
		multi = multi*i;
		i++;
	}
	printf("\n total = %d\n",total);
	printf("\n multi = %d\n",multi);

	getch();
}