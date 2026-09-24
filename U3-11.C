#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n enter any chareacter:");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E'|| ch == 'I' || ch =='O' || ch == 'U')
	{
		printf("\n input chareacter is vowels :%c",ch);
	}
	else
	{
		printf("\n input chareacter is not vowels :%c",ch);
	}
	getch();
}