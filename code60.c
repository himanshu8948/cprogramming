#include<stdio.h>
#include<Stdlib.h>

void sort(int arr[],int n){

    if(n < 0){
        return;
    }

    int i = 0,j = 0;

    if(arr[i] > arr[i+1]){
     
        arr[j] = arr[i+1];
        
        arr[i+1] = arr[i] ;
        
        i++;
        j++;

    }

    sort(arr,n-1);
}

int main(){

    int n ;

    printf("Enter the size of array >> ");

    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i <n ; i++){

        printf("Enter each element of the array >>");
        scanf("%d",&arr[i]);

    }

    sort(arr,n);

    printf("This is the sorted array you had >>>");

    for(int j = 0; j< n ; j++ ){

         printf("%d", arr[j]);
    }

    return 0;
}