//a program to show if a person can be insured or not!
#include<stdio.h>
#include<string.h>
int main(){
char health[11] ;
int age;
char sex[10];

printf("enter the health condition of the person for the insurence :Execellent or poor :");
fgets(health,sizeof(health),stdin);
health[strcspn(health ,"\n")]= 0;

printf("enter the age of the person :");
scanf("%d",&age);

getchar();
printf("enter the sex of the person :");
fgets(sex,sizeof(sex),stdin);
sex[strcspn(sex ,"\n")]= 0;

if(strcasecmp(health,"Execellent" )== 0 && (25<= age && age <= 35) && strcasecmp (sex,"male") == 0){

printf("eligibility for the insurence : Yes !\n");
printf("policy amount cannot exceed upto to 2 lakhs :\n");
printf("the rate of premium is Rs - 4 \n");}

else if(strcasecmp(health,"Poor")== 0  && (25 <= age && age <= 35) && strcasecmp (sex,"Male") == 0){

printf("eligibility for the insurence : Yes !\n");
printf("policy amount cannot exceed upto to 10000 :\n");
printf("the rate of premium is Rs - 6 \n");

}
else if(strcasecmp(health,"execellent") == 0 && (25 <= age && age <= 35) && strcasecmp(sex,"female male") == 0){

printf("eligibility for the insurence : Yes !\n");
printf("policy amount cannot exceed upto to 1 lakh :\n");
printf("the rate of premium is Rs - 3 \n");

}
else{

printf("the given person is not elegible for the insurence !");
}
}



