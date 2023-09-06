#include <stdio.h>
int main(void)
{
    int i,s,e;
    
    printf("Enter start\t: ");
    scanf("%d",&s);
    printf("Enter end\t: ");
    scanf("%d",&e);
    
    for (i=s;i<=e;i++)
    {
        printf("2 x %d\t= %d\n",i,i*2);
    }
    printf("\n");
    return 0;
}