#include <stdio.h>
#include <stdlib.h> // for exit() function
int main()
{
    FILE *fp = NULL; // Pointer to handle io using buffers
    int i;
    fp = fopen("Input.dat", "r"); // open in read mode by "r"
    if (!fp)
    { // fp is NULL - open error on file
        fprintf(stderr, "Failed to open Input.dat\n");
        exit(1);
    }
    fscanf(fp, "%d", &i);          // scan from Input.dat
    fclose(fp);                    // clear buffers and close file
    fp = fopen("Output.dat", "w"); // open in write / append mode by "w" / "a"
    if (!fp)
    { // fp is NULL - open error on file
        fprintf(stderr, "Failed to open Output.dat\n");
        exit(1);
    }
    fprintf(fp, "%d^2 = %d\n", i, i * i); // prints to Output.dat
    fclose(fp);                           // write back and clear buffers and close file
}
