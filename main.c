#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "filewriter.h"
#include "letterman.h"
#include "round.h"


void intro(){
    int h =7;
    while(h--){
        printf("\n\n\n\t\t\tGet your fingers in place.\n\n\t\tRound starts in %d seconds");
        Sleep(h*1000);
        system("cls");
    }

    printf("\n\n\n\t\t_[ROUND_START]_\n");
    Sleep("2");
    system("cls");
}

void userFileRead(){
    FILE * fp;
    fp = fopen("USER_PROGRESS_DATA.txt", "r");
    char line[200];

    printf("\n____________________________________________________________________________________________\n");
    while(fgets(line, 200, fp)!=NULL)
        printf("%s", line);
    printf("\n____________________________________________________________________________________________\n");
}


int main()
{
    char g;
    printf("\t\t\t\tWelcome, user!\n\t\tWhat do you wish to do?\n");
    printf("\t\t1. Begin typing\n\t\t2. See progress data file\n\t\t3. See your greatest wpm count\n\t\t4.Exit\n\n");
    printf("\\INPUT >> ");
    g = getche();

    switch(g){
case '1':
        intro();
        gameStart();
case '2':
        system("cls");
        userFileRead();


    }

    return 0;
}
