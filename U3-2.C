#include<stdio.h>
#include<conio.h>

void main(){
	float x,y;
	clrscr();
	printf("entertwo number:");
	scanf("%f%f",&x,&y);
	if(x==y)
	{
		printf("minimum value is:%.2f\n",x);
	}
	else
	{
		if(x>y)
		{
			printf("\n x is min:");
		}
		else
		{
			printf("y is min:");
		}
	}
	getch();
}