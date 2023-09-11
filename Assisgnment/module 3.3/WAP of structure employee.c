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
void inputEmployee(struct Employee *emp) {
    printf("Enter Employee Number: ");
    scanf("%d", &emp->empno);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp->empname); // Read a string with spaces
    printf("Enter Employee Address: ");
    scanf(" %[^\n]s", emp->address); // Read a string with spaces
    printf("Enter Employee Age: ");
    scanf("%d", &emp->age);
}

// Function to display employee information
void displayEmployee(const struct Employee *emp) {
    printf("\nEmployee Number: %d\n", emp->empno);
    printf("Employee Name: %s\n", emp->empname);
    printf("Employee Address: %s\n", emp->address);
    printf("Employee Age: %d\n", emp->age);
}

int main() {
    struct Employee emp;

    printf("Enter Employee Details:\n");
    inputEmployee(&emp);

    printf("\nEmployee Information:\n");
    displayEmployee(&emp);

    return 0;
}
