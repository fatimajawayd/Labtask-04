/* Q:10
ATM withdrawal rule:Balance must be greater than withdrawal amount, Withdrawal amount must be a multiple of 500 if both conditions pass, 
allow withdrawal, else reject
*/

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
