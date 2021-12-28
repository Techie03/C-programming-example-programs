#include<stdio.h>
 main()
{
	int n,i,sum=0,rem=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=4;i++)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digits is %d",sum);
}
