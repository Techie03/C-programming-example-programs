/* c program on simple calculator*/
#include <stdio.h>

int main()
{
    char operator;
    float a,b;
    printf("Enter an operator (+, -, *,/,%): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f%f", &a, &b);

    switch (operator) 
	{
    case '+':
        printf("addition=%f\n",a+b);
        break;
    case '-':
        printf("subtraction=%f\n",a-b);
        break;
    case '*':
        printf("multiplication=%f\n",a*b);
        break;
    case '/':
        printf("division=%f\n",a/b);
        break;
    
    	
    
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

