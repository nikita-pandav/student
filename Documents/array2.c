#include <stdio.h>
int main()
{
    int i=1;
    int l[5];
    int a;
    while(i<=5)
    {
    	printf("Enter a number");
    	scanf("%d",&a);
    	l[i]=a;
   i++;
    }
    	int j=1;
    	while(j<=5)
    	{
    	    printf("%d\n",l[j]);
    	j++;
    	}
   return 0;
   }
