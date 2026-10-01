#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N;
	clrscr();

	printf("\n enter any number :",N);
	scanf("%d",&N);

	for(i = 2; i <= N; i+=2)
	{
		printf(" %d",i);
	}
		printf("\n ");
	for(i = 1; i <= N; i+=2)
	{
		printf(" %d",i);
	}
	getch();

}