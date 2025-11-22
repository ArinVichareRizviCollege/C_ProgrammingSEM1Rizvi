/*****************************************************************
 Name: Arin, UIN: 251M046, Roll no: 40, Class: FE Mech Div F

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee() {
    struct Employee emp;
    FILE *fp = fopen("employee_database.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    getchar(); // clear buffer
    fgets(emp.name, 50, stdin);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fprintf(fp, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
    fclose(fp);

    printf("Employee added successfully!\n");
}

void displayEmployees() {
    struct Employee emp;
    FILE *fp = fopen("employee_database.txt", "r");

    if (fp == NULL) {
        printf("No employee records found!\n");
        return;
    }

    printf("\n--- Employee List ---\n");

    while (fscanf(fp, "%d %[^\n] %f", &emp.id, emp.name, &emp.salary) != EOF) {
        printf("\nID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
    }

    fclose(fp);
}

void searchEmployee() {
    struct Employee emp;
    int id, found = 0;

    FILE *fp = fopen("employee_database.txt", "r");

    if (fp == NULL) {
        printf("No records available!\n");
        return;
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %[^\n] %f", &emp.id, emp.name, &emp.salary) != EOF) {
        if (emp.id == id) {
            printf("\nEmployee Found:\n");
            printf("ID: %d\n", emp.id);
            printf("Name: %s\n", emp.name);
            printf("Salary: %.2f\n", emp.salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Employee Database Menu =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

