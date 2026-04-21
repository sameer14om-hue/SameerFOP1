/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program calculates the sum of the sine series using the Taylor series expansion. The user is prompted to enter a value of x (in radians) and the number of terms to calculate in the series. The program then computes the sum of the series using a loop, calculating each term based on the formula (-1)^(i-1) * (x^(2i-1)) / (2i-1)! and alternating the sign for each term. Finally, it outputs the calculated sum of the sine series to the console.
*/

#include <stdio.h>
#include <math.h>   // For pow()

int main()
{
    double x, sum = 0, term;
    int n, i, j;
    long long fact;
    int sign = 1;

    // Input values
    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate sine series
    for (i = 1; i <= n; i++)
    {
        fact = 1;

        // Calculate factorial of (2i - 1)
        for (j = 1; j <= (2 * i - 1); j++)
        {
            fact = fact * j;
        }

        // Calculate term
        term = pow(x, (2 * i - 1)) / fact;

        // Add/subtract term
        sum = sum + sign * term;

        // Alternate sign
        sign = -sign;
    }

    // Output result
    printf("Sum of sine series = %.6lf\n", sum);

    return 0;
}