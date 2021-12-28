#include <stdio.h>
#include<math.h>
void main() 
{
   float a,b,c,d,r1,r2,real,imag;
   printf("enter a,b,c values for quadratic equation");
   scanf("%f%f%f",&a,&b,&c);
   d=b*b-4*a*c;
   if(d>0)
   {
   	r1=(-b+sqrt(d))/(2*a);
    r2=(-b+sqrt(d))/(2*a);   
	printf("roots are equal and unequal\n");
	printf("roots are:%f\t\t%f",r1,r2);	
   }
   else if(d==0)
   {
   	r1=r2=-b/(2*a);
   	printf("roots are equal and equal\n");
	printf("roots are:%f\t\t%f",r1,r2);	
   }
   else
   {
   	real=(-b/(2*a));
   	imag=sqrt(-d/(2*a));
   	printf("roots are imaginary\n");
   	printf("roots are:%f+%fi\t%f-%fi",real,imag,real,imag);
   }
   getch();
}


