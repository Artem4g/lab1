#include <stdio.h>

int main(void)
{
    char chars[] = {'A', 'B', 'a', '0', '9'};
    int count = sizeof(chars) / sizeof(chars[0]);

    for (int i = 0; i < count; i++) {
        char c = chars[i];
        printf("Character: %c | Decimal: %3d | Hex: 0x%02X\n", c, c, (unsigned char)c);
    }

    return 0;
}