#include<stdio.h>
void max(int a,int b)
{
	if(a>b)
	{
		printf("%d is max",a);
	}
	else
	{
		printf("%d is max",b);
	}
}
    int main(void)
    {
    	max(50,30);
    	return 0;
	}
