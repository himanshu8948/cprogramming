#include<Stdio.h>
int main(){

int sum ,num,b,original;
sum = 0;
printf("enter the five digit no. to see if it is palidrome or not :");
scanf("%d",&num);

original = num;
for (int i = 1 ; i <= 5; i++){
    b = num % 10;
    num = num/10;
    sum = (sum*10)+b;
}

if(sum == original ){

    printf("the no. you have entered is a palidrome !");
}
else{
    printf("your entered no. is not a palidrome !");
}
return 0;

}