#include<stdio.h>
main()
{
	int math, phy,chem, total;
	printf("\n enter the marks of 3 sub=");
	scanf("%d%d%d",&math,&phy,&chem);
	if(math>=65 || phy>=55 || chem>=50 || total>=180)
	{
		printf("\n eligible");
	}
	else
	{
		printf("\n not eligible");
	}
	

	
}

