#include<stdio.h>
main()
{
	int n1,n2;
	printf("\n enter two number find maximum =");
	scanf("%d%d",&n1,&n2);
	switch(n1>n2)
	{
		case 0:
			printf("%d is maximum",n2);
			break;
			
			case 1:
				printf("%d is maximum",n1);
				break;
	}
}

