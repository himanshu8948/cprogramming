#include<stdio.h>
int main(){

int Shree_ram,Shree_shyam,Mata_sita;
printf("enter the age of Shree Ram :");
scanf("%d",&Shree_ram);

printf("enter the age of Shree shyam :");
scanf("%d",&Shree_shyam);

printf("enter the age of Mata site :");
scanf("%d",&Mata_sita);

if(Shree_ram<Shree_shyam && Shree_ram <Mata_sita){
    printf("Shree Ram is youngest here ! ");
}
else if(Shree_shyam < Shree_ram && Shree_shyam < Mata_sita){
    printf("Shree Shyam is youngest here !");
}
else if(Mata_sita < Shree_ram && Mata_sita < Shree_shyam){
    printf("Mata sita is youngest here !");
}
else{

    printf("no is youngest here !");

}
return 0;
}