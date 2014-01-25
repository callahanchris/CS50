#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c;
    do
    {
        printf("Enter an upper case letter: ");
        c = GetChar();
    }
    while (!(c >= 'a' && c <= 'a'));
        
    int newc = c | ('a' ^ 'A');
    printf("How about...... lower case? %c\n", newc);
    return 0;
}

