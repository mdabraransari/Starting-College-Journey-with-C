#include <stdio.h>
int main(){

    float fahrenheit, celius;
    float upper , lower , step;
    lower = 0;
    upper = 200;
    step = 20;

    fahrenheit = lower;
    printf("Celsius to Fahrenheit Converter\n");
    while (fahrenheit <= upper)
    {
        celius = 5 * ( fahrenheit - 32)/ 9;
        printf("%0.0f \t %0.3f \n ", fahrenheit, celius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}