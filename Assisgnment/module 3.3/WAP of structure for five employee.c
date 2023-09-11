#include <stdio.h>
#include <string.h>

// Define the employee structure
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to input employee information
void inputEmployees(struct Employee employees[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter Employee %d Details:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf(" %[^\n]s", employees[i].empname); // Read a string with spaces
        printf("Employee Address: ");
        scanf(" %[^\n]s", employees[i].address); // Read a string with spaces
        printf("Employee Age: ");
        scanf("%d", &employees[i].age);
    }
}

// Function to display employee information
void displayEmployees(const struct Employee employees[], int count) {
    printf("\nEmployee Information:\n");
    for (int i = 0; i < count; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
        printf("\n");
    }
}

int main() {
    const int numEmployees = 5;
    struct Employee employees[numEmployees];

    printf("Enter Details for Five Employees:\n");
    inputEmployees(employees, numEmployees);

    displayEmployees(employees, numEmployees);

    return 0;
}
