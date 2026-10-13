#include<stdio.h>
#include<conio.h>
int myFactorial6()
{
	int i=5,sqr;
	sqr=i*i ;
	return sqr;
}
int main()
{
	clrscr();
	printf("%d",myFactorial6());
	printf("\n%d",myFactorial6()*10);
}
