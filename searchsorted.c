#include<stdio.h>
#include<Stdlib.h>

int searchinsorted(int arr[],int n,int target){

    int low = 0; int high = n-1;

    while(low <= high){

       int mid  = low + (high -low )/2;
         
       if(arr[mid] == target ){
        return mid;
       }

       if(arr[mid] < target){

        int low = mid+1;
       }

       if(arr[mid] > target){

        high = mid - 1;
       }
    }

    return -1;
}

int main(){


    int n ;

    printf("Enter the size of the array >>");

    scanf("%d",&n);

    

    int*arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n ; i++){

        printf("Enter each element of the array >>");
        scanf("%d",&arr[i]);

    }
    
    int num ;

    printf("Enter the element you wanted to search inside the array >>>>");

    scanf("%d",&num);

    int targetfound = searchinsorted(arr,n,num);

    printf("Your element is at index %d",targetfound);

    if(targetfound == - 1){
        printf("Your element is not inside the given array >>");
    }

    return 0;
}

