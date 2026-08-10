#include<stdio.h>
int main(){

    int n;
    
printf("Enter the size of the array ! >>");
scanf("%d",&n);

int a[n];
int result[n];

int num = n;

int count = 0;


for(int i = 0; i < n ; i++){

    printf("Enter each element of array >>");
    scanf("%d",&a[i]);

}


for(int num = 1; num <= n; num++){

    for(int i = 0; i < n; i++){

        if(a[i] == num ){

            count++;
        }

    }


    result[num-1] = count;
    count = 0;
}

int max = result[0];
int maxindex = 0;




    for(int i = 1;i < n; i++ ){

        if(result[i] > max){
            
        max  = result[i];
        maxindex = i;

        }

    }

    printf("The maximum frequency is %d for the given index %d ",max,maxindex+1);


    return 0;
}
