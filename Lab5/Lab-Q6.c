#include <stdio.h>

int main() {
    int a = 5, b;

    // Pre-increment: ++a
    b = ++a; 
    printf("After pre-increment:\n");
    printf("a = %d, b = %d\n\n", a, b); // outputs 6 , 6

    // Reset value
    a = 5;

    // Post-increment: a++
    b = a++;  
    printf("After post-increment:\n");
    printf("a = %d, b = %d\n", a, b); // outputs 6 , 5

	return 0;
}	