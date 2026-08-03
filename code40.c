#include<stdio.h>


int min(int a,int b){
    return(a<b)? a : b; }


int main(){

    int n ;

    printf("Enter the value of n :");
    scanf("%d",&n);

    int size = 2*n-1;

    
    for(int i = 0; i < size; i++){

        for(int j = 0 ; j < size; j++){

         int top =i;
         int left = j;
         int buttom = (size-1)-i;
         int right = (size-1)-j;
         
         int min_value = min(min(top,buttom),min(left,right));

         printf("%d",n - min_value);

        }
        
         printf("\n");
    }
          
     return 0;

    
}