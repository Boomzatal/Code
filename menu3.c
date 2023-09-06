#include <stdio.h>
int main(void)
{
int menu1,menu2,menu3;
int a1,a2,a3;
	
    printf("Menu:\n");

	printf("1) Papaya Salad          Price 40 Bath\n");

	printf("2) Grilled Chicken       Price 80 Bath\n");

	printf("3) Sticky Rice           Price 10 Bath\n");

	printf("Enter Menu Number 1: ");
	scanf("%d",&menu1);
    printf("Enter Menu Number 2: ");
	scanf("%d",&menu2);
    printf("Enter Menu Number 3: ");
	scanf("%d",&menu3);
    
    
    printf("First order is ");
    switch (menu1)
    {
    case 1:
        printf("Papaya Salad (40 Bath)\n");
        a1=40;
        break;
    
    case 2:       
        printf("Grilled Chicken (80 Bath)\n");
        a1=80;
        break;
    
    case 3:
        printf("Sticky Rice (10 Bath)\n");
        a1=10;
        break;
    
    default:
        printf("Incorrect order\n");
        break;
    }
    printf("Second order is ");
    switch (menu2)
    {
    case 1:
        printf("Papaya Salad (40 Bath)\n");
        a2=40;
        break;
    
    case 2:       
        printf("Grilled Chicken (80 Bath)\n");
        a2=80;
        break;
    
    case 3:
        printf("Sticky Rice (10 Bath)\n");
        a2=10;
        break;
    
    default:
        printf("Incorrect order\n");
        break;
    }
    printf("Third order is ");
    switch (menu3)
    {
    case 1:
        printf("Papaya Salad (40 Bath)\n");
        a3=40;
        break;
    
    case 2:       
        printf("Grilled Chicken (80 Bath)\n");
        a3=80;
        break;
    
    case 3:
        printf("Sticky Rice (10 Bath)\n");
        a3=10;
        break;
    
    default:
        printf("Incorrect order\n");
        break;
    }

printf("Total price is %d+%d+%d=%d",a1,a2,a3,a1+a2+a3);

return 0;
    
}