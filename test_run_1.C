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
    char *ptr;                                                      //FILE POINTER CREATED. It is just a char type pointer that can read text
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);         //Line 19 to 23 is not used for anything important
    CONSOLE_CURSOR_INFO info;                                       //They just remove the blinking cursor from the console
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);

    int i, j;

    ptr = fopen("myfile.txt", "r");                                 //Pointer now points to the start of the file

    char word [10];                                                 //Every word is 10 characters long

    while(ptr!=EOF)                                                 //continue taking words as long as file doesn't end
    {
        fgets(word, 10, ptr);                                       //get one word, and assign it to the word[] array declared in line 29

        j = rand()%20;                                              //x-axis position is randomized for each fall

        for(i=0; i<=20; i++)                                        //this loop makes the position of the word change from top to bottom
        {
            gotoxy(j, i);                                           //x axis is same for each fall, only y changes
            puts(word);                                             //prints word[] as a string
            Sleep(20);                                              //makes the animation delay 20 milliseconds
            system("cls");                                          //clears the screen before next word is printed
        }


    }

    fclose(ptr);                                                    //its best practice to close the file after using it

    return 0;
}
