// Exercise 1 - 20. Write a program detab that replaces tabs in the input with the proper number
//                  of blanks to space to the next tab stop.Assume a fixed set of tab stops,
//     say every n columns.Should n be a variable or a symbolic parameter ?
#include <stdio.h>
#define TAB 8
int main()
{
    int c, col = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            int spaces = TAB - (col % TAB);
            for (int i = 0; i < TAB; i++)
            {

                putchar(' ');
                col++;
            }
        }
        else if (c == '\n')
        {
            putchar(c);
            col = 0;
        }

        else
        {
            putchar(c);
            col++;
        }
    }

    return 0;
}