#include<stdio.h>
#include<conio.h>
int mySum(int a,int b)
{
	int sum;
	sum = a+b;
	return sum;
}

int main()
{
	int p,q,st;
	clrscr();
	printf("Enter 1st:-");
	scanf("%d",&p);
	printf("Enter 2nd:-");
	scanf("%d",&q);

	st = mySum(p,q);
	printf("\nSum %d,%d",st,st*10);
	printf("\n%d",st+10);

	return 0;
}