#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int word = 0, c, blanks = 0, state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++blanks;
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++word;
        }
        
    }
    for (size_t i = 0; i <= word; i++)
    {
        /* code */
         if(i == 0 ){
            printf("____\n");
         }
         printf("|  |\n");
         
    }

    printf("Total words: %d\n", word);
    
  
}