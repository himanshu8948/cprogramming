#include<stdio.h>
int main(){
int over_Time ,Extra_wages,j;
j = 1;
while (j <= 10){
printf("Enter the no. of hours workers worked !");
scanf("%d",&over_Time);

if(40 < over_Time ){


over_Time = over_Time - 40;

Extra_wages = over_Time*12;


printf("This is the calculated wages of the total worker for extra hours : %d\n",Extra_wages);
}
else{

printf("They had not did any extra hours !\n");

}

j++;
}
return 0;

}