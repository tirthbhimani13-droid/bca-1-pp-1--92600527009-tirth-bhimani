#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n enter any chareacter:");
	scanf("%c",&ch);

	if(ch>=65 && ch<90)
	{
		printf("\n input chareacter is uppercase :%c",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n input chareacter is lowercase :%c",ch);
	}
	else
	{
		printf("\n input is not valed chareacter");
		}
	getch();
}