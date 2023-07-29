#include <stdio.h>
int main ()
{
int n,m;
printf("Enter the value of n: ");
scanf("%d",&n);
printf("Enter the value of m: ");
scanf("%d",&m);
	int i=1;
	while(i<=m)
	{
	    int j=1;
	    while(j<=n)
	    {
	         printf("*");
	    j++;
	    }
	 printf("\n");
	i++;
	}
return 0;
}
