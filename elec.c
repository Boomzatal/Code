#include <stdio.h>
int main(void)
{
    float elecprice=10.25,waterprice= 50.50;
    char name[101];
    int elecunit,waterunit;
    double totalwater,totalelec,total;

    printf("Enter your name ");
    scanf("%s",&name);
    printf("Enter your elec unit ");
    scanf("%d",&elecunit);
    printf("Enter your water unit ");
    scanf("%d",&waterunit);
    
    totalelec=elecprice*elecunit;
    totalwater=waterprice*waterunit;
    total=totalelec+totalwater;

    printf("Customer Name is %s\n",name);
    printf("Elec price per unit \t= %.2f\n",elecprice);
    printf("Water price per unit \t= %.2f\n",waterprice);
    printf("elec units  \t\t= %d\n",elecunit);
    printf("water units \t\t= %d\n",waterunit);
    printf("Elec total price \t= %.4f\n",totalelec);
    printf("Water total price \t= %.4f\n",totalwater);
    printf("Total \t\t\t= %.4f\n",total);
    
    return 0;
}