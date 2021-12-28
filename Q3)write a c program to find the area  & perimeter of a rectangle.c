#include<stdio.h>
void main()
{
	int l,b,a,p ;
	printf("enter length and breadth values ");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("area is %d",a);
	printf("perimeter is %d",p);
}
