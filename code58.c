#include<stdio.h>
#include<stdlib.h>

int main(){

int size;
int key;
int k ;

printf("Enter the size of the element >>>");

scanf("%d",&size);

int *insert = (int*)malloc(size*sizeof(int));



for(int i = 0; i < size ; i++){

printf("Enter each element of the array >>");
scanf("%d",&insert[i]);

}

for(int j= 1 ; j < size; j++){

    key = insert[j];


for(k = j-1;  k >= 0 && insert[k] > key ; k--){

    insert[k+1] = insert[k];
}

insert[k+1] = key;

}

printf("here is the sorted elements in the array >> ");

for(int l = 0 ; l < size ; l++){

printf("%d",insert[l]);

}

return 0;
}