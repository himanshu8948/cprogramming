#include<stdio.h>
int main(){

int A,B;

printf("Enter the marks obtained in the subject A:");
scanf("%d",&A);
printf("Enter the marks obtained in the subject B :");
scanf("%d",&B);
if(55 <= A && 45 <= B){
printf("Student got Passed !");
}
else if(45 <= A && A <= 55 && 55 <= B ){

printf("Student got passed !");
}
else if(B <= 45 && 65 <= A){
printf("Student need to reappear in the Exam B !");
}
else {

printf("Failed !");
}
return 0;
}