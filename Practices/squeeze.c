#include <stdio.h>

void squeeze(char s[], char c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    /*
    upper code is quivalent to
     if (s[i] != c) {
     s[j] = s[i];
     j++;
}
    */
    s[j] = '\0';
}
int main()
{
    char a[] = "hello how are you";
    char c = 'a';
    squeeze(a, c);
    printf("%s\n", a);
    return 0;
}