#include <stdio.h>
#define FLUSH while (getchar() != '\n')
#define ERR1 "\aPrice incorrect. Re-enter both fields\n"
#define ERR2 "\aAmount incorrect. Re-enter both fields\n"
int main()
{
    int amount;
    double price;
    int ioResult;
    // Read price and amount
    do
    {
        printf("\nEnter amount and price: ");
        ioResult = scanf("%d%f", &amount, &price);
        if (ioResult != 2)
        {
            FLUSH;
            if (ioResult == 1)
                printf(ERR1);
            else
                printf(ERR2);
        } // if
    } while (ioResult != 2);
}