# Labtask-04
## PROBELM:01
*A shopkeeper gives a discount of 10% if the total bill is more than 5000, otherwise no discount. Write a program to ask the user for the bill amount and display the final payable amount.*

```c
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
```

## PROBLEM:02
*A cinema charges ticket prices based on age:
Age<12 → 200,
Age 12-18 → 300,
Age 18–60 → 500,
Age>60 → 250,
Write a program to calculate ticket price based on age entered by the user.*

```c
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
```

## PROBLEM:03
*Write a program that takes three numbers and finds the largest number using nested if.*

```c
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
```

## PROBLEM:04
*A bank approves a loan if: Salary ≥ 40,000 AND Age ≥ 25, Otherwise loan is rejected. Write a program to ask salary and age, then display whether the loan is approved or not.*

```c
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
```

## PROBLEM:05
*A calculator program: Ask the user to enter two numbers and a choice: Addition, Subtraction, Multiplication, Division. Perform the selected operation using switch case.*

```c
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

    switch(choice){   //chracter,numeric
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
```

## PROBLEM:06
*A program asks the user for their age. If they are 18 or older, print "Eligible to Vote",otherwise print "Not Eligible".*

```C
#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote\n");
    else
        printf("You are not egligible to vote\n");
        
    return 0;    
}
```

## PROBLEM:07
*A password checking system: If user enters "1234" then print access granted else print access denied.*

```c
#include <stdio.h>

int main(void)
{
    int password;

    printf("Enter user's password: ");
    scanf("%d", &password);

    if( password == 1234)
        printf("Access granted\n");
    else
        printf("Access denied\n");   
        
    return 0;    
}
```

## PROBLEM:08
*If the temperature is greater than 30°C, display "Hot Day", otherwise "Pleasant Day".*

```c
#include <stdio.h>

int main(void)
{
    int temp;
    printf("Enter the temp: ");
    scanf("%d", &temp);

    if (temp > 30)
        printf("Hot day!\n");
    else 
        printf("What a pleasent day!\n");

    return 0;

}
```

## PROBLEM:09 
*A student can only appear in the final exam if: Attendance ≥ 75% AND Internal marks ≥ 40.*

```c
#include <stdio.h>

int main(void)
{
    int attendance;
    int internalmarks;
     
    printf("Enter your attendance: ");
    scanf("%d", &attendance);
    
    printf("Enter your internal marks: ");
    scanf("%d", &internalmarks);

    if (attendance >= 75 && internalmarks >= 40)
        printf("you can appear in the exam\n");
    else
        printf("You cannot appear in the exam\n");
}
```

## PROBLEM:10 
*ATM withdrawal rule:Balance must be greater than withdrawal amount, Withdrawal amount must be a multiple of 500 if both conditions pass, allow withdrawal, else reject.*

```c
#include <stdio.h>

int main(void)
{
    int balance;
    int withdrawal_amount;
    
    printf("Enter your balance: ");
    scanf("%d", &balance);
    printf("Enter the withdrawal amount: ");
    scanf("%d", &withdrawal_amount);

    if (balance > withdrawal_amount){
        if (withdrawal_amount / 500 == 0)
            printf("Withdrawal granted\n");
        else
            printf("Withdrawal denied\n");
    } 

    else 
        printf("Withdrawal denied\n");

    return 0;    


}
```




