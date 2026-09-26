#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,max;
	clrscr();
	printf("Enter A =");
	scanf("%d",&a);
	printf("Enter B =");
	scanf("%d",&b);
	printf("Enter c =");
	scanf("%d",&c);
	printf("Enter D =");
	scanf("%d",&d);
	printf("Enter E =");
	scanf("%d",&e);

	max = (a>b)?(a>c)?(a>d)?(a>e)?a:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e:
	       (b>c)?(b>d)?(b>e)?b:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e;
	printf("max ==> %d",max);


	getch();
}
