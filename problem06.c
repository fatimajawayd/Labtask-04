/* Q:06
A program asks the user for their age. If they are 18 or older, print "Eligible to Vote",otherwise print "Not Eligible".
*/

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

