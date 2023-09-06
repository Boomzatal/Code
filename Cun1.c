#include <stdio.h>
int main(void)
{
    int i;

    for (i=12;i>=1;i--)
    {
        printf("2 x %d\t= %d\n",i,i*2);
    }
    printf("\n");
    return 0;
}
