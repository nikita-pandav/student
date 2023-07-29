#include <stdio.h>
int main()
{
    int i=0;
    int l[20];
    while(i<=20)
    {
    	l[i] = i;
    i++;
    }
    	int j=0;
    	while(j<=20)
    	{
    	    printf("%d",l[j]);
    	j++;
    	}
 return 0;
 }
