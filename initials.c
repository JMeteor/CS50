#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>  

#define SPACE ' '

int main(void)
{
    string s = GetString();
    
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if (s != NULL)
        {
            if (s[i] == s[0])
            {
                printf("%c", toupper(s[i]));
            }
            else if(s[i] == SPACE)
            {
                printf("%c", toupper(s[i + 1]));   
            }
        }
    }
    printf("\n");
}
