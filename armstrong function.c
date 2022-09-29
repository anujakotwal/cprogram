#include<stdio.h>
void armstrong();
main()
{
	armstrong();
}
void armstrong()
{
	int n,j,sum=0,temp;
	printf("\n enter n=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		j=n%10;
		sum=sum+(j*j*j);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n it is armstrong no");
	}
	else
	{
		printf("\n it is not armstrong no");
	}
}
