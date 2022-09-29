#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,per,grade,sum;
	printf("\n enter the 5 subject marks=");
	scanf("%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\n sum = %d",sum);
	per=sum*100/500;
	printf("\n per = %d",per);
	if(per>=90)
	{
		printf("\n grade is A");
	}
	else if(per>=80)
	{
		printf("\n grade is B");
	}
	else if(per>=70)
	{
		printf("\n grade is C");
	}
	else if(per>=60)
	{
		printf("\n grade is D");
	}
	else if (per>=40)
	{
		printf("\n grade is E");
	}
	else if(per<40)
	{
		printf("\n grde is F");
	}
	else
	{
		printf("\n fail");
	}
}
