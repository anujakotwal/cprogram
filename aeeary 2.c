#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter array element=");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}
