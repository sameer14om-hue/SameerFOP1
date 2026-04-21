#include <stdio.h>

// Define structure to store student details
struct student
{
    int roll;              // Roll number of student
    char name[50];         // Name of student
    float marks[3];        // Marks in 3 subjects
    float total;           // Total marks
    float percentage;      // Percentage
};

int main()
{
    int n, i, j;

    // Declare array of structures for storing multiple students
    struct student s[100];

    // Input number of students
    printf("Enter number of students: ");
    scanf_s("%d", &n);

    // Loop to input details of each student
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        // Input roll number
        printf("Roll Number: ");
        scanf_s("%d", &s[i].roll);

        // Input name (no spaces allowed)
        printf("Name: ");
        scanf_s("%s", s[i].name);

        // Input marks and calculate total
        printf("Marks in 3 subjects: ");
        s[i].total = 0;   // Initialize total to 0

        for (j = 0; j < 3; j++)
        {
            scanf("%f", &s[i].marks[j]);   // Input marks
            s[i].total += s[i].marks[j];   // Add marks to total
        }

        // Calculate percentage
        s[i].percentage = s[i].total / 3.0;
    }

    // Display student results
    printf("\n--- Student Result ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        // Display details
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
    }

    return 0;   // End of program
}