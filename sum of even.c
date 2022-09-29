#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("\n enter no= ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		sum=sum+i;
	}
 printf("\n%d",sum);	
}
