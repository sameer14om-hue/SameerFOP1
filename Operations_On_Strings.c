/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description:
*/

#include <stdio.h>

int main()
{
    char str1[100], str2[100], rev[100];
    int i, j, len = 0, flag = 1, found = 0;

    // Input strings
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    // Calculate length
    while (str1[len] != '\0')
    {
        len++;
    }

    printf("Length of string = %d\n", len);

    // Reverse string
    for (i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed string = %s\n", rev);

    // Palindrome check
    for (i = 0; i < len; i++)
    {
        if (str1[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");

    // Equality check
    i = 0;
    flag = 1;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 1)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Substring check
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i + j] != str2[j])
                break;
        }
        if (str2[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Substring found in main string\n");
    else
        printf("Substring not found\n");

    return 0;
}