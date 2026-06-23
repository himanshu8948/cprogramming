#include<stdio.h>
int main(){

int hardness ,tensile_strenght;
float carbon_content;

printf("Enter the hardness of the steel :");
scanf("%d",&hardness);

printf("Enter the carbon content of the steel :");
scanf("%f",&carbon_content);

printf("Enter the tensile strenght of the steel :");
scanf("%d",&tensile_strenght);

if(hardness >= 50 && carbon_content >= 0.7 && tensile_strenght >= 5600){

printf("The steel material of Grade 10:");
}
else if(hardness >= 50 && carbon_content >= 0.7 && tensile_strenght != 5600){
printf("The steel material of Grade 9 :");
}
else if(hardness != 50 && carbon_content >= 0.7 && tensile_strenght >= 5600 ){
printf("The steel material of Grade 8 :");
}
else if(hardness >= 50 && carbon_content != 0.7 && tensile_strenght >= 5600){

printf("The steel material of Grade 7 :");
}
else if(hardness != 50 && carbon_content != 0.7 && tensile_strenght >= 5600){

printf("The steel material of Grade 6 :");
}
else if(hardness >= 50 && carbon_content != 0.7 && tensile_strenght != 5600){

printf("The steel material of Grade 6 :");
}
else if(hardness != 50 && carbon_content >= 0.7 && tensile_strenght != 5600){

printf("The steel material of Grade 6 :");

}
else {

printf("The steel is grade 5 :");
}
return 0;
}