/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: 
*/

#include <stdio.h>

int main()
{
    FILE* fp1, * fp2;
    char ch;

    // Open source file in read mode
    fp1 = fopen("source.txt", "r");

    // Open destination file in write mode
    fp2 = fopen("destination.txt", "w");

    // Check if files are opened successfully
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Copy contents character by character
    ch = fgetc(fp1);

    while (ch != EOF)
    {
        fputc(ch, fp2);   // Write to destination file
        ch = fgetc(fp1);  // Read next character
    }

    // Close files
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    return 0;
}