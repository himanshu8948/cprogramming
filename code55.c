#include<stdio.h>
#include<stdlib.h>


int main(){

int capacity = 10;
int length = 0;

char *s = malloc(capacity * sizeof(char));

printf("Enter the string ");

char ch ;


while((ch = getchar()) != '\n'){

    if(length == capacity){

        length = capacity*2;

        s = realloc(s,capacity*sizeof(char));
    }

s[length] = ch;
    length ++;
}
int left = 0;
int right = length-1;

while(left < right){

    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;


    left++ ;
    right--;
}

printf("Reversed String : %s\n",s);\


free(s);


return 0;



}
