/* Q:03
Write a program that takes three numbers and finds the largest number using nested if.
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter number one: ");
    scanf("%d", &num1); 
    printf("Enter number two: ");
    scanf("%d", &num2);
    printf("Enter number three: ");
    scanf("%d", &num3);

    
    if (num1>num2) {
        if (num1>num3)
            printf("Num1 is largest\n");
        else
            printf("Num3 is largest\n");   
    }
    
    else {
        if (num2>num3)
            printf("Num2 is largest\n");
        else
            printf("Num3 is largest\n");    
    }
        

}
