#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for(i = 100; i >= 90; i-=1)
	{
		printf("\t %d",i);
	}
	printf("\n");
	printf("for while loop\n");
	j=100;
	while(j>=90)
	{
		printf("\t %d",j);
		j-=1;
	}
	getch();

}