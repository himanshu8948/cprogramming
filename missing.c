#include<Stdio.h>
#include<stdlib.h>


int missingnum(int arr[],int n){

    if(n == 0){
        return -1;
    }
    int missing= 0;

    for(int i = 0; i < n ; i++){

        missing ^= i^(arr[i]);
    }

    return missing;
}

int main(){

    int n ;

    printf("Enter the size of array >>");
    scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof(int));

    for(int i = 0 ; i < n; i++){

        printf("Enter each element of the array >>");
        scanf("%d",&arr[i]);
    }

    int missingno = missingnum(arr,n);

    printf("This is the missing element in the array >>> %d",missingno);

    return 0;
}