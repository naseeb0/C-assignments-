#include<stdio.h>

int main(){
    int units, amount, totalAmount;
    printf("Enter The Unit of Electricity");
    scanf("%d", &units);
    if (units<=50)
        amount = units*20;
    else if (units<=150)
        amount = (50*20)+ (units-50)*10;
    else if(units<=250)
        amount = (50*20)+(100*10)+ (units-150)*12;
    
    else if (units>250)
        amount = (50*20)+(100*10)+(100*12)+(units-250)*15;
    totalAmount = (0.2 * amount) + amount;
    printf("Total Amount to be paid = Rs.%d", totalAmount);
    return 0;
    
}
