#include <stdio.h>
int main(void)
{
    int x,y,z,r;
    printf("Enter row: ");
    scanf("%d",&r);
    for (x=1;x<=r;x++)
    {    
        for (int y=r;y>x;y--)
        {
            printf(" ");
        }
        for (z=1; z<=x;z++)
        {
            printf("*");  
        }
        printf("\n");
    }
    return 0;

    
}