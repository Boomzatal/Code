#include <stdio.h>
int main(void)
{
    int i,j,A=0,B=0,C=0,D=0,F=0;
    for (i=1;i<=5;i++)
    {
        printf("Enter score[%d]: ",i);
        scanf("%d",&j);
        if (j>=80)
         A++;
        else if (j>=70)
         B++;
        else if (j>=60)
         C++; 
        else if (j>=50)
         D++;
        else
         F++;
    }
    printf("Grade A = %d\n",A);
    printf("Grade B = %d\n",B);
    printf("Grade C = %d\n",C);
    printf("Grade D = %d\n",D);
    printf("Grade F = %d",F);
    return 0;
}
