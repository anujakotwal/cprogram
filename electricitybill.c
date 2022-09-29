#include<stdio.h>
main()
{
	int unit;
	float amt,bill;
	printf("enter unit=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=unit*0.50;
		printf("amount=%f",amt);
	}
	else if(amt<=150)
	{
		amt=25+(unit-50)*0.75;
		printf("amount=%f",amt);
	}
	else if (amt<=250)
	{
		amt=100+(unit-150)*1.20;
		printf("amount=%f",amt);
}
else
{
	amt=220+(unit-250)*1.50;
	printf("amount=%f",amt);
}
bill=amt+(amt*20/100);
printf("\n final bill amount=%f",bill);
	
}
