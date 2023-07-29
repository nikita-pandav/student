#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	char name[n][30];
	for(int i=0;i<n;i++)
		{
			scanf("%s",&name[i]);
		}
	for(int i=0;i<n;i++)
		{
			printf("%s  ",name[i]);
		}
return 0;
}
