#include<stdio.h>
main()
{
	char s1[20];
	int len;
	printf("\n enter strings=");
	scanf("%s",&s1);
	printf("\n string is=%s",s1);
	
	strrev(s1);
	printf("\ string reverse=%s",s1);
}
