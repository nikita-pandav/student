#include <stdio.h>
int main()
{
int n;
   printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int i=n;
   	while(i>=1)
   	{
   	     int j=1;
   	     int k=n;
   	     while(j<=i)
   	     {
   	     	//printf("%d",k);
   	     	printf("%d",j);
   	     j++;
   	     //k--;
   	     }
   	 printf("\n");
   	i--;
   	}
 return 0;
 }
