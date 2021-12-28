/* write a  c program to check the reverse of the number*/
#include <stdio.h>
int main() 
{
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) 
	{
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reverse of given number = %d", rev);
    
    return 0;
}


