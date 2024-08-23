#include <stdio.h>

int main() 
{
    float base_salary, hra, da, ta, gross_salary;

    printf("Enter the base salary: ");
    scanf("%f", &base_salary);

    printf("Enter the percentage of HRA : ");
    scanf("%f", &hra);

    printf("Enter the percentage of DA : ");
    scanf("%f", &da);

    printf("Enter the percentage of TA : ");
    scanf("%f", &ta);

    gross_salary = base_salary + (base_salary * (hra / 100)) + (base_salary * (da / 100)) + (base_salary * (ta / 100));

    printf("Gross Salary: Rs. %.2f\n", gross_salary);

    return 0;
}