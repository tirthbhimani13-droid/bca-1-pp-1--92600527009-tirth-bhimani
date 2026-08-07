#include<stdio.h>
#include<conio.h>

void main(){
	int age;
	clrscr();
	printf("enter your age:");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("person is eligible for vote\n");
	}
	else
	{
		printf("person is not eligible for vote\n");
	}

	getch();
}
