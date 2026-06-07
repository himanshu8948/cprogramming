#include<stdio.h>
int main(){

float science,maths,english,socialscience,gk,aggregate_marks,percentage_marks;

printf("enter marks in science \n:");
scanf("%f",&science);
printf("enter your marks in maths\n :");
scanf("%f",&maths);
printf("enter your marks in social science \n:");
scanf("%f",&socialscience);
printf("enter your marks in gk\n :");
scanf("%f",&gk);
printf("enter your marks in english \n:");
scanf("%f",&english);

aggregate_marks = science+maths+socialscience+gk+english;
percentage_marks = (aggregate_marks)/500*100;
printf("your aggregate marks is :%.2f\n ",aggregate_marks);
printf("your percentage marks is :%.2f\n",percentage_marks);

return 0;
}