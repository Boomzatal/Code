#include <stdio.h>
int main(void)
{
  int x,y,z=1,b=1;
  printf("Enter my mul ");
  scanf("%d",&x);
  printf("Enter round ");
  scanf("%d",&y);

  do
  {
    printf("%d * %d = %d\n",x,b,x*b);
    b++;
    
  }while(b<=y);
  
  return 0;
}