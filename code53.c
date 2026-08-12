#include<Stdio.h>
#include<math.h>
int printchain(int n){


     if (n == 0){

        return 0;
     }

     int current_cube = (int)round(pow (n,3));
    
    if (n == 1){

        printf("%d",current_cube);

    }
    else
    {
        printf("%d + ",current_cube);
    }

    return current_cube + printchain(n-1);
}

int main(){

    int n ;

    printf("Enter the no. to print the series !>>>");
    scanf("%d",&n);

    int total_sum = printchain(n);

    printf(" = %d",total_sum);



    return 0;
    
}