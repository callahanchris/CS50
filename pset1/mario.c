/* A program that displays two towers that look 
    something like you'd see in Super Mario World. */

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height, row, spaces, hashes;
    char x = '#';
    char s = ' ';
    
    do
    {
        printf ("Height: ");
        scanf ("%i", &height);
    }
    while ( height < 0 || height > 23 );
    
    row = 1;
    
    while ( row <= height )
    {
        for ( spaces = height - row; spaces > 0; --spaces )
            printf ("%c", s);
        for ( hashes = 1; hashes <= row; ++hashes )
            printf ("%c", x);
        printf ("  ");
        for ( hashes = 1; hashes <= row; ++hashes )
            printf ("%c", x);
        printf ("\n");
        ++row;
    }
    return 0;
}
