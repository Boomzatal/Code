#include <stdio.h>
int main(void)
{
char menu;
char a,b,c,A,B,C;
	
    printf("Menu:\n");

	printf("a) Papaya Salad\n");

	printf("b) Grilled Chicken\n");

	printf("c) Sticky Rice\n");

	printf("Enter Menu Number:");

	scanf("%s",&menu);
    
    switch (menu)
    {
    case '1':
    case 'a':
    case 'A':
        printf("Your order is Papaya Salad\n");
        break;
    
    case '2':
    case 'b':
    case 'B':        
        printf("Your order is Grilled Chicken\n");
        break;
    
    case '3':
    case 'c':
    case 'C':
        printf("Your order is Sticky Rice\n");
        break;
    
    default:
        printf("Incorrect order\n");
        break;
    }
return 0;
    
}