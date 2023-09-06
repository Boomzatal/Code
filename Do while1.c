#include <stdio.h>
int main(void)
{
  int x,y,z=1,b=1;
 
  do
  {
    printf("Problem: 2*3=? \n");
    printf("ANS = ");
    scanf("%d",&x);

    if(x==6)
    {
        printf("Yeah !!!");
        break;
    }
    else
    {
        printf("Wrong!!!\n");
    }
    
  }while(b=2);
  
  return 0;
}