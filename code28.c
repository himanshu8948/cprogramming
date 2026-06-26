#include<stdio.h>
#include<math.h>

int main(){

int a,b,power;

printf("Enter the no. for which you wanted to calculate its power !");
scanf("%d",&a);
printf("Enter the power to which the no. should be raised !");
scanf("%d",&b);

power = pow(a,b);
printf("this is the final answer of your no. !%d",power);
return 0;
}