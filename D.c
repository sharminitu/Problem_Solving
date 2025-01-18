#include <stdio.h>
int main()
{
    int a = 5, b = 2, sum, modulus;

    sum = a + b;
    modulus = a % b;

    printf("Sum = %d\n", sum);
    printf("Modulus = %d\n", modulus);

    return 0;
}