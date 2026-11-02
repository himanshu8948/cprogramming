#include<stdio.h>
#include<math.h>

int main(){

    int count = 0;

    int num;

    printf("Enter the element to check if it is prime>>");
    scanf("%d",&num);

    for(int i = 2; i <= sqrt(num); i++){

        if(num % i == 0){

        count++;


        }
        
    }

   if(count >= 1  )
    {

        printf("the given no. is not  prime ");
    
    }

    else{

        printf("the given no. prime  ");
    }

    return 0;
}