#include<stdio.h>
main()
{
	int n,x;
	scanf("%d",&n);
	while(n>0)
    {
    	n=n/10;
    	x=x+1;
	}
	printf("%d digits in the number",x);
}
