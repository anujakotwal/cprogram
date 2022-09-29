#include<stdio.h>
#include<string.h>
main()
{
	char s1[20] , s2[20];
	printf("\n enter 1st string=");
	gets(s1);
	
	printf("\n enter 2nd string=");
	gets(s2);
	
	strcat(s1,s2);
	printf("\n concatinated strings=%s",s2);
}
