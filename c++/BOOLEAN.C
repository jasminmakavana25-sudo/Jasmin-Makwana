#include<stdio.h>
int main()
{
	int a,b;

	clrscr();

	printf("Enter A =");
	scanf("%d",&a);
	printf("Enter B =");
	scanf("%d",&b);

	printf("%d", a<b);
	printf("\n%d", a>b);
	printf("\n%d", a<=b);
	printf("\n%d", a>=b);
	printf("\n%d", a==b);
	printf("\n%d", a!=b);
	getch();

}
