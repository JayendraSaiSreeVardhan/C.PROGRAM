#include<stdio.h>
main()
{
	int n,x=0;
	scanf("%d",&n);
	while(n>0)
    {
    	n=n/10;
    	x=x+1;
	}
	printf("%d digit number",x);
}
