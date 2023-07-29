#include <stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int  i=1;
   	while(i<=n)
   	{
   	     int j=n-i;
   	     int k=1;
   	     while(k<=n)
   	     {
   	     if(k<=j)
   	     {
   	     	printf(" ");
   	     }
   	     else
   	     {
   	     	printf("*");
   	     }
   	     k++;
   	     }
   	printf("\n");
   	i++;
   	}
  return 0;
  }
