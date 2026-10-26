#include<Stdio.h>
#include<stdlib.h>

int main(){

    int n ;

    printf("Enter the size of the array >>");
    scanf("%d",&n);

    int*arr = (int*)malloc(n*sizeof(int));

    for(int i = 0 ; i < n; i++ ){

        printf("Keep putting each element one by one >>");

        scanf("%d",&arr[i]);


    }

    int firstelement = arr[0];

    for(int j = 0 ; j < n-1; j++){

        arr[j] = arr[j+1];
    }
    
    arr[n-1] = firstelement;
  
    printf("this is your leftrotated array >>>");

    for(int i = 0; i< n; i++){

        printf("%d",arr[i]);
    }

    return 0;
    
}