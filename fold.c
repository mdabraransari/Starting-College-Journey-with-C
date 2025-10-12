/*To Fold Long Line in shorter lines but next line after the complete word*/
#include <stdio.h>


int main()
{
    int c, col = 0;
    while ((c = getchar()) != EOF)
    {

        if (col >= 30 && c == ' ' )
        {
            putchar('\n');
            col = 0;
        }
        else
        {
            putchar(c);
            col++;
        }
        if(c == '\n'){
            col = 0;
        }
    }

    return 0;
}