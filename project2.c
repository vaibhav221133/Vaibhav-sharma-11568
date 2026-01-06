#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);

    if (a > b)
        printf("Largest = %d\n", a);
    else
        printf("Largest = %d\n", b);

    return 0;
}
