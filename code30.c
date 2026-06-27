#include<stdio.h>
#include<math.h>
int main(){

int num ,sum,a,b,c;
sum = 0;
num= 0;
printf("Enter the no. from where we have to start ? ");
scanf("%d",&a);
printf("Enter the no. till where we have to end !");
scanf("%d",&c);

for( a ; a <= c; a++){
int countcopy = a;
int sumcopy = a;
while(countcopy != 0){

countcopy = countcopy/10;
num ++;
}
for(int i = 1; i <= num ; i++){
b = sumcopy % 10;
sum = sum+(pow(b,num));
sumcopy= sumcopy/10;}
if( sum == a){
printf("Hey we got an armstrong no. = %d ",a);
}


sum = 0;
num = 0;

}
return 0;
}
