#include<stdio.h>
int main()

{
    int NUM1,NUM2,rem,LCM;

    printf("input two no. to find GCD and LCM >>");
    scanf("%d",&NUM1);
    printf("input second no >> ");
    scanf("%d",&NUM2);

    int a = NUM1;
    int b = NUM2;
    while(b !=0){

        rem = a%b;
        a = b;
        b = rem;
    }
    
    printf("The GCD of the given two no. will be : %d\n",a);

    LCM = (NUM1*NUM2)/a;
   printf("LCM of given two inputs is %d:",LCM);

   return 0;}