#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter the value n=");
	scanf("%d",&n);
	printf("\n no of square cube=");
	for(i=1;i<n+1;i++)
	{
		printf("%d \t %d \t %d\n",i,i*i,i*i*i);
	}
}
