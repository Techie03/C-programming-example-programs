/* write a c program that uses non recursive function to search for a key value in a given sorted list of integers using binary search*/
#include<stdio.h>
void main()
{
 int a[20], i, n, key, low, high, mid;
 printf("Enter the size of the array\n");
 scanf("%d", &n);
 printf("Enter the array elements in ascending order\n");
 for(i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("Enter the key element\n");
 scanf("%d", &key);
 low = 0;
 high = n - 1;
 while(high >= low)
 {
  mid = (low + high) / 2;
  if(key == a[mid])
   break;
  else
  {
   if(key > a[mid])
    low = mid + 1;
   else
    high = mid - 1;
  }
 }
 if(key == a[mid])
  printf("The key element is found at location %d", mid + 1);
 else
  printf("the key element is not found");
 getch();
} 

