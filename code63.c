#include<stdio.h>
#include<Stdlib.h>

void insertionsort(int*arr ,int n){

    if(n <= 1){
        return;
    }

    insertionsort(arr,n-1);

    int key = arr[n-1];
    int j = n-2;

    while(j>= 0 && arr[j] > key){

        arr[j+1] = arr[j];

        j--;
    }

    arr[j+1] = key;
}

int main(){

    int n ;

    printf("Enter the size of each element>>>");
    scanf("%d",&n);

    int*arr = (int*)malloc(n*sizeof(int));

    for(int i = 0;i < n ; i++){

        printf("Enter each element of array >>");
        scanf("%d",&arr[i]);
    }

     insertionsort(arr,n);

     printf("This is your sorted array >>>");

     for(int j = 0; j<n ; j++){

        printf("%d",arr[j]);
     }

     return 0;

}