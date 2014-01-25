#include <stdio.h>

typedef char * string;
string GetString(void);

int main(int argc, char* argv[])
{
    char c;
    do
    {
        printf("Enter a lower case letter: ");
        c = GetChar();
    }
    while (!(c >= 'a' && c <= 'z'));
    int position = c - 'a';
    char newc = 'A' + position;
    printf("How about..... upper case? %c\n", newc);
    return 0;
}

