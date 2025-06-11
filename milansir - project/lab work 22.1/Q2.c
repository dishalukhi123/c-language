#include <stdio.h>

struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].emp_name);

        printf("Age: ");
        scanf("%d", &emp[i].emp_age);

        printf("Role: ");
        scanf(" %[^\n]", emp[i].emp_role);

        printf("City: ");
        scanf(" %[^\n]", emp[i].emp_city);

        printf("Experience (in years): ");
        scanf("%d", &emp[i].emp_experience);

        printf("Company Name: ");
        scanf(" %[^\n]", emp[i].emp_company_name);
    }

    printf("\n\n--- Employee Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID            : %d\n", emp[i].emp_id);
        printf("Name          : %s\n", emp[i].emp_name);
        printf("Age           : %d\n", emp[i].emp_age);
        printf("Role          : %s\n", emp[i].emp_role);
        printf("City          : %s\n", emp[i].emp_city);
        printf("Experience    : %d years\n", emp[i].emp_experience);
        printf("Company Name  : %s\n", emp[i].emp_company_name);
    }

    return 0;
}
