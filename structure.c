#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"

int main()
{
    struct user richard;
    struct user pat;

    richard.userID = 1;
    pat.userID = 2;

    puts("Enter the first name for user 1:");
    gets(richard.firstName);

    puts("Enter the first name for user 2:");
    gets(pat.firstName);

    printf("User 1 id is %d\n", richard.userID);
    printf("user 2 firstname is %s\n", pat.firstName);
    
    return 0;
}


