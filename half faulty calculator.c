#include<stdio.h>
main()
{
	int n1,n2,n4;
	char n3;
	printf("\n enter the num1=");
	scanf("%d",&n1);
	printf("\n enter the num2=");
	scanf("%d",&n2);
	printf("\n enter the operator=");
	scanf(" %c",&n3);
	if(n1==45 && n2==3 && n3=='*')
	{
		printf("555");
	}
	else if(n1==56 && n2==9 && n3=='+')
	{
		printf("77");
	}
	else if(n1==56 && n2==6 && n3=='/')
	{
		printf("4");
	}
	else if(n3=='*')
	{
		n4=n1*n2;
		printf("\n result=%d",n4);
	}
	else if(n3=='+')
	{
		n4=n1+n2;
		printf("\n result=%d",n4);
	}
	else if(n3=='/')
	{
		n4=n1/n2;
		printf("\n result=%d,n4");
	}
	else if (n3=='%')
	{
		n4=n1%n2;
		printf("\n result=%d,n4");
	}
}
