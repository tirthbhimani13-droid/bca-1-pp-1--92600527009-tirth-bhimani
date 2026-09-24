#include<stdio.h>
#include<conio.h>

void main(){
	float price,total_purchase,discount,final_payment,quantity;
	clrscr();
	printf("\n enter price per item:");
	scanf("%f",&price);

	printf("\n enter quantity of item:");
	scanf("%d",&quantity);

	if(total_purchase>1000)
	{
		discount=total_purchase*0.15;
	}
	else
	{
		discount=total_purchase*0.10;
	}

	final_payment=total_purchase-discount;

	 printf("\n total purchase:RS %.2f",total_purchase);
	 printf("\n discount applied:RS %.2f",discount);
	 printf("\n final_payment:RS %.2f",final_payment);

	 getch();
	}