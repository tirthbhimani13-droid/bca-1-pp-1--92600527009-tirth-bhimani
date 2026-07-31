#include<conio.h>
void main()
{
	float pa,r,y,si;

	clrscr();
	printf("\n enter value of principal amount:");
	scanf("%f",&pa);

	printf("\n enter value of rate of interest:");
	scanf("%f",&r);

	printf("\n enter value of years:");
	scanf("%9876f",&y);

		si=(pa*r*y)/100;
	printf("\n*******************");
	printf("\n principal amount :%f",pa);
	printf("\n rate of interest :%f",r);
	printf("\n years :%f",y);
	printf("\n*******************");
	printf("\n simpel interest is %f",si);
	getch();
}