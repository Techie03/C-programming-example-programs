/* write a  c program to find the indiividual digits of a positive integer */
#include<stdio.h>
void main()
{
	int num,sum=0,rem=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		
	}
	printf("sum of the digits is %d\n",sum);
}


