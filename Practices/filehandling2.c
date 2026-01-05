#include <stdio.h>
int main() {


   FILE *file;
   int line = 0, words = 0;
   char ch;
   file = fopen("message.txt", "r");
   if (file == NULL)
   {
    printf("File not found!");
    return 1;
   }

   while ((ch = fgetc(file)) != EOF){
    if (ch == '\n')
    {
        line++;

    }
    if (ch == ' ' || ch == '\n')
    {
        words++;
    }
    
    
   }
   fclose(file);

   printf("Total Lines = %d\n", line+1);
   printf("Total words = %d\n", words);
   return 0;
}