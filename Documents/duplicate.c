#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
		int y[n];
		for(int i=0; i<n; i++)
		{
			scanf("%d",&y[i]);
		}
			int p[n];
			int k=0;
			for(int i=0; i<n; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(y[i]==y[j])
					{
						p[k]=y[i];
						k++;
					}
				}
			}
			for(int i=1; i<k; i++)
			{
				int c=1;
				for(int j=i+1; j<k; j++)
				{
				
					if(p[i]==p[j])
					{
						c=c+1;
					}
				}
				if(c==1)
				{
					printf("%d",p[i]);
				}
			}
return 0;
}
