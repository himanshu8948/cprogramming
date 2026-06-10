#include<stdio.h>

int main(){

int year,days = 365 ;
long long normaldays,totaldays,leapdays;

printf("Enter the year for which 1st january day is required :");
scanf("%d",&year);

normaldays = (year-1)*(days);
leapdays = (year-1)/4-(year-1)/100+(year-1)/400;
totaldays = normaldays+leapdays;

if (totaldays % 7 == 0){
    printf("Hey the day is monday !");
}
if (totaldays % 7 == 1){
    printf("Hey the day is tuesday !");
}
if (totaldays % 7 == 2){
    printf("Hey the day is wednesday !");
}
if (totaldays % 7 == 3){
    printf("Hey the day is thursday !");
}
if (totaldays % 7 == 4){
    printf("Hey the day is friday !");
}
if (totaldays % 7 == 5){
    printf("Hey the day is saturday !");
}
if (totaldays % 7 == 6){
    printf("Hey the day is sunday !");
}
return 0;
}