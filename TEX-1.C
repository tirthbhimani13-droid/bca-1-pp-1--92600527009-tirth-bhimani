#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n enter any two number:");
	scanf("%d%d",&x,&y);

	(x > y)?printf("\n x is max"):printf("\n y is max");

	getch();

}