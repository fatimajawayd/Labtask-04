/* Q:01
A shopkeeper gives a discount of 10% if the total bill is more than 5000, otherwise
no discount.
Write a program to ask the user for the bill amount and display the final payable
*/

#include <stdio.h>

int main(void)
{
    int amount;
    int amount2;

    printf("Enter the bill amount: ");
    scanf("%d", &amount);
     
    if( amount > 5000)
        amount2 = amount - (amount *10)/100;
    else 
        amount2 = amount;
        
    printf("The final payable amount is %d", amount2);    
    
    return 0;
}
