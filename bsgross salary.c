#include<stdio.h>
main()
{
	int bs;
	float gs,hra,da;
	printf("\n enter basic salary=");
	scanf("%d",&bs);
	if(bs<=1000)
	{
		hra=bs*20/100;
		da=bs*80/100;
		gs=bs+hra+da;
		printf("gross salary=%f",gs);
	}
	else if(bs<=20000)
	{
		hra=bs*25/100;
		da=bs*90/100;
		gs=bs+hra+da;
		printf("gross salary=%f",gs);
	}
	else if(bs>20000)
	{
		hra=bs*30/100;
		da=bs*95/100;
		gs=bs+hra+da;
		printf("gross salry=%f",gs);
	}
	else
	{
		printf("enter valid input");
	}
}
