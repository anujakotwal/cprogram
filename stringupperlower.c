#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("\n enter first string=");
	gets(s1);
	strupr(s1);
	printf("\n uppercase=%s",s1);
	printf("\n enter second string=");
	gets(s2);
	strlwr(s2);
	printf("\n lowercase=%s",s2);
}
