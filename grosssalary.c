#include<stdio.h>
main()
{ 
   int basic;
   printf("enter the basic");
   scanf("%d",&basic);
   if (basic<=10000) 
   {
	 float hri=(basic*20)/100;
     float da=(basic*80/100);
     int gross=basic+hri+da;
	printf("%d",gross);
    }  
   else if (basic<=20000) 
     {
     float hri=(basic*25)/100;
     float da=(basic*90/100);
     int gross=basic+hri+da;
	 printf("%d",gross);
	 }
	else 
	{
	 float hri=(basic*30)/100;
     float da=(basic*95/100);
     int gross=basic+hri+da;
	 printf("%d",gross);
	}
	}
