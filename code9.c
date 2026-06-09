#include<stdio.h>
#include<math.h>

#define M_PI 3.14159265358979323846

int main(){

double x,y,radius,angle;

printf("enter the coordinate for x :");
scanf("%lf",&x);
printf("enter the coordinate for y :");
scanf("%lf",&y);
radius = sqrt(pow(x,2)+pow(y,2));

angle =  atan2(y,x)*180/M_PI;

printf("this is the radius :%.2lf\n",radius);
printf("this is the angle :%.2lf\n",angle);

return 0;

}