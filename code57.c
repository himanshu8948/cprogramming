#include<stdio.h>
#include<stdlib.h>


int main(){

int size,key,k;

printf("Enter the size of array >>");
scanf("%d",&size);

int *sort = (int*)malloc(size*sizeof(int));

for(int i = 0; i <size ; i++){

    printf("Enter each element of the array ");
    scanf("%d",&sort[i]);
}

for(int j = 1; j < size; j++){
    
        key = sort[j];
        k = j-1;

        while(k >= 0 && sort[k] > key){

        
            sort[k +1] = sort[k];

            k -- ;
        }
        sort[k] = key;
    }
}

for(int l = 0; l < size; l++){
    printf("%d",sort[l]);
}

return 0;
}