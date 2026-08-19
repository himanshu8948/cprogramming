#include<stdio.h>

int n;
int a = 0;
int b = 1;
int fibo[1000];

int index1 = 0;

void  printfibo(int n){

    

    if(n == 0){

         return ;
                      }

    fibo[index1] = a;
    index1++;
    fibo[index1] = b;
    index1++;
    int a1 = a;
    a = a+b;
    b = b+a;

    
    n--;
    printfibo(n);
    if(index1 > -1){
    
    printf("%d",fibo[index1]);
    index1 --;
    }
        
}



int main(){

 
    printf("Enter the no. to print the fibonacci series >>");

    scanf("%d",&n);
    
    printfibo(n);

    return 0;

}