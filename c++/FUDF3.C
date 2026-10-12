#include<stdio.h>
#include<conio.h>
int myFactorial5()
{
	int i=5,sqr;
	sqr=i*i;
	return sqr;
}
int main()
{
	int st;
	st= myFactorial5();
	clrscr();
	printf("%d",st);
	printf("\n%d",st+10);
	return 0;
}