// Core: RISCV-EC-v1.0.0
// Kernel: count_down - accumulates 100..1 into a sum.

#include <stdint.h>

volatile uint32_t sink = 0;

int main(void) {
    uint32_t acc = 0;
    for (uint32_t i = 100; i > 0; i--) {
        acc += i;
    }
    sink = acc;
    *(volatile uint8_t *)0xFF = 1;
    return 0;
}
