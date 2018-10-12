#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main()
{
    FILE * ptr;
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);

    int i, j;

    ptr = fopen("myfile.txt", "r");

    char word [10];

    while(ptr!=EOF)
    {
        fgets(word, 10, ptr);

        j = rand()%20;

        for(i=1; i<=20; i++)
        {
            gotoxy(20+j, i);
            puts(word);
            Sleep(20);
            system("cls");
        }


    }

    fclose(ptr);

    return 0;
}
