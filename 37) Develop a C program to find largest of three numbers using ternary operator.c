/* Develop a C program to find largest of three numbers using ternary operator*/
#include<stdio.h>
void main()
{
	int a, b, c, larg;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	larg = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest number is: %d", larg);
	getch();
}