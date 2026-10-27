#include <stdio.h>

void print_binary(unsigned char value)
{
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

int main(void)
{
    unsigned char test_values[] = {0, 1, 10, 65, 127, 128, 255};
    int count = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < count; i++) {
        unsigned char val = test_values[i];
        printf("Decimal: %3u | Hex: 0x%02X | Binary: ", val, val);
        print_binary(val);
        printf("\n");
    }

    return 0;
}