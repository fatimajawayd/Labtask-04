/* Q:07
A password checking system: If user enters "1234" then print access granted else print access denied.
*/

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
