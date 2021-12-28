#include<stdio.h>
void main()
{
	int a,b,min;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	min=(a<b)?a:b;
	printf("\nminimum value is %d",min);
}
