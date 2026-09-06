#include<stdio.h>
#include<stdlib.h>


void merge(int arr[],int left,int mid,int right){

    int n1 = mid-left+1;

    int n2 = right-mid;


    int *R = (int*)malloc(n1*sizeof(int));
    int *L = (int*)malloc(n2*sizeof(int));

    for(int i = 0; i < n1; i++){

       L[i] = arr[left+i];
       
    }

    for(int j = 0;j < n2 ; j++){
        R[j] = arr[mid+1+j];
       
    }

    int i = 0,j = 0, k = left;

    while(i < n1 && j < n2){
        if(L[i] < R[j]){

            arr[k] = L[i];
            i++;
        }

        else{
            arr[k] = R[j];
            j++; 
        }

        k++;
    }

    while( i < n1){

        arr[k] = L[i];
        i++;
        k++;
    }

    while( j < n2){

        arr[k] = R[j];
        j++;
        k++;

    
    }

}
void mergesort(int arr[],int left,int right){

    if(left >= right){
        return ;
    }

    int mid = (left+right)/2;

    mergesort(arr,left,mid);

    mergesort(arr,mid+1,right);

    merge(arr,left,mid,right);
}

int main(){

    int n ;

    printf("Enter the no. of elements in the array >>>");

    scanf("%d",&n);

    
    int *arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n ; i++){

        printf("Enter the eac element >>");
        scanf("%d",&arr[i]);

        }

    mergesort(arr,0,n-1);

    
    printf("This is your sorted array >> ");

    for(int j = 0; j < n ; j++ ){

        printf("%d",arr[j]);
    }

    return 0;
}