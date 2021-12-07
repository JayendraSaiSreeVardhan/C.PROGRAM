#include<stdio.h>
main()
{
	int cp,sp,amt;
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		amt=cp-sp;
		printf("profit=%d",amt);
	}
	else
	{
		amt=cp-sp;
		printf("loss=%d",amt);
	}
}
