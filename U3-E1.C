#include<stdio.h>
#include<conio.h>

void main(){
	int x,y,z;
	clrscr();
	printf("enter three number:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
	  if (x>z)
		printf("x is maximum",x);
	  else
		printf("z is maximum",z);
	}
	else
	{
		if(y>z)
			printf("y is maximum",y);
		else
			printf("z is maximum",z);
	}
	getch();
}