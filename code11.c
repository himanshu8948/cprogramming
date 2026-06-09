#include<stdio.h>
#include<math.h>
int main(){

double t,v,wcf;

printf("enter the temperature for which you wanted to calculate the wind chill factor :");
scanf("%lf",&t);

printf("enter the velocity :");
scanf("%lf",&v);

wcf = 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);

printf("this is the wind chill factor : %lf ",wcf);

return 0 ;

}