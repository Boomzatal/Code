#include <stdio.h>
int main(void)
{
    int x,y,z=0;

    printf("Problem: 2*3=?\n");
    printf("ANS = ");
    scanf("%d",&y);

    if(y==6)
    {
        printf("YEAH!!!");
    }
    else
    {
        while (z==0)
        {
            printf("Wrong!!!\n");
            printf("Try again\nProblem: 2*3=?\nANS = ");
            scanf("%d",&x);
            if (x==6)
            {
                printf("YEAH!!!\n");
                break;
            }
        }
        
       
    }
   return 0;
}