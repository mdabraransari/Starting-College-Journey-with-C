#include <stdio.h>
int main() {
   FILE *file = fopen("message.txt", "w");
   if (file == NULL)
   {
    printf("Error opening file!\n");
    return 1;
   }
   // write to file
   fprintf(file, "Hello, How are you\n I am fine.");
   // close file
   fclose(file);
   // now reading the file
   file = fopen("message.txt","r");
   if (file == NULL)
   {
      printf("Error opening file!\n");
      return 1;
   }
   // read and display file content
   char line[100];
   while (fgets(line, 100, file) != NULL){
      printf("%s", line);
   }
   //close the file again
   fclose(file);
   
   
   return 0;
}