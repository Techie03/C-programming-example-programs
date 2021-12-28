#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
	{
        printf("\n%d is the smallest",a);
    }
    else if(b<c)
	{
        printf("\n%d is the smallest",b);
    }
    else
	{
        printf("\n%d is the smallest",c);
    }
    if(a>b && a>c)
	{
        printf("\n%d is largest",a);
    }
    else if(b>c){
        printf("\n%d is largest",b);
    }
    else
	{
        printf("\n%d is largest",c);
    }
    getch();
    return 0;
}

