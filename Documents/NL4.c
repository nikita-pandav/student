#include<stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int i=n;
   	int j=1;
   	while(i>0)
   	{
   	    int k=1;
   	    while(k<=j)
   	    {
   	    	printf("*");
   	    	//printf("%d",i);
   	    k++;
   	    }
   	 printf("\n");
   	 i--;
   	 j++;
   	}
  return 0;
  }
