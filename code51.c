#include<Stdio.h>

void printGFG(int n){

    if(n == 0){

        return ;
    }
    
    printGFG(n-1);
    printf("%s","GFG");

}

int main(){

    int n;

    printf("Enter the no. of times you wanted to print GFG ! >>>");
    scanf("%d",&n);

    printGFG(n);

    return 0;

}