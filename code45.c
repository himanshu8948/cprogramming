#include<stdio.h>//fibanacci series 
int main(){

int num,nextterm ;
int num1 = 0;
int num2 = 1;

printf("Enter the no. of times armstrong no. should be printed ");
scanf("%d",&num);


while(num > 0){

    printf("%d",num1);
    nextterm = num1+num2;

    num1 = num2;
    num2 = nextterm ;
    
num--;
}
return 0;

}