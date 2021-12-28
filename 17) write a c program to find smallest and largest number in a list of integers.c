/* write a c program to find smallest and largest number in a list of integers*/
#include <stdio.h>
void main()
{
   int a[10], i, large, small, n;
   printf("Enter the size of array\n");
   scanf("%d", &n);
   printf("Enter any %d integer array elements\n",n);
   for(i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }
   large = a[0];
   small = a[0];
   for(i = 1; i < n ; i++)
   {
      if(a[i] > large)
      {
    large = a[i];
      }
      if(a[i] < small)
      {
    small = a[i];
      }
   }
   printf("The largest element from the given array is %d \nThe smallest element  from the given array is %d", large, small);
   getch();
}
