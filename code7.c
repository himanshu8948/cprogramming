#include<stdio.h>
#include<math.h>

int main(){

int a,b,sum,j;
sum = 0;
j = 4;

printf("enter the no. to get its reverse : ");
scanf("%d",&a);

for (int i = 5 ; i >= 1 ; i--){

b = a % 10 ;
a = a / 10;

sum = sum + b*round(pow(10,j));
j--;
}
printf("this is your no. which got reversed :%d",sum);

return 0;
}