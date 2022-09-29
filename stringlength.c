#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	int len;
	printf("\n enter strings=");
	//scanf("%s",&s1);
	gets(s1);
	printf("\n string is =%s",s1);
	len=strlen(s1);
	printf("\n length of string=%d",len);
}
