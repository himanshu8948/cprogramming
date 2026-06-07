#include<stdio.h>

int main(){

float distance_km,distance_m,distance_cm,distance_ft,distance_in;

printf("enter the distance between two cities in km : ");

scanf("%f",&distance_km);

distance_m = distance_km*1000;
distance_cm = distance_m*100;
distance_ft = (distance_cm)/100*3.28;
distance_in = distance_ft*12;

printf("distance between two cities in m : %.2f\n",distance_m);
printf("distance between two cities in cm : %.2f\n",distance_cm);
printf("distance between two cities in ft :%.2f\n",distance_ft);
printf("distance between two cities in inchs : %.2f\n",distance_in);

return 0;


}