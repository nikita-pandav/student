#include <stdio.h>
int main()
{
	int n,a;
	printf("Enter the value of n: ");
	scanf("%d",&n);
		int l[n];
		for(int i=0; i<n; i++)
		{
			scanf("%d",&a);
			l[i]=a;
		}
			int y[n];
			int i=0;
			while(i<n)
			{
				int j=l[i];
				y[i]=j;
			i++;
			}
				if(l==y)
				{
					printf("consecative list");
				}
				else
				{
					printf("Non consecative list");
				}
return 0;
}
