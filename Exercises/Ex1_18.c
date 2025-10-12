#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);

int main() {
    char line[MAXLINE];
    int len;
    while ((len = get_line(line, MAXLINE)) > 0) {
    
        int end = len - 1;

        if (end >= 0 && line[end] == '\n') end--;
        while (end >= 0 && (line[end] == ' ' || line[end] == '\t')) {
            end--;
        }
      
        if (end >= 0) {
        
            for (int i = 0; i <= end; i++)
                putchar(line[i]);
            putchar('\n');
        }

    }
    return 0;
}

int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}