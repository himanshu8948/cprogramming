#include<stdio.h>

void printtillN(int n){

    if(n == 0){

        return;
    }
    printf("%d ",n);
    printtillN(n-1);
}

int main(){


    int n;

    printf("Enter the no. for which we have to print descending order ! >>>>");
    scanf("%d",&n);

    printtillN(n);

    return 0;
}