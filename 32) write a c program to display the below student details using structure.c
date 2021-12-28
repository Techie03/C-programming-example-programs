/*write a c program to display the below student details using structure*/
#include <stdio.h>
struct student 
{
    char Name[50],Branch[40],Gender[40];
    int roll;
    float percentage;
} 
s[10];
int main() 
{
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 5; ++i) 
	{
    s[i].roll = i + 1;
    printf("\nFor roll number%d,\n", s[i].roll);
    printf("Enter Name:\n");
    scanf("%s", s[i].Name);
    printf("Enter Gender:\n ");
    scanf("%s", &s[i].Gender);
    printf("Enter Branch :\n");
    scanf("%s", &s[i].Branch);
    printf("Enter percentage: ");
    scanf("%f", &s[i].percentage);
    }
    printf("Displaying Information:\n\n");
    for (i = 0; i < 5; ++i) 
	{
    printf("\nRoll number: %d\n", i + 1);
    printf("Name: ");
    puts(s[i].Name);
    printf("Gender: ");
    puts(s[i].Gender);
    printf("Branch: ");
    puts(s[i].Branch);
    printf("percentage: %.1f", s[i].percentage);
    printf("\n");
    }
    return 0;
}

