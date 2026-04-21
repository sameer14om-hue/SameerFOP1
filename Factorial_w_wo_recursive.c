/*
    Function Name : FCASD_RK_Assignment_6
    Description   : Compute factorial using iterative (non-recursive) & recursive method
    Date Created : 2026-01-03
*/

//Libraries:
/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program computes the factorial of a non-negative integer using both iterative (non-recursive) and recursive methods. 
               The user is prompted to enter a non-negative integer, and the program calculates and displays the factorial using both approaches. 
               The program also handles invalid input by checking for negative numbers and providing an appropriate error message.
*/

#include <stdio.h>

//Functions:
long long fact_wo_recur(int n)
{
    // If number is negative, factorial is undefined
    if (n < 0)
        return -1;

    long long fact = 1;   // Initialize result to 1

    // Multiply numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;  // Accumulate product
    }

    return fact;          // Returns the computed factorial
}

long long fact_w_recur(int n)
{
    // If number is negative, factorial is undefined
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return 1;

    /*
        Recursive Case:
        n! = n × (n-1)!
        Function calls itself with (n-1)
    */
    return n * fact_w_recur(n - 1); //Returns the computed factorial using recursion functionx
}

//Main: 
int main()
{
    int num;
    long long result1, result2;

    // Ask the user to input the factorial number
    printf("Enter a non-negative integer: ");
    scanf_s("%d", &num);

    // Check for invalid input to avoid getting stuck in an infinite loop
    if (num < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Call iterative function
    result1 = fact_wo_recur(num);

    // Call recursive function
    result2 = fact_w_recur(num);

    // Display results using both the functions
    printf("\nFactorial using Non-Recursive method: %lld\n", result1);
    printf("Factorial using Recursive method    : %lld\n", result2);

    return 0;
}