//If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number. 

#include<stdio.h>
int main(){

int a ,sum ,first_digit ,last_digit;

printf("enter the four-digit no. please : ");
if (scanf("%d",&a) !=1){

printf("invalid input from your side : ");
return 1;

}
first_digit  = a/1000;
last_digit = a%10;
sum = first_digit+last_digit;
    
printf("this is the sum of the last and first digit of your no. :%d",sum);
return 0;
}