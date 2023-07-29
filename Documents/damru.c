#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
		int i=n;
		int j=0;
		while(i>0)
		{
			int k=1;
			while(k<=i)
			{
				if(k<=j)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			k++;
			}
		printf("\n");
		i--;
		j++;
		}
return 0;
}
