#include<stdio.h>
int main(){

    int count = 0;
    int n;
    

printf("Enter the size of array you are giving as an input >>");
scanf("%d",&n);

int run = n;

int a[n];
int result[n];

for(int i = 0; i < n; i++){
    
printf("enter the each element of an array >>");
scanf("%d",&a[i]);

}

    for (int num = 1; num <= n ; num++){

        for(int i = 0; i < n; i++){

            if(a[i] == num ){

                count++;
            }
        }

        result[num -1 ]= count;
        count = 0;
    
    
}
for(int i = 0; i < n; i++){
printf("your frequency is :%d\n",result[i]);

}

return 0;
}