#include <stdio.h>
int main()
{
int n;
 printf("ENTER THE VALUE OF N: ");
   scanf("%d",&n);
   	int  i=1;
   	int m=n*2;
   	int j=2;
   	while(i<=n)
   	{
   	     int k=1;
   	     while(k<=i)
   	     {
   	     	printf("*");
   	     k++;
   	     }
   	     	   int y=m-j;
   	     	   int p=1;
   	     	   while(p<=y)
   	     	   {
   	     	      printf(" ");
   	     	   p++;
   	     	   }
   	     	   	int r=1;
   	     	   	while(r<=i)
   	     	   	{
   	     	   	    printf("*");
   	     	   	r++;
   	     	   	}
   	printf("\n");
   	i++;
   	j+=2;
   	}
   	     int x=n-1;
   	     int z=2;
   	     while(x>0)
   	     {
   		int t=1;
   		while(t<=x)
   		{
   		    printf("*");
   		t++;
   		}
   			int a=1;
   			while(a<=z)
   			{
   			    printf(" ");
   			a++;
   			}
   				int b=1;
   				while(b<=x)
   				{
   				    printf("*");
   				b++;
   				}
   	     printf("\n");
   	     x--;
   	     z+=2;
   	     }
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
