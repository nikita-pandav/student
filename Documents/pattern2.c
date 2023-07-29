#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
	int i=1;
	int k=0;
	int p=1;
	while(i<=n)
	{
	    int j=n;
	     while(j>=i)
	     {
	        printf("%d",j);
	     j--;
	     }
	     	int y=1;
	     	while(y<=k)
	     	{
	     	   printf(" ");
	     	y++;
	     	}
	     	    int t=p;
	     	    while(t<=n)
	     	    {
	     	    	printf("%d",t);
	     	    t++;
	     	    }
	     	    printf("\n");
	i++;
	p++;
	k = k+2;
	}
return 0;
}
