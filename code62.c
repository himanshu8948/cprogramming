#include<stdio.h>
#include<stdlib.h>

int*twosum(int*num,int target ,int numsize,int* resultsize){

    for(int i = 0; i < numsize ; i++){
        for(int j = i+1; j < numsize ; j++){
            if ( num[i] + num[j] ==  target){

                int*result = (int*)malloc(2*sizeof(int));

                    result[0] = i;
                    result[1] = j; 

                    
                    
                *resultsize = 2;

                return result ;


                }

                
        
               }

               
        }
        *resultsize = 0;
               return NULL;
}

int main(){

    int size,target ;

    printf("Enter the target value for which we have to chek two sum >>");
    scanf("%d",&target);

    printf("Enter the size of the array >> ");
    scanf("%d",&size);

    int*num = (int*)malloc(size*sizeof(int));

    for(int i = 0; i < size ; i++){

        printf("Enter each element of the array >>");
        scanf("%d",&num[i]);
    }
    
    int resultsize;

    int* result = NULL;

    result = twosum(num,target,size,&resultsize);
    
    if(result == 0){
     

        printf("There is no any value inside the given array which could give two sum !");
        
    }
    else{

   printf("This is the array which contains index of twosum elements >>  ");

   for(int k = 0; k < resultsize; k++){

    printf("%d",result[k]);

   }
    }
return 0;
}