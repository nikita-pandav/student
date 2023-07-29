#include <stdio.h>
int main()
{
int n,k;
int l[n];
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&l[i]);
	}
	scanf("%d",&k);
	int c=0;
	for(int i=0; i<n; i++)
	{
		if(l[i]==k)
		{
			c++;
		}
	}
	printf("%d",c);
return 0;
}
