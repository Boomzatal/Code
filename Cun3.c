#include <stdio.h>
int main(void)
{
    int i,s,e,b;
    
    printf("Enter base\t: ");
    scanf("%d",&b);
    printf("Enter start\t: ");
    scanf("%d",&s);
    printf("Enter end\t: ");
    scanf("%d",&e);
    for (i=s;i>=e;i--)
    {
        printf("%d x %d\t= %d\n",b,i,i*b);
    }
    printf("\n");
    return 0;
}
