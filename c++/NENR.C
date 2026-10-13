#include<stdio.h>
#include<conio.h>
void success()
{
	printf("this is success");
}
void error()
{
	printf("this is error");
}
int main()
{
int i=1,n,rem,rev;
clrscr();
while(i<=1000)
	{
	n=i;
	rev=0;
	while(n>0)
	{
		rem= n%10;
		rev= rev*10+rem;
		n=n/10;
	}
	if(n%3==0 && n%5==0)
	{
		printf("%d",i);
	}
	i++;
	}
	return 0;
}
