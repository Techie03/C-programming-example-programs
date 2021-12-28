/* write a c program to find the factorial of a given integer (non- recursive) */
#include<stdio.h>
void main()
{
	int n,fact=1,i;
	printf("enter the number to find the factorial\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of given number %d is %d",n,fact);
	getch();
}
