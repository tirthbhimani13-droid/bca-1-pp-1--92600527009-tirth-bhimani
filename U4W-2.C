#include<stdio.h>
#include<conio.h>

void main()
{


	int i,j;
	clrscr();

	for(i = 2; i <= 20; i+=2)
	{
		printf("\n %d",i);
	}
	printf("\n");
	 printf("\n for while loop\n");
	j=2;
	while(j<=20)
	{
		printf("\n %d",j);
		j+=2;
	}
	getch();

}