/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program defines a structure to store employee details and performs various operations on the employee data. It counts the number    
*/

#include <stdio.h>
#include <string.h>

// Structure definition
struct employee
{
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

// Function to count male and female employees
void count_gender(struct employee e[], int n)
{
    int i, male = 0, female = 0;

    for (i = 0; i < n; i++)
    {
        if (strcmp(e[i].gender, "Male") == 0)
            male++;
        else if (strcmp(e[i].gender, "Female") == 0)
            female++;
    }

    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}

// Function to display employees with salary > 10000
void high_salary(struct employee e[], int n)
{
    int i;

    printf("Employees with salary more than 10000: ");
    for (i = 0; i < n; i++)
    {
        if (e[i].salary > 10000)
        {
            printf("%s ", e[i].name);
        }
    }
    printf("\n");
}

// Function to display employees with designation AsstManager
void asst_manager(struct employee e[], int n)
{
    int i;

    printf("Employees with designation AsstManager: ");
    for (i = 0; i < n; i++)
    {
        if (strcmp(e[i].designation, "AsstManager") == 0)
        {
            printf("%s ", e[i].name);
        }
    }
    printf("\n");
}

int main()
{
    struct employee e[100];
    int n, i;

    // Input number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender: ");
        scanf("%s", e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Display total employees
    printf("\nTotal number of employees = %d\n", n);

    // Function calls
    count_gender(e, n);
    high_salary(e, n);
    asst_manager(e, n);

    return 0;
}