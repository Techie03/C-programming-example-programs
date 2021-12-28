/* write a  c program to find the gcd of two given integers(non-recursion)*/
#include<stdio.h>
void main()
{
	int a,b,rem;
	printf("enter two numbers to find gcd:\n");
	scanf("%d%d",&a,&b);
	while(b%a!=0)
	{
		rem=b%a;
		b=a;
		a=rem;
	}
	printf("The gcd of given number is %d",a);
	getch();
}
