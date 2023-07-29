#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		for(int j=1; j<=i; j++)
		printf("%d",j);
	printf("\n");
	i++;
	}
return 0;
}
