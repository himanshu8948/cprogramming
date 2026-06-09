#include<stdio.h>
int main (){

int C,D;

printf("enter the first no. C :");
scanf("%d",&C);

printf("enter the second no. D :");
scanf("%d",&D);

C = C + D;
D = C - D;
C = C - D;

printf("this is your no. in C : %d\n",C);
printf("this is your no. in D : %d",D);

return 0;


}