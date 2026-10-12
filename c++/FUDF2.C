#include<stdio.h>
#include<conio.h>
void myTable(int n)
{
     int i;
     for(i=1 ; i<=10 ; i++)
     {
	printf("\n %d*%d=%d",n,i,n*i);
     }
}

int main()
{

	int a;
	clrscr();
	printf("Enter No :-");
	scanf("%d",&a);

	myTable(50);
	myTable(10);

	return 0;
}