#include <stdio.h>

int bitcount(unsigned x, int bits)
{
   int count = 0;
   for( int i = 0; i < 32; i++){
    if(bits == 1){
        if(x & (1U << i))
           count ++;
    } else {
        if(!(x & (1U << i)))
          count++;
    }
   }
   return count;
}

int main()
{
    int a, bits;
    printf("Enter a Number:\n");
    scanf("%d", &a);
    printf("Enter bits (0 and 1 only):\n");
    scanf("%d", &bits);
    printf("The Number of %d's in %d is %d", bits, a, bitcount(a, bits));

    return 0;
}