#include <stdio.h>
#include <math.h>
int main()
{

    int n, isPrime = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    if (n <= 1)
    {
        isPrime = 0;
    }
    else if ( n == 2) {
        isPrime = 1;
    }
    else {
        for (int i = 3; i < sqrt(n); i += 2)
        {
                if (n % i == 0)
                {
                    isPrime = 0;
                    break;
                }
                
        }
        
    }
    
    if(isPrime){
        printf("It is a Prime Number.\n");
    }
    else{
        printf("It is not a Prime Number.\n");
    }

    return 0;
}