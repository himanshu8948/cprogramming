#include<Stdio.h>// armstrong no.
#include<math.h>
int main(){

    int rem,real_num,num,num2;
    int count = 0;
    int sum = 0;


printf("Enter the no. to check if it is armstrong or not !");
scanf("%d",&real_num);

num = real_num;
num2 = real_num;
while(num != 0){

    num = num/10;
    count++;
}


while(num2!= 0){

    rem = num2 %10;
    sum = (int)round(pow(rem,count))+sum;
    num2= num2/10;
}
if (real_num == sum){

    printf("The input no. is an armstrong no!");

}
else{

    printf("The input no. is not an armstrong no. !");
}

return 0;
}