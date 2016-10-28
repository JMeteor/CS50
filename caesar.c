#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("invalid key");
        return 1;
    }
    else
    {
        //Convert string into int
        int k = atoi(key) % 26;
        //Check if proper k
        if (k == 0)
        {
            printf("invalid key");
            return 1;
        }
        
        //Input text
        string p = GetString();
        if(p != NULL)
        {
            //Encrypting process:
            for (int i = 0, n = strlen(p); i < n; i++)
            {
                int cryp = 0;
                //Checks if characters are letters of alphabet
                if (isalpha(p[i]))
                {
                    //Encrypt lowercase characters:
                    if (islower(p[i]))
                    {
                        cryp = (((int)(p[i] - 97 + k) % 26) + 97); 
                        printf("%c", (char) cryp);
                    }
                    //Encrypt uppercase characters:
                    else
                    {
                        cryp = (((int)(p[i] - 65 + k) % 26) + 65);
                        printf("%c", (char) cryp);
                    }
                }
                else
                {
                    printf("%c", p[i]);
                }
            }
            printf("\n");
            return 0;
        }
    }
}