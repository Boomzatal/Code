#include <stdio.h>
#include <math.h>
int main(void)
{
    int x,y;
    printf("Enter base  ");
    scanf("%d",&x);
    printf("Enter exponent ");
    scanf("%d",&y);
    printf("%d^%d = %.2f\n",x,y,pow(x,y));
    return 0;
}