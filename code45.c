#include<stdio.h>//Armstrong no.
int main(){

int num;
int num1 = 0;
int num2 = 1;

printf("Enter the no. of times armstrong no. should be printed ");
scanf("%d",&num);

printf("%d%d",num1,num2);
while(num != 0){

    num1 = num1+num2;
    num2 = num1+num2;

    printf("%d",num1);
    printf("%d",num2);
num--;
}
return 0;

}