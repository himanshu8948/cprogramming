#include<stdio.h>

int main(){

int n,digit;
int count = 0;

printf("Enter the no.:");
scanf("%d",&n);

if( n < 1){

    printf("Invalid input");
}

int original_n = n;
while (n !=0)
{
    digit = n%10;
    
    
    if(digit != 0 && original_n % digit == 0){
     
     count++;
    }
    
    n = n/10;
    
}
    printf("No. of digits that divides the given no. : %d",count);


return 0;


}