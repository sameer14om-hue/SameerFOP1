/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: 
*/

#include <stdio.h>
#include <stdlib.h>   // For rand() and srand()
#include <time.h>     // For time()

int main()
{
    int n, i;

    // Seed the random number generator using current time
    srand(time(0));

    // Input how many random numbers to generate
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    printf("\nPseudo Random Numbers:\n");

    // Generate and print random numbers
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", rand());   // Generate random number
    }

    return 0;
}