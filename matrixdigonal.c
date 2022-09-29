#include<stdio.h>
main()
{
	int a[3][3],i,j,sdig=0,snondig=0;
	printf("\n enter a matrix=");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
				sdig=sdig+a[i][j];
			}
			else
			{
				snondig=snondig+a[i][j];
			}
		}
	}
	printf("\n sum of diagonal element=%d",sdig);
	printf("\n sum of non diagonal element+%d",snondig);
}
