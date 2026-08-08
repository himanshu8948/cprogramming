#include<stdio.h>
int main(){

    int num;
    int isprime = 1;
    int i = 2;

printf("Enter the number to check if it is prime or not !");
scanf("%d",&num);

if(num <= 1){

    isprime = 0;
}

while(i <= num/2){

 {  if(num % i == 0)
    isprime = 0;
     break;}

     i++;
}

if(isprime != 0){
  
    printf("Given no. is prime !");

}
else{
    printf("Given no. is not prime !");
}
return 0;
}