//This is program no 2.
// THIS PROGRAME IS FOR FINDING SUM OF N NUMBERS.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
	printf("sum of %d natural numbers is %d\n",n,sum);
	return 0 ;
}
