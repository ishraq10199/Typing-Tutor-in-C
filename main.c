#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "filewriter.h"
#include "letterman.h"
#include "round.h"


void intro(){
    int h =5;
    while(h--){
        system("cls");
        printf("\n\n\n\t\t\tGet your fingers in place.\n\n\t\t\tRound starts in %d seconds", h);
        Sleep(1000);

    }
    system("cls");
    printf("\n\n\n\t\t_[ROUND_START]_\n");
    Sleep(2000);
    system("cls");
}

void userFileRead(){
    FILE * fp;
    fp = fopen("USER_PROGRESS_DATA.txt", "r");
    char line[200];

    printf("\n__________________________________________________________________________________________________________\n");
    while(fgets(line, 200, fp)!=NULL)
        printf("%s", line);
    printf("\n__________________________________________________________________________________________________________\n");
}


int main()
{

    char g, h;

    printf("\t\t\t\tWelcome, user!\n\t\t\t   What do you wish to do?\n\n");
    printf("\t\t1. Begin typing\n\t\t2. See progress data file\n\t\t3. Exit\n\n");
    printf("\t\t\t\t_INPUT_ >> ");
    g = getche();

    switch(g){
case '1':
        intro();
        gameStart();
        break;
case '2':
        system("cls");
        userFileRead();
        printf("\n\nPress any key to continue...\n\n");
        getche();
        system("cls");
        main();
        break;

case '3':
        system("cls");
        printf("\n\n\t\tAre you sure you want to exit? (y/any_key)\n");
        h = getche();
        if(h=='y'||h=='Y'){
            system("cls");
            printf("\n\n\t\t\tSee you soon!\n\n");
            break;
        }

        else{
            system("cls");
            main();
        }
        break;
    }

    return 0;
}
