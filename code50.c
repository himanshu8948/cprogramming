#include<stdio.h>

void printtillN(int n){

    if(n == 0){

        return;
    }
    printtillN(n-1);
    printf("%d ",n);
}

   

int main(){
    
    int n;
    int result;
    
    printf("Enter the value of n till which you wanted to print n !");

    scanf("%d",&n);

    
    printtillN(n);

   return 0;
}