#include <stdio.h>
#include <string.h>
#include <windows.h>

int i=0; j=0, c0=0;

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void letterPrint(char ch)
{
switch(ch){

case 'a':
    gotoxy(i, j);
    printf("  ####  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##  ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    c0++;
    j=0;
    i=10*c0;
    break;


case 'b':
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=0;
    i=10*c0;
    break;

};
/*

};*/





    }



int main()
{




    return 0;
}
