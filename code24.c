#include<stdio.h>
int main(){

int days ;

printf("enter the no. of days for which the books got late returned !");
scanf("%d",&days);

if(days <= 5){

printf("Your fine is 50 paise for 5 days ! :");
}
else if(6 <= days && days <=10){

printf("Your fine is 1 Rs for 6-10 days duration !:");
}
else if(10 < days){
10
printf("Your fine is 5 Rs for above 10 days !");
}
else if(days > 30){

printf("Your membership got cancelled due to return of books after 30 days sorry ! ");}
return 0;

}