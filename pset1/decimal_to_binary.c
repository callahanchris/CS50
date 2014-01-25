// Program converting a decimal integer to binary

#include <stdio.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    int i;
    do
    {
        printf("Enter an integer: ");
        i = GetInt();
    }
    while ( i < 0 );
        
    int numBits = sizeof(int) * 8;
    
    for ( int j = numBits - 1; j >= 0; --j )
        printf(i & (1 << j ) ? "1" : "O");

    printf("\n");
    return 0;
}
