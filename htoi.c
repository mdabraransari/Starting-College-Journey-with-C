#include <stdio.h>
#include <ctype.h>
int htoi(const char s[]){
    int i = 0 , n = 0;
    if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
        i = 2;

    }
    for (; s[i] != '\0'; i++){
        char c = tolower(s[i]);
        if (c >= '0' && c <= '9'){
             n = n * 16 + (c - '0');
        }
        else if (c >= 'a' && c <= 'f'){
            n = n * 16 + (c - 'a' + 10);
        }
        else {
            break;
        }
        
    }
    return n;
}
int main(){
    // printf("%d\n", htoi("0x1a"));
    printf("%d\n", htoi("0xff"));

}