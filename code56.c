#include<stdio.h>
#include<stdlib.h>


int printpalindrome(char string[],int left,int right){

    if(left >= right){

        return 1;
    }

    if(string[left] != string[right] ){
        
        return 0;
    }

    return printpalindrome(string,left+1,right-1);

    }

    int main(){


        int capacity = 10;
        int length = 0;

       char *string = malloc(capacity*sizeof(char));

       printf("Enter the string ");

       char ch;
       
       while((ch = getchar())!= '\n'){

        if(capacity == length){
          
            capacity = capacity*2;

            string = realloc(string,capacity*sizeof(char));
        }
        string[length] = ch;
        length++;
       }
       
      int result =  printpalindrome(string,0,length-1);

      if(result == 1){

        printf("The given string is palindrome ");

      }
      else{

        printf("The given string is not a palindrome");
      }

      

      return 0;

    }


