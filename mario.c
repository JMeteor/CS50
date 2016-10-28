#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int height;
    
    do 
    {
        //asking for height
        printf("Please give me the height of pyramid, between 0 and 23: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    int space;
    int hash;
    //printing
    for (int row = 1; row <=height; row++)
    {
        //print spaces (space = height - row)
        for (space = 0; space < (height - row); space++)
        {
            printf("%s", " ");
        }
            //print hashes (hash = row + 2)
            for (hash = 1; hash < (row + 2); hash++)
            {
                printf("#");
            }
            //go to next line
            printf("\n");
    }
    return 0;
}