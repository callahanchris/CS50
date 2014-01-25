#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c;
    do
    {
        printf("Enter a lower case letter: ");
        c = GetChar();
    }
    while (!(c >= 'a' && c <= 'z'));
        
    int newc = c - 'a' + 'A';
    printf("How about..... upper case? %c\n", newc);
    return 0;
}

