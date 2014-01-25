/********************************************************
*   This is a simple C program that allows you to       *
*   determine whether a given credit card number        *
*   is a Visa, American Express, or MasterCard.         *
*                                                       *
*   Chris Callahan                                      *
*   Fall 2012 CS50 Hacker1 pset                         *
*********************************************************/

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long long i, xadd, x2;
    int addsum, x2prod, sum;

    // get user's CC number ;)
    do
    {
        printf("Your credit card number, please:\n");
        i = GetLongLong();
    }
    while ( i < 0 );       

    // sum every other digit starting w/ the the last
    for ( xadd = i, addsum = 0; xadd > 0; xadd /= 100 )
        addsum += xadd % 10;

    // double every other digit starting w/ 2nd to last
    // then sum the individual digits of these products
    for ( x2 = i / 10, x2prod = 0; x2 > 0; x2 /= 100 )
    {
        if ( 2 * (x2 % 10) > 9 )
        {
            x2prod += (2 * (x2 % 10)) / 10;
            x2prod += (2 * (x2 % 10)) % 10;
        }
        else
            x2prod += 2 * (x2 % 10);
    }
    
    sum = addsum + x2prod;

    // check to see if the CC number is in the appropriate range
    if ( sum % 10 == 0 )
    {   
        if ( (i >= 340000000000000 && i < 350000000000000) || (i >= 370000000000000 && i < 380000000000000) )
            printf("AMERICAN EXPRESS\n");
        else if ( i >= 5100000000000000 && i < 5600000000000000 )
            printf("MASTERCARD\n");
        else if ( (i >= 4000000000000 && i < 5000000000000) || (i >= 4000000000000000 && i < 5000000000000000) )
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");

    return 0;
}
