#include<stdio.h>


int main(){

int n,digit;
int sum = 0;

printf("Enter the no. to check palindrome !");
scanf("%d",&n);

if(n < 0){
    printf("Invalid input");
    return 0;
}

int duplicate_n = n;
while(duplicate_n != 0){

    digit =  duplicate_n % 10;
    sum =  sum*10+digit;
    duplicate_n = duplicate_n/10;
}
if (n == sum){
    printf("Your entered no. is a palindrome ");


}
else{
    printf("Not a palindrome");
}
return 0;
}