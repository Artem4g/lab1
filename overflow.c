#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t values[] = {254, 255};

    for (int i = 0; i < 2; i++) {
        uint8_t val = values[i];
        printf("Initial: %u, After ++: ", val);
        val++;
        printf("%u\n", val);
    }

    // Додатково перевіримо 255 + 1 та 255 + 2 явно
    uint8_t v1 = 255;
    printf("255 + 1 = %u\n", (uint8_t)(v1 + 1));
    printf("255 + 2 = %u\n", (uint8_t)(v1 + 2));

    return 0;
}