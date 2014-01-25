// A program that switches the values of two variables

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    
    printf("Enter a value for x: ");
    int a = GetInt();
    printf("Enter a value for y: ");
    int b = GetInt();
    
    printf("x is %d\n", a);
    printf("y is %d\n", b);
    
    a ^= b;
    b ^= a;
    a ^= b;
    
    printf("x is %d\n", a);
    printf("y is %d\n", b);    
}

