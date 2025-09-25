#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);

int main() {
    char line[MAXLINE];
    int len;
    while ((len = get_line(line, MAXLINE)) > 0) {
        // Remove trailing blanks and tabs
        int end = len - 1;
        // If last char is newline, ignore it for trimming
        if (end >= 0 && line[end] == '\n') end--;
        while (end >= 0 && (line[end] == ' ' || line[end] == '\t')) {
            end--;
        }
        // If line is not entirely blank, print it
        if (end >= 0) {
            // Print trimmed line and newline
            for (int i = 0; i <= end; i++)
                putchar(line[i]);
            putchar('\n');
        }
        // else: skip entirely blank lines
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