#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
	printf("0\n");
	int i=2;
	int k=2;
	while(i<=n)
	{
	    int j=1;
	    int y=k*2;
	    while(j<=i)
	    {
	    	if(j==1)
	    	{
	    	    printf("%d",k);
	    	}
	    	else
	    	{
	    	    printf("%d",y);
	    	}
	    j++;
	    }
	printf("\n");
	i++;
	k*=2;
	}
return 0;
}
