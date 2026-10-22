#include<stdio.h>
#include<conio.h>

void main()
{
	long int p=1,b,e,i;
	clrscr();

	printf("\n enter value of base:");
	scanf("%ld",&b);

	printf("\n enter value of exponent:");
	scanf("%ld",&e);

	for(i=1;i<=e;i++)
	{
		p = p * b;
	}

	printf("\n*****************************************");
	printf("\n power value is : %ld ^ %ld = %ld",b,e,p);
	printf("\n*****************************************");

	getch();

}

