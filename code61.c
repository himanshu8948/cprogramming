#include<stdio.h>
#include<stdlib.h>

void bubblepass(int arr[],int index,int n){

    if( index <= 1){

       return;
    }

    if(arr[index] > arr[index+1]){

        int temp = arr[index+1] ;
        
        arr[index+1] = arr[index] ;
        arr[index] = temp ;
     }
    
    bubblepass(arr,index+1,n);
        
}

void bubblesort(int arr[],int n ){

      if(n <= 1){

        return ;
      }

    bubblepass(arr,0,n);

    bubblesort(arr,n-1);

}

int main(){

    int n ;

    printf("Enter the size of the array >> ");

    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i< n ; i++){
        printf("Enter each element of the array >>");
        scanf("%d",&arr[i]);

    }

    bubblesort(arr,n);

    printf("this is the sorted array >>");

    for(int j = 0; j< n; j++){
        printf("%d",arr[j]);
    }

    return 0;
}
