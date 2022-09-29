#include<stdio.h>
main()
{
  int n,i;
  printf("\n enter the number=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  
  	printf((i%3==0)||(i%5==0));
  
  {
  	printf("\n%d",i);
  }
}
