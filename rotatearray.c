#include<Stdio.h>
#include<stdlib.h>


int main(){

    int n ;

    printf("Enter the size of the array >>>");

    scanf("%d",&n);


    int * arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n ; i++){

        printf("Enter eah element of the array one by one >>");
        scanf("%d",&arr[i]);
                
    }
      
    int k ;

    printf("Enter the length of rotation ");
    scanf("%d",&k);

    int*value = (int*)malloc(k*sizeof(int));

     
   

    for (int j = 0; j < k; j++) {
    value[j] = arr[j];
}
for (int j = 0; j < n - k; j++) {
    arr[j] = arr[j + k];
}
for (int j = 0; j < k; j++) {
    arr[n - k + j] = value[j];
}
    
    printf("this is  your rotated array >>");

    for(int i = 0; i <n ; i++){
    
        printf("%d",arr[i]);
    }
    
    return 0;

}