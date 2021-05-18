#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc , string argv [2])
{
    if (argc == 2)
    {
        for (int i=0; i<strlen(argv[1]); i++)
        {
            if (isalpha(argv[1][i]))
            {   
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    
        int key = atoi(argv[1]);
        printf("%i\n", key);
        
        string message = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int j=0; j<strlen(message); j++)
        {
            if (message[j]>='A' && message[j]<='Z')
            {
                printf("%c", (((message[j] - 'A') + key) % 26) + 'A');
            }
            else if (message[j]>='a' && message[j]<='z')
            {
                printf("%c", (((message[j] - 'a') + key) % 26) + 'a');
            }
            else
            {
                printf("%c", message[j]);
            }
        }
        printf("\n");
    }
    
    else
    {
        printf("Usage: ./caesar key\n");
    }
    
}
