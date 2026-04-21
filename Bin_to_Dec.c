/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program converts a binary number to its decimal equivalent.
*/

#include <stdio.h>

int main()
{
    int bin, dec = 0;
    int rem, base = 1;

    // Input binary number
    printf("Enter a binary number: ");
    scanf_s("%d", &bin);

    // Convert binary to decimal
    while (bin > 0)
    {
        rem = bin % 10;        // Get last digit
        dec = dec + rem * base; // Add to decimal
        base = base * 2;        // Increase base (power of 2)
        bin = bin / 10;         // Remove last digit
    }

    // Output result
    printf("Decimal equivalent = %d\n", dec);

    return 0;
}