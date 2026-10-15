#include<stdio.h>
#include<conio.h>

void main()
{

	int i,j;
	clrscr();

	for(i= 200; i >= 180; i-=1)
	{
		printf("\t %d",i);
	}

	printf("\n");
	printf("\n for while loop\n");

	j=200;
	while(j>=180)
	{
		printf("\t %d",j);
		j-=1;
	}
	getch();

}