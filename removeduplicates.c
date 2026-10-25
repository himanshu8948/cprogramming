#include<Stdio.h>
#include<stdlib.h>


void removeduplicate(int arr[],int n){

    if(n == 0){
        return ;
    }
   int i = 0;

  for(int j = 1 ; j < n ; j++){

    
    
    if(arr[i] != arr[j]){

        i++ ;

        arr[i] = arr[j];


  }

    }

  }


  int main (){

    int n;

    printf("Enter the size of the array >>");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n ; i++){

        printf("Keep entering each element for the given array >>");
        scanf("%d",&arr[i]);


    }

    removeduplicate(arr,n);

    printf("This is your array here >>");

    for(int j = 0; j < n-1 ; j++){
  
     printf("%d",arr[j]);
    
  }
  return 0;
}