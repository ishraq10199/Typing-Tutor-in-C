void writeToFile(const char * name, struct tm * time, int score, int word_count, double wpm)
{
    FILE * uptr;
    uptr = fopen("USER_PROGRESS_DATA.txt", "a");
    char a[50];
    strcpy(a, asctime(time));
    a[strlen(a)-1]='\0';
    fprintf(uptr, "%s\t\t\t%s\t \t%d / %d\t\t\t\t%g\n", name, a, score, word_count, wpm);

    fclose(uptr);

    system("cls");
    printf("\n\n\tRECORDED TO FILE!\n");
    Sleep(3000);
    system("cls");
    main();

}
