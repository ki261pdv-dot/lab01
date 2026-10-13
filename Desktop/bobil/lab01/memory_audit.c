#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Size of char: %u byte(s)\n", (unsigned int)sizeof(char));
    printf("Size of int: %u byte(s)\n", (unsigned int)sizeof(int));
    printf("Size of float: %u byte(s)\n", (unsigned int)sizeof(float));
    printf("Size of double: %u byte(s)\n", (unsigned int)sizeof(double));
    
    int max_val = INT_MAX;
    printf("Max int value: %d\n", max_val);
    printf("Max int + 1 (overflow): %d\n", max_val + 1);
    
    return 0;
}