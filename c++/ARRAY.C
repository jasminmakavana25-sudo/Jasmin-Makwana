#include<stdio.h>
#include<conio.h>
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