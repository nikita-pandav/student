#include <stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int i=n;
   	int k=0;
   	while(i>=1)
   	{
   	    int j=0;
   	    while(j<k)
   	    {
   	    	printf(" ");
   	    j++;
   	    }
   	    	int p=1;
   	    	while(p<=i)
   	    	{
   	    	    printf("*");
   	    	p++;
   	    	}
   	printf("\n");
   	i--;
   	k++;
   	}
  return 0;
  }
