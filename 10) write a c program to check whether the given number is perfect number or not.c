/*write a c program to check whether the given number is perfect number or not*/
#include<stdio.h>
void main()
{
	int n,s,i;
	printf("enter the number:");
	scanf("%d",&n);
	{
		s=0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				s=s+i;
			}
		}
	}
	if(s==n)
	printf("\nThe number is perfect!!");
	else
	printf("\nThe number is not perfect!!");
}

