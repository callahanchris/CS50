// A program that will make your text LoOk LiKe ThIs

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = GetString();
    int i;
    int length = strlen(s);
    int count = 0;
    for (i = 0; i < length; i++)
    {
        // check if alphabetic
        if ( (s[i] >= 'A' && s[i] <= 'Z') || 
             (s[i] >= 'a' && s[i] <= 'z') )
        {
            if ( !(count % 2) )
                s[i] &= ~('a' - 'A');
            else
                s[i] |= ('a' - 'A');
            count++;
        }     
    }
    printf("%s\n", s);
    
    return 0;    
}
