#include <stdio.h>
int main()
/*
{
int I[6]={1,2,5,7,9,6};
int i;
printf("Enter the value less than 6: ");
scanf("%d",&i);
printf("%d",I[i]);
return 0;
}
*/



{
int I[7]={1,2,3,4,5,6,7};
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
	int i=0;
	while(i<7)
	{
		if(I[i]==n)
		{
			printf("No. is exist in list");
		}
	i++;
	}
	printf("No is not exist in list");
return 0;
}
