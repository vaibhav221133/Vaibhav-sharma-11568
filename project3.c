#include <stdio.h>

int main() {
    int a, b;
    char ch;
    float f;
    double d;
    int temp;

    // Input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    // Output
    printf("\nInteger a = %d\n", a);
    printf("Integer b = %d\n", b);
    printf("Character = %c\n", ch);
    printf("Float = %f\n", f);
    printf("Double = %lf\n", d);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
