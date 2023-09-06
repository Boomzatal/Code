#include <stdio.h>
int main(void)
{
    int weight, height;
    float BMI,hMeter;
    printf("Enter your Height ");
    scanf("%d",&height);
    printf("Enter your Weight ");
    scanf("%d",&weight);
     
     hMeter	= height/100.0;
     BMI = (float)weight/(hMeter*hMeter);
     
     if(BMI<18.5)
     {
        printf("Too thin\n");
     }
    else if(BMI>=18.5&&BMI<=22.9)
    {
        printf("Good\n");
    }
    else if(BMI>22.9&&BMI<=24.9)
    {
        printf("Little Fat\n");
    }
    else if(BMI>24.9&&BMI<=29.9)
    {
        printf("Big Fat");
    }
    else if(BMI>29.9)
    {
        printf("Dangerous Fat\n");
    }
    return 0;
}