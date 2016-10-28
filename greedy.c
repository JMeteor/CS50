#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    float change;
    do
    {
        //ask for amount of change
        printf("Input amount of change in $0.00 format: ");
        change = GetFloat();
            }
    while (change < 0.00);

    int money = round(change * 100);
    int change_25 = money / 25;
    int change_10 = (money % 25) / 10;
    int change_05 = ((money % 25) % 10) / 5;
    int change_01 = (((money % 25) % 10) % 5) / 1;
    //calculating number of quarters
    if (money % 25 == 0)
    {
        printf("%d\n", change_25);
    }
    else
    {
        //calculating number of dimes
        if ((money % 25) % 10 == 0 )
        {
            int tcoins = change_25 + change_10;
            printf("%d\n", tcoins);
        }
        else
        {
            //calculating number of nickle
            if (((money % 25) % 10) % 5 == 0)
            {
                int tcoins = change_25 + change_10 + change_05;
                printf("%d\n", tcoins);
            }
            //calculating number of pennies
            else
            {
                int tcoins = change_25 + change_10 + change_05 + change_01;
                printf("%d\n", tcoins);
            }
        }
    }
}
