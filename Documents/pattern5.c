#include <stdio.h>
int main()
{
int n;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   	int i=1;
   	while(i<=n)
   	{
   	    int j=1;
   	    while(j<=n)
   	    {
   	    	if(j<=i)
   	    	{
   	    	    printf("%d",i);
   	    	}
   	    	else
   	    	{
   	    	    printf("%d",j);
   	    	}
   	    j++;
   	    }
   	printf("\n");
   	i++;
   	}
 return 0;
 }
   
   
