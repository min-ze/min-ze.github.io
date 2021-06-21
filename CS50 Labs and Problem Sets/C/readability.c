#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

float computeL (int letters , float words);
float computeS (int sentences , float words);

int main (void)
{
    int letters=0;
    float words=0;
    int sentences=0;
    float index;
    string input = get_string("Text: ");
    for (int i=0; i<strlen(input); i++)
    {
        if (input[i] != ' ' && isalpha(input[i]))
            letters++;
        if (input[i] == ' ')
            words++;
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
            sentences++;
         
    }
    words = words + 1;
    
    index = 0.0588 * computeL (letters , words) - 0.296 * computeS (sentences , words) - 15.8;
    index = round(index);
    int x = truncf(index);
  
    
    if (index<1)
    {
        printf("Before Grade 1\n");
    }
    else if (index>16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", x);
    }
    
}

float computeL (int letters , float words)
{
    float L = (letters / words * 100);
    return L;
}

float computeS (int sentences , float words)
{
    float S = (sentences / words * 100);
    return S;
}
