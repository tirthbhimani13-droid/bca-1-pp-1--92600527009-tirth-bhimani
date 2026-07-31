//tirth bhimani
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n enter value of x:");
	scanf("%d",&x);

	printf("\n enter value of y:");
	scanf("%d",&y);

	printf("\n before interchange: x=%d y=%d",x,y);
	x=y;
	y=x;

	printf("\n after interchange: x=%d y=%d",x,y);
	getch();
}