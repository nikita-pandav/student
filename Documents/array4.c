#include <stdio.h>
int main()
{
int I[8]={1,2,3,4,5,6,7,8};
int l[8];
int i=0;
int j=0;
	while(i<=8)
	{
		l[j]=I[i];
	i=i+2;
	j++;
	}
		for(int i=0; i<=8; i++)
		{
			printf("%d",l[i]);
		}
return 0;
}

