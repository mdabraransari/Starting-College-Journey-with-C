#include <stdio.h>

int lower(int c){
    // if( c >= 'A' && c <= 'Z'){
    //     return c + 'a' - 'A';
    // }
    // else {
    //     return c;
    // }
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
int main() {
   char  a[100];
   printf("Enter a String:\n");
//    scanf("%99s", &a);
   fgets(a, sizeof(a), stdin);
   for (int i = 0; a[i] != '\0'; i++)
   {
      a[i] = lower(a[i]);
   }
   printf("Lowercase: %s", a);
   
   return 0;
}