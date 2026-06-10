#include<stdio.h>

int main(){

int a;

printf("enter the no. to check whether it is even or odd :");
scanf("%d",&a);

if (a % 2 == 0){

printf("hey we got here an even no. !");

}
else {

printf("here we have an odd no. : ");
}
return 0;
}