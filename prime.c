#include<stdio.h>

int main(){

    int num;
    int count = 0;

    printf("Enter the no. to check if the given no. is prime or not ");
    scanf("%d",&num);

    for(int i = 2; i <= num/2; i++){

        if(num % i == 0){

            count++;
        }
      

    }

    if(count < 2 ){

        printf("the given number is prime !");

    }
    else{

        printf("The given number is not prime !");
    }
}