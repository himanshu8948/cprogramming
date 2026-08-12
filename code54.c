#include<stdio.h>
#include<stdlib.h>
int n;
int stack_array[100];
int current_index = 0;
long long multi = 1;

void printfactorial(int n, int original_value){

    if(n > 0){

        stack_array[current_index] = n;

        current_index++;

        printfactorial(n-1,original_value);


        current_index--;

        int pull_num = stack_array[current_index];

        multi = multi*pull_num;

        if(multi <= original_value){

            printf("%lld ",multi);

        }else{

            exit(0);
        }
    }
           
    }

int main(){

    printf("Enter the no. of factorials required ! >>");

    scanf("%d",&n);

    int original_value = n;

    printfactorial(n,original_value);


    return 0;
    
}