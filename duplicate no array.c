#include<stdio.h>
main()
{
	int a[10],i,j,size,count=0;
	printf("\n enter no of element in array=");
	scanf("%d",&size);
	printf("\n enter %d element in array=",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
	
       for(j=i+1;j<size;j++)
    {
	if(a[i]==a[j])
	{
		count++;
		break;
	}
     }
}
printf("\n no of duplicate element in array=%d",count);
return 0;
}
