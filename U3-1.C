#include<stdio.h>
#include<conio.h>

void main(){
	float x,y,z;
	clrscr();
	printf("entertwo number:");
	scanf("%d%d",&x,&y,&z);
	if(x==y)
	{
		printf("minimum value is:%.2f\n",x);
	}
	else
	{
		if(x>y)
		{
			printf("\n x is max:");
			z=x*x;
			printf("\n sqare is:%d",x*x);

		}
		else
		{
			printf("y is max:");
			z=y*y;
			printf("\n sqare is:%d",y*y);
		}
	}
	getch();
}