#include<stdio.h>
#include<conio.h>
void main()
{
	int sub1, sub2 , sub3 , sub4 ,sub5 , sum ,min,m,max,d,per;
	clrscr();

	printf("Enter the sub1:");
	scanf("%d",&sub1);
	printf("Enter the sub2:");
	scanf("%d",&sub2);
	printf("Enter the sub3:");
	scanf("%d",&sub3);
	printf("Enter the sub4:");
	scanf("%d",&sub4);
	printf("Enter the sub5:");
	scanf("%d",&sub5);

	//sum

	sum = sub1+sub2+sub3+sub4+sub5;
	printf("\nsum %d",sum);

	//d

       //per
	 m = (sum / 0.5);
	 printf("\npercentage =%d%",m);

      //grede

	if (d > 90)
	{
	printf("\n grade = A+");
	}
	else
	{
	printf("\n grade = A");
	}

	if (d >80)
	{
	printf("\n grade = B+");
	}
	else
	{
	printf("\n grade = B");
	}
	 if (d >70)
	{
	printf("\n grade = C+");
	}
	else
	{
	printf("\n grade = C");
	}
	if (d >60)
	{
	printf("\n grade = D+");
	}
	else
	{
	printf("\n grade = D");
	}
	if (d >50)
	{
	printf("\n grade = E+");
	}

       min = sub1;
       printf("\nmin = %d",min);
	if(sub1 > min);

	if(sub2 > min);

	if(sub3 > min);

	if(sub4 > min);

	if(sub5 > min);

       max = sub1;
       printf("\nmax = %d",max);
	if(sub2 > max);

	if(sub3 > max);

	if(sub4 > max);

	if(sub5 > max);

	if(sub5 > max);
	getch();

}
