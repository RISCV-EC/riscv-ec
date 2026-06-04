// Core: RISCV-EC-v1.1.0-PF
// Kernel: rgb_hlb - RGB to HSL (compact fixed-point) example.


typedef struct {
    unsigned char r, g, b;
} RGBColor;

typedef struct {
    unsigned char h, s, l;
} HSLColor;

volatile unsigned char sink;

static void RGBtoHSL(RGBColor rgb, HSLColor *hsl) {
    unsigned char max = rgb.r;
    unsigned char min = rgb.r;

    if (rgb.g > max) max = rgb.g;
    if (rgb.b > max) max = rgb.b;
    if (rgb.g < min) min = rgb.g;
    if (rgb.b < min) min = rgb.b;

    hsl->l = (unsigned char)((max + min) >> 1);

    if (max == min) {
        hsl->s = 0;
        hsl->h = 0;
        return;
    }

    hsl->s = (unsigned char)(max - min);

    if (max == rgb.r) {
        hsl->h = (unsigned char)(rgb.g - rgb.b);
    } else if (max == rgb.g) {
        hsl->h = (unsigned char)(rgb.b - rgb.r + 85);
    } else {
        hsl->h = (unsigned char)(rgb.r - rgb.g + 170);
    }
}

int main() {
    RGBColor rgb = {255, 0, 0};
    HSLColor hsl;

    RGBtoHSL(rgb, &hsl);
    sink = (unsigned char)(hsl.h + hsl.s + hsl.l);
    *(volatile unsigned char *)0xFF = 1;

    return (int)sink;
}
