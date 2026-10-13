#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition (int arr[],int low,int high){

    int pivot = arr[high];
    
    int i = low-1;

    for (int j = low ; j < high; j++){

        if (arr[j] < pivot){

            i++;
            swap(&arr[i],&arr[j]);

        }

    }
    swap(&arr[i+1],&arr[high]);

    return(i+1);
}

void quicksort(int arr[],int low,int high){
    if(low < high){

        int p = partition(arr,low,high);


        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }


}

int main(){


    int n,j; 
    int low = 0;
    

printf("Enter the size of array you wanted to enter >>");
scanf("%d",&n);
    int high = n-1;
int*arr = (int*)malloc(n*sizeof(int));

for (int i = 0; i < n; i++ ){

    printf("Enter each element of the array >>");
    scanf("%d",&arr[i]);

}

quicksort(arr,low,high);

printf("This is your sorted array >>");
for(int j = 0; j < n; j++){
    printf("%d",arr[j]);
}

}