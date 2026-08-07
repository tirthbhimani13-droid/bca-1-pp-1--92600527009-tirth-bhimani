#include<stdio.h>
#include<conio.h>

void main(){

	float q,p,d,t,fa;
	clrscr();
	printf("\n enter quantity:");
	scanf("%f",&q);

	printf("\n enter price:");
	scanf("%f",&p);

	printf("\n enter discount:");
	scanf("%f",&d);

	t=q*p;
	fa=t-(t*d/100);
	printf("\n *******************\n");
	printf("final_amount:%.2f\n",fa);
	printf("\n *******************\n");
	getch();
}