#include<stdio.h>
#include<Stdlib.h>

int largestelement(int *arr ,int n){

       

for (int i = 0; i < n ; i++){

     int count = 0;
    for(int j = 0 ; j < n ; j++){

    if(i == j) continue;

    if(arr[i] >= arr [j]){
        count++;

    }
    
    }
    if(count == n-1){

        return i;
    }
}
}

int main (){

    int size,index;

    printf("Enter the size of the array >>> ");
    scanf("%d",&size);
   
    int * arr = (int*)malloc(size*sizeof(int));

    for ( int i = 0; i < size; i++){
        printf("Enter each element of the array >>");
        scanf("%d",&arr[i]);
    }

    index = largestelement(arr,size);

    printf("this is the largest element of the array >> %d",arr[index]);

}