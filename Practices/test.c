#include <stdio.h>
int strlen(char s[]){
       int i = 0;
       while (s[i] != '\0')
       {
        ++i;
       }
       return i;
       
}
int main() {
   char c[] = "hello";
//    int a = strlen(c);
   printf("%d", strlen(c));
   return 0;
}