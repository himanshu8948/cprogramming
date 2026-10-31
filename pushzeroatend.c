#include<stdio.h>
#include<stdlib.h>


void swap (int *a,int* b){
        
  int temp = *b; 
     *b = *a;
     *a = temp;
}
void pushzeroatend(int arr[],int n){



    int i = 0;
     
    for(int j = 0; j < n ; j++){

        if(arr[j] != 0  ){
            swap(&arr[i],&arr[j]);

            i++;
        }
    }
}


int main(){

    int  n ; 

    printf("Enter the size of array >>");

    scanf("%d",&n);

    int*arr = (int*) malloc(n*sizeof(int));

    for(int i = 0; i < n ; i++){

        printf("Enter each element of the array >>>");
        scanf("%d",&arr[i]);


    }

    pushzeroatend(arr,n);

    printf("This is your removed zero array >>>");
    for(int j = 0 ; j <n ; j++){

        printf("%d",arr[j]);
    }

    return 0;
}