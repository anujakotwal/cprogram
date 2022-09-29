#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,r,cl;
	printf("\n enter number of rows in matrix=");
	scanf("%d",&r);
	printf("\n enter number of column in matrix=");
	scanf("%d",&cl);
	if(r==cl)
	printf("\n enter a matrix=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cl;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter b matrix=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cl;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n multipication of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cl;j++)
		{
			c[i][j]=0;
			for(k=0;k<r;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]+b[k][j]);
			}
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	if else
	{
		printf("\n invalid matrix rows and column");
	}
}
