#include<stdio.h>
main()
{
	int a=0,b=25,s=0;
	while(a<b)
	{
		a=a+5;
		s=s+a;
	}
	printf("%d",s);
}
