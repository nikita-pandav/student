#include <stdio.h>
int main()
{
int n;
   printf("Enterr the value of n: ");
   scanf("%d",&n);
   	int i=n;
   	while(i>=1)
   	{
   	    printf("0");
   	    int j=1;
   	    while(j<=i)
   	    {
   	    	printf("%d",j);
   	    j++;
   	    }
   	printf("\n");
   	i--;
   	}
return 0;
}
