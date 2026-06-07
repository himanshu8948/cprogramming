#include<stdio.h>

int main(){

float centrigrate,fahrenheit;

printf("enter the temperature in centrigrate :");
scanf("%f",&centrigrate);

fahrenheit = (centrigrate*9/5)+32;
printf("your temperature in fahrenheit is : %.2f ",fahrenheit);

return 0;
}
