#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3] = {21,25,65},i,total=0,min,max;
	clrscr();
	printf("%d",a[0]);
	printf("\n%d",a[1]);

	for(i=0 ;i<3 ; i++)
	{
	printf("\na[%d] = %d",i,a[i]);
	total =total + a[i];
	}
	printf("\nSum %d",total);

	if(a[0] < a[3])
	{
		printf("\n a[0] min");
	}
	else
	{
		printf("\n a[3]  Max");
	}
	getch();
}

