#include<stdio.h>
#include<conio.h>
/*
	Recursion
	=> call by it self
*/

void test(int cc)
{
	printf("test function => %d\n", cc);
	cc++;
	if(cc<=5)
	{
		test(cc);
		return;
	}
	printf("end of function ::: %d\n", cc);
}
void main()
{
	clrscr();

	test(1);

	getch();
}