#include<stdio.h>
#include<conio.h>
void main()
{

	int x,y,z,avg;

	clrscr();
	printf("\n enter value of x,y,z:");
	scanf("%d%d%d",&x,&y,&z);

	avg=x+y+z/3;

	printf("\n average is :%d",avg);
	getch();
}
