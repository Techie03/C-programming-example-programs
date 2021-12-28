#include<stdio.h>
void main()
{
	float r,a,p,pi;
	pi=3.14;
	printf("enter radius of a circle");
	scanf("%f" , &r);
	a=pi*r*r;
	p=2*pi*r;
	printf("area of the circle is %f",a);
	printf("\nperimeter %f",p);
	}
