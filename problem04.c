/* Q:04
A bank approves a loan if: Salary ≥ 40,000 AND Age ≥ 25, Otherwise loan is rejected. Write a program to ask salary and age,
then display whether the loan is approved or not.
*/

#include <stdio.h>

int main(void)
{
    int salary, age;

    printf("Enter your salary: ");
    scanf("%d", &salary);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (salary >= 40000 && age >= 25)
        printf("Your loan is approved\n");
       
    else
        printf("Your loan is rejected\n");
    
    return 0;
}
