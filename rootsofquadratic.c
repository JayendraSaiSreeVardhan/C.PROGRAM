#include<stdio.h>
main()
{
	int a,b,c;
	float u,v;
	scanf("%d%d%d",&a,&b,&c);
    int D=b*b-4*a*c;
    if (D>=0)
    {
    	if (D=0)
    	 {
    	 	printf("roots are real and equal");
    	 	u=(-b)/2*a , v=(-b)/2*a;
    	 	printf("%f %f",u,v);
		 }
	   else  
	    {
	    	printf("roots are real and not equal");
	    	u=(-b+sqrt(D))/2*a , v=(-b-sqrt(D))/2*a;
	    	printf("%f %f",u,v);
	    }
    }
    else 
    {
    	printf("roots are imaginary");
	}
			
}
