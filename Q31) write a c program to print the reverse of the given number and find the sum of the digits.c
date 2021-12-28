#include<stdio.h>
void main()
{
	int n,rev=0,rem=0,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		sum=sum+rem;
		n=n/10;
	}
	printf("reverse number is %d",rev);
	printf("\n sum of the digits is %d",sum);
}
