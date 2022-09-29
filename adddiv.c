#include<stdio.h>
int main()
{
	int sum,n,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%5==0)
		{   sum=sum+i;
		}
	}printf("%d",sum);
}
