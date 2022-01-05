#include<stdio.h>
main()
{
	int n,x,k,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		k=x*x;
		s=s+k;
		n=n/10;
	}
	printf("%d is sum of squares of a digits",s);
}
