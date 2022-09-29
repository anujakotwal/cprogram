#include<stdio.h>
#define MAX_SIZE 100
main()
{
	int a[MAX_SIZE];
	int i,size,num,pos;
	printf("enter size of the array=");
	scanf("%d",&size);
	
	printf("\n enter element in array=");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to insert=");
	scanf("%d",&num);
	printf("enter the element position=");
	scanf("%d",&pos);
	
	if(pos>size+1 || pos<=0)
	{
		printf("invalid position %d",size);
	}
	else
	{
		for(i=size;i>=pos;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=num;
		size++;
		printf("array element after insert=");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
