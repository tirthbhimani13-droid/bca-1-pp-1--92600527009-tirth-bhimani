#include<stdio.h>
#include<conio.h>

int main() {
    long int num;
    int  digit, sum = 0;
    clrscr();
    printf("Enter an integer: ");
    scanf("%ld", &num);


     num;

    while (num > 0) {
	digit = num % 10;
	sum += digit;
	num  /= 10;
    }

    printf("Sum of digits of %ld = %d\n", num, sum);

    getch();
}
