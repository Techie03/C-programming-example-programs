/* c program to check whether the given number is palindrome or not*/
#include<stdio.h>
void main()
{
	int n,s,r,temp;
	printf("enter the number:");
	scanf("%d",&n);
	s=0;
	temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(temp==s)
	printf("%d is a palindrome number",temp);
	else
	printf("%d is not a palindrome number",temp);
}
