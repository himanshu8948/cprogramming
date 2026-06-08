#include<stdio.h>

int main(){

int a,b,sum;
sum = 0;

printf("enter the 5 digits no. : ");
scanf("%d",&a);

for ( int i = 0 ; i <= 5 ; i++){

b = a % 10 ;
a = a / 10;

sum = sum+b;
 
}
printf("this the sum 5 digits of your no. : %d",sum);

return 0;
}