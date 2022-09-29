#include<stdio.h>
main()
{
	int i,j,n,sum=0;
	printf("\n enter n=");
	scanf("%d",&n);
	while(n>0)
	{
		j=n%10;
		sum=sum+j;
		n=n/10;
	}
	printf("\n sum of digit=%d",sum);
}
