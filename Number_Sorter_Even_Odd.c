/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program takes a list of integers as input from the user and separates them into even and odd numbers. 
*/

//Lib:
#include <stdio.h>

//Main:
int main()
{
    int a[100], n, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Display even numbers
    printf("Even numbers are: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)   // Check even
        {
            printf("%d ", a[i]);
        }
    }

    // Display odd numbers
    printf("\nOdd numbers are: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)   // Check odd
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}