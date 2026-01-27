// Core: RISCV-EC-v1.0.0
// Kernel: fibonacci_sec - computes first 100 Fibonacci numbers.

#include <stdint.h>

int main() {
    long long int fib[100]; // To hold the first 100 Fibonacci numbers
    int i;

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < 100; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }


    *(volatile uint8_t *)0xFF = 1;
    return 0;
}
