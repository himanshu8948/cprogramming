#include<Stdio.h>
#include<stdlib.h>

int main (){


    int n;

    printf("Enter the size of the array >>");
    scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof(int));

    for(int i = 0 ; i < n ; i++){

        printf("Enter each element one by one ::");
        scanf("%d",&arr[i]);

    }

    int num,index;

    printf("enter the element for insertion >>");
    scanf("%d",&num);

    printf("Enter the index at which number should be inserted>");
    scanf("%d",&index);

    for(int j = n ; j > index - 1; j--){

        arr[j] = arr[j-1];

    }

    arr[index] = num;

    printf("this is your inserted element >>>");

    for(int i = 0 ; i <n ; i++){

        printf("%d",arr[i]);
    }

    return 0;
}