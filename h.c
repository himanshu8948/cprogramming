#include<stdio.h>
void main(){
    int n[5] = {1,3,4,5,0};
    for(int i = 0 ; i < 5 ; i++) {
        printf("%d " , n[i]);
    }
    printf("\n");
    int ip = 1 , iv = 2; 
    //================================//
    for(int i = 5-2 ; i >= ip ; i--) {
        n[i+1] = n[i];
    }
    //=================================//   
    n[ip] = iv;
    for(int i = 0 ; i < 5 ; i++) {
        printf("%d " , n[i]);
    }
}
