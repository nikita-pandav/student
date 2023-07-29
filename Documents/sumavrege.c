#include <stdio.h>
int main()
{
int n,a;
int l[n];
	printf("Enter the value of n: ");
	scanf("%d",&n);
int sum =0;
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&l[i]);
		sum = sum+l[i];
	}
a = sum/n;
printf("%d %d",sum,a);
return 0;
}
