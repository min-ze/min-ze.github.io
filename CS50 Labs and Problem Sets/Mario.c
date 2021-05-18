#include <cs50.h>
#include <stdio.h>


int main (void)
{
    // getting a positive interger from user
    int height;
    int width;
    int dots;
    width=0;
    do
    {
        height = get_int("Height: ");
    }
    while (height<1 || height>8);
    
    dots = height - 1;
    
    for (int i=0; i<height; i++)
    {
        for (int z=0; z<dots; z++)
        {
            printf(".");
        }
        
        for (int j=0; j<width; j++)
        {
            printf("#");
        }
        width++;
        dots--;
        printf("#");
        printf("\n");
    }
}
