/* write a  c program to generate a fibonacci series */
#include<stdio.h>
void main()
{
	int n,a=0,b=1,c=0,i=0;
	printf("enter the number of elements in fibonaci series\n");
	scanf("%d",&n);
	printf("the fibonacci series is:\n");
	printf("%d\t%d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}
