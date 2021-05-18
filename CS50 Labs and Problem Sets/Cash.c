#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    //get positive value from user
    float change;
    int count;
    count=0;
    do
    {
    change = get_float("Change owed: ");           
    }
    while (change<0);
    
    //convert float value to integer
    int cent;
    cent = round(change * 100);
    
    //dividing by 20
    while (cent>=25)
    {
        cent = cent - 25;
        count++;
    }
    
    //dividing by 10
    while (cent>=10)
    {
        cent = cent - 10;
        count++;
    }
    
    //dividing by 5
    while (cent>=5)
    {
        cent = cent - 5;
        count++;
    }
    
    //dividing by 1
    while (cent>=1)
    {
        cent = cent - 1;
        count++;
    }
    
    //print number of coins
    printf("%i\n", count);
}
