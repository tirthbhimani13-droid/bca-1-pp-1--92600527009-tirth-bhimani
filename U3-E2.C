#include<stdio.h>
#include<conio.h>

void main(){
	int x,y,z;
	clrscr();
	printf("enter three number:");
	scanf("%d%d%d",&x,&y,&z);
	if(x<y)
	{
	  if (x<z)
		printf("x is minimum",x);
	  else
		printf("z is minimum",z);
	}
	else
	{
		if(y<z)
			printf("y is minimum",y);
		else
			printf("z is minimum",z);
	}
	getch();
}