#include <stdio.h>
#include <conio.h>
int reverseNumber(int num);

void main() {
    int y, result;
    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &y);


    result = reverseNumber(y);

    printf("Reverse of %d = %d\n", y, result);
    getch();
}

int reverseNumber(int num) {
    int rev = 0, rem;

    while (num != 0) {
	rem = num % 10;
	rev = rev * 10 + rem;
	num /= 10;
    }

    return rev;
}
