#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,total=0,original;

	clrscr();
	printf("Enter n =");
	scanf("%d",&n);

	original = n;

	while(n!=0)
	{
	 rem = n%10;
	 total = total*10 + rem;
	 n=n/10;
	 }
	 printf("rem = %d",total);
	 if(original == rem)
	 {
		printf("\n yes");
	 }
	 else{
		printf("\n no");
	 }
	 getch();
}