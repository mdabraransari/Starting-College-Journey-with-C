#include <stdio.h>

int main() {
    int c;
    int last_was_blank = 0;  // flag to remember if last char was a blank

    while ((c = getchar()) != EOF) {
        if (c == ' ') {

            if (!last_was_blank) {   // first blank in a sequence
                putchar(c);
                last_was_blank = 1;  // now we are inside blanks
            }
            // else: skip additional blanks
        } else {
            putchar(c);
            last_was_blank = 0;  // reset flag since it's not a blank
        }
    }

    return 0;
}
