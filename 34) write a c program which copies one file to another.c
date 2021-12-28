/* write a c program which copies content one file to another*/
#include<stdio.h>
#include<string.h>
void main()
{
	FILE *f1,*f2;
	char s,c;
	f1=fopen("hi.txt","w");
	puts("enter data to hi file");
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
	f1=fopen("hi.txt","r");
	f2=fopen("bye.txt","w");
	puts("data copied");
	while((s=getc(f1))!=EOF)
	{
	putc(s,f2);
	fprintf(stdout,"%c",s);
	}
	fclose(f1);
	fclose(f2);
	getch();
}
