#include<stdio.h>
main()
{
	int bs, hra, da, gs;
	printf("enter the basic salary = ");
	scanf("%d",&bs);
	
	if(bs<=10000)
	{
		hra=bs*20/100;
		da=bs*80/100;
	}
	else if(bs<=20000)
	{
		hra=bs*25/100;
		da=bs*90/100;
	}
	else
	{
		hra=bs*30/100;
		da=bs*95/100;
	}
	
	gs = bs+hra+da;
	
	printf("gross salary is = %d",gs);
}
