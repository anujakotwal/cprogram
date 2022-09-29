#include<stdio.h>
main()
{
	int a,b,c,max,valid;
	printf("\n enter the first side of traingle");
	scanf("%d",&a);
	printf("\n enter the second side of traingle");
	scanf("%d",&b);
	printf("\n enter the third side of traingle");
	scanf("%d",&c);
	
	max=a;
	max=b;
	max=c;
	if(max==a && a<(b+c))
	valid=1;
	
	if(max==b && b<(a+c))
	valid=1;
	
	if(max==c && c<(a+b))
	valid=1;
	
	if(valid==1)
	{
		printf("\n triangle is valid");
	}
else
{
	printf("\n traingle is not valid");
}
		
	
	
}
