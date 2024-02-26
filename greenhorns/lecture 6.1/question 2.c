#include <stdio.h>

int main(){

  float basic_salary, hra_percentage, ta_percentage, da_percentage;
  float gross_salary, hra, ta, da;

  printf("Enter the basic salary: ");
  scanf("%f", &basic_salary);

  printf("Enter the HRA percentage: ");
  scanf("%f", &hra_percentage);

  printf("Enter the TA percentage: ");
  scanf("%f", &ta_percentage);

  printf("Enter the DA percentage: ");
  scanf("%f", &da_percentage);

  hra = basic_salary * (hra_percentage / 100);
  ta = basic_salary * (ta_percentage / 100);
  da = basic_salary * (da_percentage / 100);

  gross_salary = basic_salary + hra + ta + da;

  printf("HRA: %.2f\n",hra);
  printf("TA: %.2f\n",ta);
  printf("DA: %.2f\n",da);
  printf("Gross Salary: %.2f\n",gross_salary);

  return 0;
}
