// profit and loss 

#include<stdio.h>
#include<math.h>

int main(){

double cost,selling ,net;

printf("enter the cost price of your product :");
scanf("%lf",&cost);

printf("enter the selling price of your product :");
scanf("%lf",&selling);

net = selling - cost ;

if(net > 0){

printf("Congratulations you had made profit this time :%.2lf",net);

}
else if (net < 0){

printf("Suck we got loss this time for : %.2lf",fabs(net));
}
else {

printf("Now i would really say that we neither got loss nor profit :");
}

return 0;
}