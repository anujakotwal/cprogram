#include<stdio.h>
#include<conio.h>
 int main()
{
	int a[1000],i,n,even=0,odd=0;
	
	printf("enter size in array=");
	scanf("%d",&n);
	
	printf("enter element in array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("even no in array=%d",even);
	printf("odd number in array=%d",odd);
}
