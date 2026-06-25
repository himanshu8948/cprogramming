#include<stdio.h>
int main(){
int num,factorial;
factorial = 1;
printf("Enter the no. to find out the factorial !");
scanf("%d",&num);

if(num>=0){

for(int i = 1; i<= num; i++){
factorial = factorial*i;

}
printf("This is the factorial of the input no. :%d",factorial);
}
else{

printf("The input no. is invalid !");
}
return 0;
}