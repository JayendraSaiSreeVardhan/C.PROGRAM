#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0&&a%11==0)
	{
		printf("it is divisible by 5 and 11");
	}
	else
	{
		printf("it is not divisible by 5 and 11");
	}
}
