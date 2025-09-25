#include <stdio.h>
int main()
{
    char c;
    char character[10000];
    int i = 0;

    while ((c = getchar()) != EOF && i < 10000)

    {
        character[i] = c;
        i++;
    }
    for (int j = 0; j <= i; j++)
    {
        if (character[j] != character[i])
        {
            printf("%c\n", character[i]);

        }
        
    }
    
    return 0;
}