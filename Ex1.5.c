#include <stdio.h>
int main(){

    float fahrenheit, celius;
    
    printf("Celsius to Fahrenheit Converter\n");
    for (  fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20)
    {
        celius = 5 * ( fahrenheit - 32)/ 9;
        printf("%0.0f \t %0.3f \n ", fahrenheit, celius);

    }
    
    return 0;
}