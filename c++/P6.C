#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rem, reverse = 0, original;

	clrscr();
	printf("Enter n = ");
	scanf("%d", &n);

	original = n;
	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n = n / 10;
	}

	if (reverse == original)
		printf("Yes");
	else
		printf("No");

	getch();
}