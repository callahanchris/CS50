/* A program that implements the Caesar cipher. Enter the 
    number of terms to encrypt in the command line when 
    running the program, then enter the terms below. */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[])
{
    int k = atoi(argv[1]);
    
    // check that the number of terms has been entered when running the program
    if ( argc == 2 )
    {
        string input = GetString();
            for ( int i = 0, n = strlen(input); i < n; i++ )
            {
		// lowercase Caesar cipher
                if (input[i] >= 'a' && input[i] <= 'z')
                {
                    if ( input[i] + k > 'z' )
                        input[i] += (k - 26);
                    else
                        input[i] += k;
                    printf("%c", input[i]);
                }
                // uppercase Caesar cipher
		else if (input[i] >= 'A' && input[i] <= 'Z')
                {
                    if ( input[i] + k > 'Z' )
                        input[i] += (k - 26);
                    else
                        input[i] += k;
                    printf("%c", input[i]);                
                }
                else    
                    printf("%c", input[i]);
            }
            printf("\n");

    }
    else
        return 1;
    
}
