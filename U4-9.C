#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();


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
		printf("\t %d",j*j);
		j++;
	}
	printf("\n");
	printf("\nm for while loop cube\n);
	j=1;
	while(j<=10)
	{
		printf("\t %d",j*j*j);
		j++;
	}
	getch();

}