#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int8_t signed_value = -1;
    uint8_t unsigned_value = 255;

    printf("Signed (-1)   -> Dec: %4d, Hex: 0x%02X\n", signed_value, (unsigned char)signed_value);
    printf("Unsigned (255) -> Dec: %4u, Hex: 0x%02X\n", unsigned_value, unsigned_value);

    return 0;
}