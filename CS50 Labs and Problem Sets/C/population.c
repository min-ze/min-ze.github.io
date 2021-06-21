#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int x;
    x = get_int("what is the starting population size?" );
    while (x<9)
    {    
        x = get_int("what is the starting population size?" );
    }
 
    // TODO: Prompt for end size
    int end;
    end = get_int("what is the ending population size?" );
    while (end<x)
    {
        end = get_int("what is the ending population size?" );
    }
    
    // TODO: Calculate number of years until we reach threshold
    int year=0;
    while (x<end)
    {
        x=x+(x/3)-(x/4);
        year++;
    }


    // TODO: Print number of years

    
    printf("years:%i\n",year);
    
}               
