/*write a c program to count the lines words and characters in given text*/
#include<stdio.h>
#include<string.h>
int main()
{
   char str[200];
   int line, word, ch,i;
   line = word = ch = 0;
   printf("Enter string terminated with ~ :\n");
   scanf("%[^~]", str);
   for(i=0;str[i]!='\0';i++)
   {
   if(str[i]=='\n')
   {
    line++;
    word++;
	}
	else 
	{
	if(str[i]==' '||str[i]=='\t')
	{
	word++;
	ch++;
    }
	else
	{
	ch++;
    }
    }
   }
   printf("\nCharacter counts = %d\n", ch);
   printf("Word counts = %d\n", word);
   printf("Line counts = %d\n", line);
   return 0;
}
