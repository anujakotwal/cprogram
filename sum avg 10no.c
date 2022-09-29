#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
	}
    
	avg=sum/10;
	printf("\nsum=%d\n",sum);
	printf("%f",avg);
	return 0;
}
