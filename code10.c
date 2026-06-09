#include<stdio.h>
#include<math.h>
int main(){

double L1,L2,G1,G2 ,distance;

printf("enter the first value of the latitude L1 : ");
scanf("%lf",&L1);
printf("enter the second value of the latitude L2 :");
scanf("%lf",&L2);

printf("enter the first value of the longitude G1 :");
scanf("%lf",&G1);

printf("enter the second value of the longitude G2 :");
scanf("%lf",&G2);

L1 = L1*3.14159/180;
L2 = L2*3.14159/180;
G1 = G1*3.14159/180;
G2 = G2*3.14159/180;
distance = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G1-G2));

printf("this is the distance in nautical miles : %.2lf",distance);

return 0;
}