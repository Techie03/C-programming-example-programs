#include<stdio.h>
void main()
{
	int n,i;
	i=1;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
    }
}
