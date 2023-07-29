#include <stdio.h>
int main()
{
int n;
int sum;
	printf("Enter the value of n: ");
	scanf("%d",&n);
		int i=1;
		while(i<=n)
		{
		sum = sum+i;
		i++;
		}
	printf("%d",sum);
return 0;
}
