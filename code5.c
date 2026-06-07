#include<stdio.h>
#include<math.h>
#ifndef M_PI
#define M_PI 3.14159
#endif
int main(){

float lenght,breadth,radius,area_circle,circumference,area_rectangle,perimeter;

printf("enter the length of the rectangle :");
scanf("%f",&lenght);
printf("enter the breadth of the rectangle :");
scanf("%f",&breadth);
printf("enter the radius of the circle :");
scanf("%f",&radius);

area_rectangle = lenght*breadth;
area_circle = M_PI*pow(radius,2);
perimeter = 2*(lenght+breadth);
circumference = M_PI*radius*2;

printf("the perimeter of your rectangle : %.2f\n ",perimeter);
printf("the area of your rectangle :%.2f\n",area_rectangle);
printf("the circumference of the circle is : %.2f\n",circumference);
printf("the are of circle is : %.2f",area_circle);
return 0;

}