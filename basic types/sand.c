
#include <stdio.h>
#include <limits.h>

int main(void)
{
    // 1. Declaration
    int signed_num = -10;
    unsigned int unsigned_num = 10;

    printf("===== 1. BASIC DIFFERENCE =====\n");
    printf("Signed integer:   %d\n", signed_num);
    printf("Unsigned integer: %u\n", unsigned_num);


    // 2. Range
    printf("\n===== 2. RANGE OF INTEGER =====\n");
    printf("Signed minimum:   %d\n", INT_MIN);
    printf("Signed maximum:   %d\n", INT_MAX);
    printf("Unsigned minimum: %u\n", 0U);
    printf("Unsigned maximum: %u\n", UINT_MAX);


    // 3. Negative values
    printf("\n===== 3. NEGATIVE VALUES =====\n");

    int a = -5;
    unsigned int b = (unsigned int)-5;

    printf("Signed -5:   %d\n", a);
    printf("Unsigned -5: %u\n", b);


    // 4. Overflow and underflow
    printf("\n===== 4. OVERFLOW AND UNDERFLOW =====\n");

    unsigned int x = UINT_MAX;
    printf("Unsigned maximum: %u\n", x);

    x = x + 1;
    printf("After adding 1:   %u\n", x);

    x = 0;
    x = x - 1;
    printf("After subtracting 1 from 0: %u\n", x);


    // 5. Comparison
    printf("\n===== 5. COMPARISON =====\n");

    int p = -1;
    unsigned int q = 1;

    printf("Signed -1 < Signed 1: %d\n", p < 1);
    printf("Signed -1 < Unsigned 1: %d\n", p < q);


    // 6. Division
    printf("\n===== 6. INTEGER DIVISION =====\n");

    int m = -7;
    unsigned int n = 7;

    printf("Signed division:   %d\n", m / 2);
    printf("Unsigned division: %u\n", n / 2);


    // 7. Type conversion
    printf("\n===== 7. TYPE CONVERSION =====\n");

    int negative = -100;
    unsigned int converted = negative;

    printf("Original signed value: %d\n", negative);
    printf("Converted unsigned:    %u\n", converted);


    // 8. sizeof
    printf("\n===== 8. MEMORY SIZE =====\n");

    printf("Size of signed int:   %zu bytes\n", sizeof(int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));

    return 0;
}
