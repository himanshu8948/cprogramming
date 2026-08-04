//reverse the binary digits and give the decimal of the binary digits 

#include<Stdio.h>

unsigned int n,digit;
unsigned int reverse = 0;

int main(){

    printf("Enter the no. for which reverse of digit is required :");
    scanf("%u",&n);



while(n > 0){
   
    digit = n & 1;
    reverse <<=1 ;
    reverse |= digit ;
    n >>= 1;
}

  

printf("%u",reverse);

return 0;
}