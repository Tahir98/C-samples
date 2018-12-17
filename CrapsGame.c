#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status{STARTED,WON,LOST,AGAIN};

void game();
int rollDice();
void printResult();
void start();

enum Status gameStatus;
int sum,i1,i2;
int myPoint;

int main(){
    start();
    return 0;
}

void start(){
    gameStatus = STARTED;
    sum = 0;
    myPoint = 0;

    game();
}

void game(){
    srand(time(NULL));

    sum = rollDice();

    switch (sum){
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = AGAIN;
            myPoint = sum;
            printf("Point is:%d\n",myPoint);

            while(gameStatus == AGAIN){
                sum = rollDice();

                if(sum == myPoint){
                    gameStatus = WON;
                }else if(sum == 7){
                    gameStatus = LOST;
                }
            }
            break;        
    }

    printResult();
}   

int rollDice(){
    i1 = 1+rand()%6;
    i2 = 1+rand()%6;

    printf("Player rolled %d + %d = %d\n",i1,i2,i1+i2);
    return i1 + i2; 
}

void printResult(){
    int restarter=0;

    if(gameStatus == WON){
        printf("YOU WON\n\n");
    }else if(gameStatus == LOST){
        printf("YOU LOST\n\n");
    }

    printf("press 1 if you want to play again:");
    scanf("%d",&restarter);

    if(restarter==1){
        start();
    }
}