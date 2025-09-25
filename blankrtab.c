#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else {
            putchar(c);
        }
    }
    
    return 0;
}