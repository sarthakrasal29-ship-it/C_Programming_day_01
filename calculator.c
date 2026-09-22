#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition       = %d\n", num1 + num2);
    printf("Subtraction    = %d\n", num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);

    if (num2 != 0)
        printf("Division       = %d\n", num1 / num2);
    else
        printf("Division       = Cannot divide by zero\n");

    return 0;
}
