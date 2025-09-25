#include <stdio.h>

void squeeze(char s[], int c)
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
    return 0;
}