//Write a program to print the inverted "Right angle triangle" wall. The length of the perpendicular and base is n

#include<Stdio.h>
int main(){

int n;

printf("Enter the perperdicular and breadth dimension !");
scanf("%d",&n);


for(int i = 1; i<= n ; i++){

    for(int j = n ; j>= i ;j-- ){

        printf("*");
    }
    
    printf(" ");
    printf("\n");

}
    return 0;
}