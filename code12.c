#include<stdio.h>
#include<math.h>

int main(){

double s,c,t,angle;

printf("enter the angle for which trigonometric ratios are required :");
scanf("%lf",&angle);

angle = angle*3.14159/180;

s = sin(angle);
c = cos(angle);
t = tan(angle);

printf("these are the given below trigonometric ratios of the angle:\ngcc");
printf("sin = %lf cos = %lf tan = %lf \n ",s,c,t);

return 0;
}