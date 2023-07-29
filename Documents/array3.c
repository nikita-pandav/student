#include <stdio.h>
int main()
{
 int l[6]={5,4,9,2,1,0};
 int i=6-1;
 int k[6];
 int j=0;
      while(i>0)
      {
      	k[i]=l[j];
      i--;
      j++;
      	}
      	for(int i=0;i<6;i++)
      	{
      	     printf("%d",k[i]);
      	}
 return 0;
 }
 
