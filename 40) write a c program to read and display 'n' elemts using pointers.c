/* write a c program to read and display 'n' elements using pointers */
#include<stdio.h>
int main()
{
    int a[5]= {1,2,3,4,5};
    int *p=&a[0];
    int i;
    for(i=0; i<5; i++)
    printf("\nArray[%d] is %d ",i,*(p+i));
    for(i=0; i<5; i++)
    printf("\n %d at %u ",*(p+i),(p+i));
    return 0;
}
