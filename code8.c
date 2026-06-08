#include<stdio.h>
#include<math.h>

int main(){

double a,b,c,area,s;

printf("enter the first side of your triangle :");
scanf("%lf",&a);

printf("enter the second side of the triangle :");
scanf("%lf",&b);

printf("enter the third side of the triangle :");
scanf("%lf",&c);
if (a<b+c && b < a+c && c < a+b){

s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));

printf("this is the area of the triangle : %.2lf ",area);}

else {

printf("you have entered the value of sides wrong !");
}

return 0;

}