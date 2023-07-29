#include<stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int i=n;
   	while(i>0)
   	{
   	    int j=1;
   	    while(j<=i)
   	    {
   	    	printf("*");
   	    	//printf("%d",n);
   	    	//printf("%d",i);
   	    j++;
   	    }
   	 printf("\n");
   	 i--;
   	}
  return 0;
  }
