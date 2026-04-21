/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program demonstrates the concept of swapping two numbers using both call by value (without pointers) and call by reference (with pointers) in C. The user is prompted to enter two integers, and the program first attempts to swap them using a function that takes parameters by value, which does not change the original variables. Then, it swaps the numbers using a function that takes pointers as parameters, which successfully changes the original variables. The results are displayed after each swapping method to illustrate the difference between call by value and call by reference.
*/

#include <stdio.h>

// Function without pointers (Call by Value)
void swap_value(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    // Swapped values (only local copy changes)
    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

// Function with pointers (Call by Reference)
void swap_pointer(int* x, int* y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call by value (original values won't change)
    swap_value(a, b);

    // Call by reference (original values will change)
    swap_pointer(&a, &b);

    printf("After swapping with pointers:\n");
    printf("x = %d y = %d\n", a, b);

    return 0;
}