/* write a c program to delete n characters from a given position in a given string using function*/
#include <stdio.h>
#include <string.h>
void delstring(char str[100],int n,int i);
void main()
{
char str[100];
int i,n;
printf("\nEnter the main string:");
gets(str);
printf("\nEnter the number of characters you want to delete:");
scanf("%d",&n);
printf("\nEnter the position from where you want to delete:");
scanf("%d",&i);
delstring(str,n,i);
getch();
}
void delstring(char str[100],int n,int i)
{
char temp[100];
int m,k,j;
m=strlen(str);
for(j=0;j<i;j++)
{
temp[j]=str[j];
}
for(j=i+n,k=i;j<m,k<m-n;j++,k++)
temp[k]=str[j];
puts(temp);
} 

