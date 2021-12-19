#include<stdio.h>
main() 
{
	int i=1,n=10,s=0;
	while(i<n)
	{
		printf("%d\n",i);
		s=s+i;
		i++;
	}
	printf("sum is %d",s);
	return 0;
	
}
