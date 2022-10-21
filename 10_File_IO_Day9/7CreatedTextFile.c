#include <stdio.h>
int main()
{
    FILE *spText; // Stream
    int c, closeStatus;
    printf("This program copies input to a file.\n");
    printf("When you are through, enter <EOF>.\n\n");
    if (!(spText = fopen("7My_New_Text_File.txt", "w")))
    {
        printf("Error opening My_New_Text_File.txt for writing");
        return (1);
    }                              // if open
    while ((c = getchar()) != EOF) // Read characters from stdin. Use ^Z for EOF
        fputc(c, spText);          // Write characters to file
    closeStatus = fclose(spText);
    if (closeStatus == EOF)
    {
        printf("Error closing file\a\n");
        return 100;
    } // if
    printf("\n\nYour file is complete\n");
    return 0;
}