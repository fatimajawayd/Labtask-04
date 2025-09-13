/* Q:08
If the temperature is greater than 30°C, display "Hot Day", otherwise "Pleasant Day".
*/

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
