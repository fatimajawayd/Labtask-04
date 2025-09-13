/* 
A cinema charges ticket prices based on age: Age<12 → 200, Age 12-18 → 300, Age 18–60 → 500, Age>60 → 250, 
Write a program to calculate ticket price based on age entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int age, price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12)
        price = 200;
    else if (age >= 12 && age <= 18)
        price = 300;
    else if (age >= 18 && age <= 60)
        price = 500;
    else
        price = 250;
    
    printf("The price of the ticket is %d", price);
    return 0;    
}
