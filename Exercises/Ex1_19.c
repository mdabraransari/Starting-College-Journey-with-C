#include <stdio.h>

int main() {
   int c , i = 0;
   char array[1000];
   while (( c = getchar()) != EOF && i < 1000 )
   {
      array[i]= c;
      i++;
   }
   for(int j = i; j >= 0; j--){
       putchar(array[j]);
   }
   
   return 0;
}