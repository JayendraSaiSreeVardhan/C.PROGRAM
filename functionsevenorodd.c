#include<stdio.h>
void evenorodd(int a)
{
	if(a%2==0)
	{
		printf("%d is a even",a);
	}
	else
	{
		printf("%d is a odd",a);
	}
}
    int main(void)
    {
    	evenorodd(54);
    	return 0;
	}
