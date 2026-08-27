#include<stdio.h>
#include<conio.h>

void main ()
{
	char x;
	clrscr();
	printf("\n enter any capital lettere : ");
	scanf("%c",&x);

	printf("\n small lettere %c",x+32);

	getch();
}