#include<stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int i=1;
   	int k=1;	
   	while(i<=n)
   	{
   	     int j=1;
   	     while(j<=i)
   	     {
   	     	printf("%d",k);
   	     j++;
   	     }
   	printf("\n");
   	k+=2;
   	i++;
   	}
  return 0;
  }
