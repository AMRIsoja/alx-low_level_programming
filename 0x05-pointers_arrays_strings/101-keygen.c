#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen password creator
 *
 * therefore you should be carefull
 */
int main(void)
{
    srand(time(NULL)); /* Initialize the random number generator with the current time */

    char password[7]; /* 6 characters + null terminator */
    int i;

    for (i = 0; i < 6; i++)
    {
        /* Generate a random character between 'A' and 'z' (inclusive) */
        password[i] = rand() % ('z' - 'A' + 1) + 'A';
    }
    password[6] = '\0'; /* Add null terminator to create a valid string */

    printf("%s\n", password);

    return 0;
}

