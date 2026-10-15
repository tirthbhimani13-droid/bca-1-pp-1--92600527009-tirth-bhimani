#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for(i = 1; i <= 10; i++)
	{
		printf(" %d",i);
	}


		printf("\n");


	for(i = 1; i <= 10; i++)
	{
		printf(" %d",i*i);
	}


		printf("\n");


	for(i = 1; i <= 10; i++)
	{
		printf(" %d",i*i*i);

	}
	printf("\n");
	printf("\n for while loop\n");
	j=1;
	while(j<=10)
	{
		printf("\n %d",j);
		j++;
	}
	getch();

}