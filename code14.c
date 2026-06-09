#include<stdio.h>
int main(){

int totalnotes,notehun,notefifty,noteten,notefive,notetwo,noteone,amount;

printf("enter the amount :");
scanf("%d",&amount);

notehun = amount/100;
amount = amount % 100;
notefifty = amount/50;
amount = amount % 50;
noteten = amount/10;
amount = amount % 10;
notefive = amount/5;
amount = amount % 5;
notetwo = amount/2;
amount = amount % 2;
noteone = amount/1;
amount = amount % 1;

totalnotes = notehun+notefifty+notefive+noteten+notetwo+noteone;

printf("the minimum no. of notes required for the sum of the total amount :%d",totalnotes);

return 0;
}