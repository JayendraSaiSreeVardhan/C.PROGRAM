#include<stdio.h>
float Simpleint(float p, float r, float t) 
{
    float si;   
    si = (p * r * t)/100; 
    return si; 
}
 int main()
{
    float a,b,c;
    float intrest;
    printf("\nEnter Prinicpal :\t");
    scanf("%f",&a);
    printf("\nEnter year:\t");
    scanf("%f",&b);
    printf("\nEnter Rate:\t");
    scanf("%f",&c); 
    intrest = Simpleint(a,b,c); 
    printf("\nSimple Interest = %.2f\n", intrest); 
    printf("\n");
    return 0;
}
