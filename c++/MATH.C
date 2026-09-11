#include<stdio.h>
#include<conio.h>
void main()
{
	int a=388,b=322,g=380,sum,minus,multi,d,m;
	clrscr();

	sum = a+b+g;
	printf("\nSum %d",sum);

	minus = a-b-g;
	printf("\nminus  %d",minus);

	multi = a*b*g;
	printf ("\nMulti  %d",multi);

	d =a/b/g;
	printf("\nD %d",d);

	m =b%a%g;
	printf("\nm %d",m);

	getch();

}