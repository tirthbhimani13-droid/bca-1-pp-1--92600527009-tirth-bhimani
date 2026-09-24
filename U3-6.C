#include<stdio.h>
#include<conio.h>

void main(){
	float salary,hra,ta,da,pf,gross_salary;
	clrscr();
	printf("\n enter basic salary:");
	scanf("%f",&salary);

	if (salary >= 5000){
	hra = salary * 0.05;
	ta  = salary * 0.06;
	da  = salary * 0.04;
	pf  = salary * 0.05;
	}

	else
	{
	hra = salary * 0.04;
	ta  = salary * 0.05;
	da  = salary * 0.03;
	pf  = salary * 0.04;
	}
	gross_salary=salary+hra+ta+da-pf;

	printf("\nHRA: %.2f", hra);
	printf("\nTA: %.2f", ta);
	printf("\nDA: %.2f", da);
	printf("\nPF: %.2f", pf);
	printf("\nGross_salary: %.2f", gross_salary);

	getch();
}

