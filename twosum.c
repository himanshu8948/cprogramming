#include<stdio.h>
#include<stdlib.h>

int*twosum(int*num,int numsize,int key, int*returnsize){

    for(int i = 0; i < numsize ; i++){
        for(int j = i+1; j < numsize ; j++){

            if(num[i]+num[j] == key){

                int*result = (int*)malloc(2*sizeof(int));

                result[0] = i;
                result[1] = j;

                *returnsize = 2;

                return result;
            }
        }
        
    }
    *returnsize = 0;
        return NULL ;
}

int main(){

    int numsize;
    int size;
    int key;

    printf("enter the value of key for which we have to find the twosum >>");
    scanf("%d",&key);

    printf("Enter size of the array >>");
    scanf("%d",&numsize);

    int *num = (int*)malloc(numsize*sizeof(int));

    for(int i = 0 ; i < numsize; i++){
        printf("Enter each element of the array >>");
        scanf("%d",&num[i]);

    }
    
    int *answer = twosum(num,numsize,key,&size);

    if(answer != NULL){

    printf("This is the address of the elements which gives together the sum >>>key >>> %d ,%d",answer[0],answer[1]);
    }
    else{
    printf("No two elements gives the output equal to >> %d",key);
    }
    return 0;
}