#include <stdio.h>
int Addition(int p, int q) 
{
    return p + q;
}
int Subtraction(int p, int q) 
{
    return p - q;
}
int Multiplication(int p, int q) 
{
    return p * q;
}
float Division(int p, int q) 
{
    return (float)p / q;
}
 int main() 
 {
    int p, q;
    printf("Enter any two positive integer numbers:\n");
    scanf("%d%d", &p, &q);
    printf("\n");
    printf("Addition of       %d + %d = %d\n", p, q, Addition(p, q));
    printf("Subtraction of    %d - %d = %d\n", p, q, Subtraction(p, q));
    printf("Multiplication of %d * %d = %d\n", p, q, Multiplication(p, q));
    printf("Division of       %d / %d = %f\n", p, q, Division(p, q));
    return 0;
}
