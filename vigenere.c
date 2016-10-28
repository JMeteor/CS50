#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Cipher Key method
    int cipherKey(int ciph, string key);
    
    // Check if input is correct
    if (argc != 2)
    {
        printf("INVALID KEY!");
        return 1;
    }
    
    string key = argv[1];
    int keyLength = strlen(key);
    for (int i = 0; i < keyLength; i++) //Check for invalid characters
    {
        if (!isalpha(key[i]))
        {
            printf("INVALID KEY!");
            return 1;
        }
    }
    
    string text = GetString(); //Get text to cypher
    int textLength = strlen(text); //Get text length
    int ciph =0;
    
    //Cipher loop
    for (int i = 0; i < textLength; i++)
    {
        char letter = text[i];
        if(isupper(letter)) //changes char if uppercase
        {
           char newLetter = (((letter - 'A') + cipherKey(ciph, key)) % 26) + 'A';
           printf("%c", newLetter);
           ciph++;
        }
        else if(islower(letter)) //changs char if lowercase
        {
           char newLetter = (((letter - 'a') + cipherKey(ciph, key)) % 26) + 'a';
           printf("%c", newLetter);
           ciph++;
        }
        else //if char is not a letter don't do anything
        {
           printf("%c", letter);
        }
    }
    printf("\n");
    return 0;
}

//Cipher Key function
int cipherKey(int ciph, string key)
{
    int keyLength = strlen(key);
    return tolower(key[ciph % keyLength]) - 'a';
}