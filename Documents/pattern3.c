#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
	int i=n;
	while(i>=1)
	{
	    int j=1;
	    while(j<=i)
	    {
	    	printf("%d",j);
	    	if(j<n)
	    	{
	    	   printf("*");
	    	}
	    j++;
	    }
	printf("\n");
	i--;
	}
return 0;
}
