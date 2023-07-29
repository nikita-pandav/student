#include <stdio.h>
int main()
{
int n;
   printf("ENTER THE VLAUE OF N: ");
   scanf("%d",&n);
   	int i=1;
   	int j=0;
   	while(i<=n)
   	{
   	     int j=j+i;
   	     int k=1;
   	     int m=j;
   	     while(k<=i)
   	     {
   	     	if(k==1)
   	     	{
   	     	    printf("%d",j);
   	     	}
   	     	else
   	     	{
   	     	    printf("%d",m);
   	     	}
   	     k++;
   	     m--;
   	     }
   	printf("\n");
   	i++;
   	}
 return 0;
 }
