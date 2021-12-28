#include<stdio.h>
void main()
{
	int sal,age;
	printf("enter the salary\n");
	scanf("%d",&sal);
	printf("enter the age of a person\n");
	scanf("%d",&age);
	if (age>=65)
	{
		sal=sal+1000;
	}
	printf("salary of the person is  %d",sal);
}
