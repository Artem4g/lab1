#include <stdio.h>
#include <stdint.h>

void print_binary(unsigned char value)
{
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

int main(void)
{
    int input;
    printf("Enter value (0-255): ");
    if (scanf("%d", &input) != 1 || input < 0 || input > 255) {
        printf("Invalid input! Please enter a number between 0 and 255.\n");
        return 1;
    }

    unsigned char val = (unsigned char)input;

    printf("\n--- Single Byte Inspection ---\n");
    printf("Decimal:      %u\n", val);
    printf("Hexadecimal:  0x%02X\n", val);
    printf("Binary:       ");
    print_binary(val);
    printf("\n");
    if (val >= 32 && val <= 126) {
        printf("Character:    %c\n", val);
    } else {
        printf("Character:    (non-printable)\n");
    }

    // Додаткове завдання для 32-бітного значення
    uint32_t big_value = 0x12345678;
    unsigned char *p = (unsigned char *)&big_value;

    printf("\n--- 32-bit Memory Inspection ---\n");
    printf("Value: 0x%08X\n", big_value);
    printf("Size: %zu bytes\n\n", sizeof(big_value));
    printf("Memory:\n");
    for (int i = 0; i < 4; i++) {
        printf("byte %d: 0x%02X\n", i, p[i]);
    }

    // Визначення Endianness
    if (p[0] == 0x78) {
        printf("\nByte order: Little-endian\n");
    } else {
        printf("\nByte order: Big-endian\n");
    }

    return 0;
}