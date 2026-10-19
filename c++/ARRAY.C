#include<stdio.h>
#include<conio.h>
<<<<<<< HEAD
void main()
{
	int a[3] = {21,25,65},i,total=0,min,max;
	clrscr();
	printf("%d",a[0]);
	printf("\n%d",a[1]);

	for(i=0 ;i<3 ; i++)
	{
	printf("\na[%d] = %d",i,a[i]);
	total =total + a[i];
	}
	printf("\nSum %d",total);

	if(a[0] < a[3])
	{
		printf("\n a[0] min");
	}
	else
	{
		printf("\n a[3]  Max");
	}
	getch();
}

=======
int main()
{
	int a[100],n,i,min;

	printf("Enter no:-");
	scanf("%d",&n);

	for(i=0 ;i<n ;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}

	min=a[0];
	for(i=0; i<n ;i++)
	{
	 if(min > a[i])
	 {
		min=a[i];
	 }
	}
	printf("%d",min);

	return();
}
>>>>>>> a7f14260ce70fb593f5f9cb4e1e67a08467d39a6
