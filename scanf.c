#include <stdio.h>
int main(void)
{
    char grade;
    int age;
    float gpa;
    double nextgpa;
    printf("Enter Grade: ");
    scanf("%c",&grade);
    printf("Enter Age: ");
    scanf("%d",&age);
    printf("Enter Gpa: ");
    scanf("%f",&gpa);
    printf("Enter Next Gpa: ");
    scanf("%lf",&nextgpa);
    printf("Your Grade is \t\t= %c\n",grade);
    printf("Your Age is \t\t= %d\n",age);
    printf("Your Gpa is \t\t= %.2f\n",gpa);
    printf("Your Next Gpa is \t= %.4f\n",nextgpa);
    return 0;

}