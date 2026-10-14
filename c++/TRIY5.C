#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for (i=11; i<=15 ; i++)
	{
		for(j=11 ;j<=i; j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	getch();
}