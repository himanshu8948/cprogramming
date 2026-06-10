#include<stdio.h> 
int main(){

int a ;

printf("Enter the year to check if it is leap year or not : ");
scanf("%d",&a);

if (a % 4 == 0){

if(a % 100 == 0){

if(a % 400 == 0){

printf("the input year is a leap year !:"); }

else {printf("the input year is not a leap year !"); }
}
else{printf("the input year is a leap year ! :");}}

else {printf("the input year is not a leap year ! :");}
return 0;
}
