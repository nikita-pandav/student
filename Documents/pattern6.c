#include <stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int  i=1;
   	while(i<=n)
   	{
   	    int j=1;
   	    int  k=i;
   	    while(j<=i)
   	    {
   	    	printf("%d",k);
   	    j++;
   	    k=k+i;
   	    }
   	printf("\n");
   	i++;
   	}
 return 0;
 }
