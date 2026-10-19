#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,total=0,max=5;
	clrscr();
	printf("Enter n :-");
	scanf("%d",&n);

	for(i=0 ;i<n ;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
		total = total + a[i];
	 }
	for(i=0 ;i<n ;i++)
	 {
		if(max < a[i])
		{
			max=a[i];
		}
	 }
	printf("\ntotal ==> %d",total);
	printf("\nmax %d",max);
	getch();
}