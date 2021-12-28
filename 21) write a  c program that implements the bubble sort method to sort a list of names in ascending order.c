/* write a  c program that implements the bubble sort method to sort a list of names in ascending order */
#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,count;
	char str[25][25],temp[25];
	printf("enter number of names\n");
	scanf("%d",&count);
	printf("enter string one by one");
	for(i=0;i<=count;i++)
	{
	gets(str[i]);
	}
	for(i=0;i<=count;i++)
	{
	for(j=i+1;j<=count;j++)
	{
	if (strcmp(str[i],str[j])>0)
	
	{
	strcpy(temp,str[i]);
	strcpy(str[i],str[j]);
	strcpy(str[j],temp);
    }
	}
	}
	printf("sorted strings are:");
	for(i=0;i<=count;i++)
	puts(str[i]);
	getch();
}
