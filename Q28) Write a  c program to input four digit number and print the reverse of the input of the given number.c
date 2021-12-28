#include<stdio.h>
 main()
{
	int n,i,rev=0,rem=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=4;i++)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("reverse of given number  is %d",rev);
}
