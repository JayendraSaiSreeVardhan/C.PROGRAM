#include<stdio.h>
main()
{
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   if(n%i==0)
	   {
	   	s=s+i;
	   }
    }
    printf("%d\n",s);
    if(s==n+n)
    {
    	printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
}
