/* write a c program to find the factorial of a given integer (recursion) */
#include<stdio.h>
long int multiplyNumbers(int n);
int main() 
{
    int n;
    printf("Enter a number to find the factorial:");
    scanf("%d",&n);
    printf("The factorial of  %d is %d", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) 
{
    if (n>=1)
    return n*multiplyNumbers(n-1);
    else
    return 1;
}
