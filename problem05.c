/* Q:05
A calculator program: Ask the user to enter two numbers and a choice: Addition, Subtraction, Multiplication, Division. 
Perform the selected operation using switch case.
*/

#include <stdio.h>

int main(void)
{
    float num1, num2;
    char choice;

    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);

    printf("Choose + for Addition, - for Subtraction, * for Multiplication, / for Division: ");
    scanf(" %c", &choice);

    switch(choice){
       case '+':
           printf("Addition: %f\n", num1+num2);
           break;
       case '-':
           printf("Subtraction: %f\n", num1-num2);
           break;
       case '*':
           printf("Multiplication: %f", num1*num2);
           break;
       case '/':
           if (num2 != 0)
               printf("Division: %f\n", num1/num2);
           else
               printf("Undefined: Divided by zero\n");
           break;

    default:
           printf("No choice\n");

       return 0;
}     
