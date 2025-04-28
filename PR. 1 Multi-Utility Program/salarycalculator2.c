#include <stdio.h>

int main()
{
    float baseSalary, hraPercent, daPercent, taPercent;
    float hraAmount, daAmount, taAmount, grossSalary;

    // Taking input from user
    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    // Calculating allowances
    hraAmount = (hraPercent / 100) * baseSalary;
    daAmount = (daPercent / 100) * baseSalary;
    taAmount = (taPercent / 100) * baseSalary;

    // Calculating gross salary
    grossSalary = baseSalary + hraAmount + daAmount + taAmount;

    // Displaying the result
    printf("Gross Salary = %.2f\n", grossSalary);

}