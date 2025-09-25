#include <stdio.h>

int main(){
    long int blank, tab, newline, *c = NULL;
    blank = 0;
    tab = 0;
    newline = 0;
    while ( ( c = getchar() ) != EOF)
    {
        if (c == ' ')
        {
           blank++; 
        }
        else if ( c == '\t'){
            tab++;
        }
        else if ( c == "\n"){
            newline++;
        }
        
    }
    printf("Blanks: %ld\n", blank);
    printf("Tabs: %ld\n", tab);
    printf("Newlines: %ld\n", newline);
    

}