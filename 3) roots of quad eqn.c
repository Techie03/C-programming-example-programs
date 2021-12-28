/* c program for finding roots of quadratic equations*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,d,root_part;
	printf("Enter a,b and c");
	scanf("%f%f%f",&a,&b,&c);
	root_part= sqrt(b*b-4*a*c);
	d=2*a;
	root1=(-b+root_part)/d;
	root2=(-b-root_part)/d;
	printf("root1=%f\nroot2=%f\n",root1,root2);
	if(root_part>=0)
	printf("roots exist\n");
	else
	printf("roots are imaginary\n");
	return 0;
}
