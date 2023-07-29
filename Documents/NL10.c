#include <stdio.h>
int main()
{			
	int n;
	printf("Entert the value of n: ");
	scanf("%d",&n);
		for(int i=1; i<=n; i++)
		{
			for(int j=n-i; j>0; j--)
			{
				printf(" ");
			}
				for(int k=1; k<=i; k++)
				{
					printf("*");
				}
		printf("\n");
		}
		
		int i=n-1;
		while(i>0)
		{
			int y=n-i;
			int j=1;
			while(j<=n)
			{
				if(j<=y)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			j++;
			}
		printf("\n");
		i--;
		}
		
return 0;
}
