#include<stdio.h>
int main()
{
	float r,a,p,PI;
	PI=3.14;
	printf("enter radius of a circle");
	scanf("%f" , &r);
	a=PI*r*r;
	p=2*PI*r;
	printf("area of the circle is %f",a);
	printf("\nperimeter %f",p);
	}
