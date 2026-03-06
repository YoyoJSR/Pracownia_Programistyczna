#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =6,b=3; //a = 0b0110, b = 0b0011
    printf("%d\n", a & b); // AND - 0b0010 = 2
    printf("%d\n", a | b); // OR - 0b0111 = 7
    printf("%d\n", a ^ b); // XOR - 0b0101 = 5
    printf("%u\n", ~a); // NOT - 0b1111... 1001
    printf("%d\n", a<<2); // LEFT SHIFT - 0b011000 = 24 (mnozenie przez potege 2)
    printf("%d\n", a>>2); // RIGHT SHIFT 0b0001 = 1
    return 0;



}
