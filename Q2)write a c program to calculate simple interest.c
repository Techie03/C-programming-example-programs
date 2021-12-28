#include<stdio.h>
void main()
{
	float p,t,r,si,ta;
	printf("enter principle, time, rate values");
	scanf("%f%f%f", &p, &t ,&r);
	
	
	si=(p*t*r)/100;
	ta=si+p;
	
	printf("simple interest value is %f",si);
	printf("total amount %f",ta);
	
}
