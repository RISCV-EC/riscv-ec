#include <stdint.h>

volatile uint32_t sink = 0;

int main(void) {
    uint32_t acc = 0;
    for (uint32_t i = 100; i > 0; i--) {
        acc += i;
    }
    sink = acc;
    return 0;
}
