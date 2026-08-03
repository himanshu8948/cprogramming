//reverse the binary digits and give the decimal of the binary digits 

#include<Stdio.h>

int n,reverse,digit;
int sum = 0;

int main(){

    printf("Enter the no. for which reverse of digit is required :");
    scanf("%d",&n);

if(n <0){
    printf("Invalid input");
 }

while(n != 0)
    digit = n%2;
    sum = sum +'digit';
    n = n/2;  

printf("%d",sum);

return 0;
}