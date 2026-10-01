#include<stdio.h>
#include<stdlib.h>


int main(){

int size;

int element;

printf("Enter the size of the array before inserting an element >>");
scanf("%d",&size);

if(size<=0){

printf("You have entered invalid value >> !");

}



int* arr = (int*)malloc((size+1)*sizeof(int));



for(int i = 0 ; i < size; i++){

printf("Enter each element of the array >>");
scanf("%d",&arr[i]);

if(arr[i]<0){

printf("NO negative integers are allowed >>");
}
}

for(int j = size-1; j >= 0; j--){


arr[j+1] = arr[j];

}

printf("Enter the element wanted to insert at beginning >> ");
scanf("%d",&element);

arr[0] = element;

printf("Your element got inserted inside the array >> ");

for(int j = 0; j < size+1 ; j++){

printf("%d",arr[j]);

}

return 0;

}