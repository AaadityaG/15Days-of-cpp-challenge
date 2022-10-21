#include <stdio.h>

int main()
{    
    FILE* spTemps;    // file handler - more like pointer of files

    if((spTemps = fopen("sample.txt", "r")) == NULL){
        printf("Error in opening file");
    }
    if (fclose(spTemps) == EOF)
    {
        printf("\aError Closing file.");
    }
    
    return 0;
}