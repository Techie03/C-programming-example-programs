/* write a c program to find substring in a given string */
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[90],str2[10],r[40];
	int i,j;
	puts("enter string");
	gets(str1);
	puts("enter sec string");
	gets(str2);
	for(i=0;str1[i]!='0';i++)
	{
		for(j=0;str2[j]!='0';j++)
		{
			if(str1[i]==str2[j])
			r[j]=str2[j];
		}
	}
	r[i]='\0';
	if(strcmp(r,str2)==NULL)
	printf("%s is substr found",r);
	else
	printf("%s is not sub",r);
	getch();	
}
