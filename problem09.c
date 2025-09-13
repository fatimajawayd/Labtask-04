/* Q:09
A student can only appear in the final exam if: Attendance ≥ 75% AND Internal marks ≥ 40.
*/

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
