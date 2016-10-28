#include <cs50.h>
#include <stdio.h>

int main (void)
{
    float change;

    do
    {
        printf("Input amount of change in $0.00 format: ");
        change = GetFloat();
    }
    while (change < 0.00);

    int money = change * 100;
    int change_25 = money / 25;
    int change_10 = (money % 25) / 10;
    int change_05 = ((money % 25) % 10) / 5;
    int change_01 = (((money % 25) % 10) % 5) / 1;
    //calculating number of quarters
    if (money % 25 == 0)
    {
        printf("%d quarters\nTotal amount of coins: %d\n", change_25, change_25);
    }
    else
    {
        //calculating number of dimes
        if ((money % 25) % 10 == 0 )
        {
            int tcoins = change_25 + change_10;
            printf("%d quarters and %d dimes\nTotal amount of coins: %d\n", change_25, change_10, tcoins);
        }
        else
        {
            //calculating number of nickle
            if (((money % 25) % 10) % 5 == 0)
            {
                int tcoins = change_25 + change_10 + change_05;
                printf("%d quarters, %d dimes and %d nickles\nTotal amount of coins: %d\n", change_25, change_10, change_05, tcoins);
            }
            //calculating number of pennies
            else
            {
                int tcoins = change_25 + change_10 + change_05 + change_01;
                printf("%d quarters, %d dimes, %d nickles and %d pennies\nTotal amount of coins: %d\n", change_25, change_10, change_05, change_01, tcoins);
            }
        }
    }
}
