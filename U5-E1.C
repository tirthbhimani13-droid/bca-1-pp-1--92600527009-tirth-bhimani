
#include<stdio.h>
#include<conio.h>

int mul(int p, int q);
int sum(int a, int b);
int minus(int p, int q);
float divi(int p, int q);

void main()
{
    int x = 2, y = 5, z;
    float d;
    clrscr();

    z = sum(x, y);
    printf("\n Sum is : %d", z);

    z = minus(x, y);
    printf("\n Minus is : %d", z);

    z = mul(x, y);
    printf("\n Multiplication is : %d", z);

    d = divi(x, y);
    printf("\n Division is : %.2f", d);

    getch();
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return(c);
}

int minus(int p, int q)
{
    int r;
    r = p - q;
    return(r);
}

int mul(int p, int q)
{
    int r;
    r = p * q;
    return(r);
}

float divi(int p, int q)
{
    float r;
    r = (float)p / q;
    return(r);
}
