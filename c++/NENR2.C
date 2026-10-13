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
	int n;
	printf("Enter value :-");
	scanf("%d",&n);

	if(n%3==0 && n%5==0)
	{
	 success();
	}
	else
	{
	error();
	}
	return 0;
	}
