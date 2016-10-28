#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //time of shower
    printf("Please give me the length of your shower in minutes: ");
    int minutes = GetInt();
    //bottles per minute
    int bottles_pm = 12;
    //number of bottles used
    int bottles = minutes * bottles_pm;
    printf("During your shower you spend %d bottles\n", bottles);
}