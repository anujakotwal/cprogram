#include<stdio.h>
main()
{
	int i,n,mul;
	printf("\n enter the no=");
	scanf("%d",&n);
	for(i=1; i<=10;i++)
	{
		mul=i*n;
		printf("\n %d*%d=%d",i,n,mul);
	}
}
