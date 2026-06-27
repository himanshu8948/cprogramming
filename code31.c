#include<stdio.h>
void printintro(){
printf("=======Hey lets play a game we have 21 matchsticks =======\n-- ");

printf("======You and I would choose Some no. of matchsticks alternately --ok====== \n");

printf("======Who would left with the last matchstick to choose would loose ! ======\n");

printf("REMEMBER __ only from (1,2,3,4) choose __ok! ");
printf("======Lets CLICK enter to STARK the game !======\n");
}
int main(){
int userchoose,comchoose,total_matches;
total_matches = 21;
printintro();
getchar();

while(total_matches > 1){
printf("tatal matches remaining : %d\n",total_matches);
printf("choose the no. of ====MATCHSTICKS==== you would prefer to pick :");
scanf("%d",&userchoose);
if(userchoose<1 || userchoose>4 ){

    printf("Hey invalid pick ! ~ we only have to choose from 1,2,3,4 no. :");
    continue;
} 

total_matches -= userchoose;
comchoose = 5 -  userchoose;
total_matches -= comchoose;
printf("I would choose = %d\n",comchoose);
}

{
printf("Only one matchstick is remaining !\n");
printf("You would need to choose since !\n");
printf("YOU ==== LOOSE ==== hehe!");
}
return 0;


}