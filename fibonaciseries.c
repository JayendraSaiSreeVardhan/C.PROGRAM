#include<stdio.h>
main()
{
	int a=0,b=1,c,n;
	scanf("%d",&n);
	printf("%d\n %d\n",a,b);
	while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
		if(c<=n)
		{
			printf("%d\n",c);
		}
	}
}
