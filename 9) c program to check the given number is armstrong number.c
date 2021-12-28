/*write a  c program to find whether the given number is armstrong number or not*/
#include<stdio.h>
void main()
{
	int n,t,r,s;
	{
		printf("enter the number:");
		scanf("%d",&n);
		t=n;
		s=0;
		while(t!=0)
		{
			r=t%10;
			t=t/10;
			s=s+r*r*r;
		}
		if(s==n)
		printf("\nThe given number is armsotrong number!");
		else
		printf("\nThe given number is not armsotrong number!");
		
	}
}
