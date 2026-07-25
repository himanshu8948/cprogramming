#include<stdio.h>         //nput: n = 4
                          //Output:
int main(){               //1
                          //1 2  
                          //1 2 3
                          //1 2 3 4
                          //Explanation: For n = 4 there are 4 rows in the output and the number of elements increases with an increase in the row.

int n;
int a = 1;

printf("Enter the no till which the triangles should be printed !");
scanf("%d",&n);

for(int i = 1; i<= n; i++ ){

    for(int j = 1 ; j<= i; j++){                  //here by skipping loop j resets to zero and where we got our chance to print it !!

        printf("%d",j);
        
        
    }
    printf(" ");
    printf("\n");
    }

   return 0;
       
}