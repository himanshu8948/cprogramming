#include<Stdio.h>

int a = 10;
int b = 12;

void addextranovalue(int a){
          a = a+1;
                }

void reference(int*b){
          *b = *b+3;
                }


int main(){

int result;

addextranovalue(a);

printf("%d\n" ,a);

reference(&b);

printf("%d",b);

return 0;

}