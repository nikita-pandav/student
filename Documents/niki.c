#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n ");
scanf("%d",&n);
	int i=0;
	int k=n;
	while(i<n){
	int j=i+1;
		while(j<=k){
		printf("%d",j);
		j++;
		}
	printf("\n");
	i++;
	k++;
	}
return 0;
}
