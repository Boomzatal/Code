#include <stdio.h>
int main(void)
{
    int x=1,y=1;

    while (y<=12)
    {
        printf("2 * %d = %d\n",x,x*2);
        y++;
        x++;
    }
    return 0;
}