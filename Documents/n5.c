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
	     while(j<=i)
	     {
	     	printf("%d",i);
	     j++;
	     }
	printf("\n");
	i++;
	}
return 0;
}
