#include<stdio.h>
#include<stdlib.h>

int unionsorted(int arr1[],int arr2[],int arr3[] , int n , int m  ){

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){

       int value;

        if(arr1[i] == arr2[j]){
            value = arr1[i];
            i++;
            j++;        }

        else if (arr1[i] > arr2[j]){
            
            value =  arr2[j];
            j++;
        } 
        else {
 
            value = arr1[i];
            i++;

        }
        if (k == 0 || arr3[k - 1] != value) {
    arr3[k] = value;
    k++;
}
    }
    while (i < n) {
        if (k == 0 || arr3[k - 1] != arr1[i]) {
            arr3[k++] = arr1[i];
        }
        i++;
    }
      while (j < m) {
        if (k == 0 || arr3[k - 1] != arr2[j]) {
            arr3[k++] = arr2[j];
        }
        j++;
    }
return k;
}

int main (){

    int n;
    int m;


    printf("Enter the size of first sorted array>>");
    scanf("%d",&n);

    printf("Enter the size of second sorted array>>");
    scanf("%d",&m);

    
   int k = m+n;

    int*arr1 = (int*)malloc(n*sizeof(int));
    int*arr2 = (int*)malloc(m*sizeof(int));

    int*arr3 = (int*)malloc(k*sizeof(int));

    for(int i = 0; i < n; i++){

        printf("Enter each element in the first sorted array >>");
        scanf("%d",&arr1[i]);
        
    }
    for(int j = 0; j < m; j++){

        printf("Enter each element in the second sorted array >>");
        scanf("%d",&arr2[j]);
        
    }


   int unique =  unionsorted(arr1,arr2,arr3,n,m);

    printf("This is union of two sorted array >>");

    for(int s = 0; s < unique ; s++){

        printf("%d",arr3[s]);
    }

    return 0;
}