#include<stdio.h>
#include<conio.h>


void main()
{
	int i,j;
	clrscr();

	for (i = 1; i <= 10; i++)
	{
		printf("\t %d %d",i, 11 - i);
	}

	printf("\n");
	printf("\n for while lopp\n");
	j=1;
	while(j<=10)
	{
		printf("\t %d %d",j,11-j);
		j++;
	}


	getch();

}