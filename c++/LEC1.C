#include<stdio.h>
#include<conio.h>
/*
	Pointer

	memory address

	scanf -> & (memory address)

	pointer variable
	-> syntax:
		datatype *name;

	-> format specifier
		%p

	& -> ref
	* -> deref
*/
void main()
{
	int a = 10;
	int *p;
	clrscr();

	p = &a;

	//a = 120;
	*p = 111;

	printf("a = %d\n", a);
	printf("p = %p\n", p);
	printf("*p = %d", *p);

	getch();
}