#include<stdio.h>
int main()
{
float salary ,gross_salary ;

printf("enter the salary of ramesh :");

scanf("%f",&salary);

gross_salary = (salary+salary*40/100)+salary*20/100;

printf("ramesh gross salary is : %.2f",gross_salary);
return 0;
}