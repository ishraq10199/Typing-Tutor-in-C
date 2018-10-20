void gameStart(){
    time_t rawtime;
    struct tm * timeinfo;

    FILE * ptr;
    int score = 0, word_count = 0;
    double wpm;
    char name[10];
    ptr = fopen("myfile.txt", "r");

    char word[15];
    char input[15];

    clock_t start_time, end_time;
    double time_taken;
    start_time = clock();

    while(fgets(word, 15, ptr)!=NULL)
    {

        time(&rawtime);
        timeinfo = localtime(&rawtime);

        word[strlen(word)-1]='\0';
        word_count++;
        for(int p=0; p<=strlen(word); p++){
            letterPrint(word[p]);
        }
                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

                CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
                GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
                int originalAttrs = ConsoleInfo.wAttributes;
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

        printf("\n\n\t\t__INPUT__ >> ");
                SetConsoleTextAttribute(hConsole, originalAttrs);
        gets(input);
        if(strcmp(input, word)==0)
            score++;

        system("cls");
        i=0;
        c0=0;

    }
    fclose(ptr);

    end_time = clock() - start_time;

    time_taken = (double)(end_time/CLOCKS_PER_SEC);
    printf("\t\tYou took %g seconds\n", time_taken);
    printf("\tYou got %d correct words out of %d\n", score, word_count);
    wpm = (double)(word_count/((time_taken)/60));
    printf("SCORE : %g wpm", wpm);

    printf("\n\n\t    PRESS ANY KEY TO CONTINUE...\n");
    getche();
    system("cls");
    printf("Do you want to save today's progress to record(y/n)?\n>> ");

    if(getchar()=='y'){
        printf("Enter your nickname >> ");
        getchar();
        gets(name);
        writeToFile(name, timeinfo, score, word_count, wpm);

    }
}
